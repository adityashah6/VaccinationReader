#include "Vaccination.h"
Vaccination::Vaccination()
{
 
  VacinationRate = -1.0; //the rate of vacination is -1

}

void Vaccination::readVaccinationsFile(string filename)
{
    ifstream File;
    File.open(filename);

    string CountyName;
    int Vaccinated;

    while(File >> CountyName >> Vaccinated)
    {
        
        countyVacc.insert (pair<string,int>(CountyName,Vaccinated)); // inserting the county name and the number vaccinated
    }
}

void Vaccination::readPopulationFile(string filename)
{
    ifstream File;
    File.open(filename);

    string CountyName;
    int Population;

    while(File >> CountyName >> Population)
    {
        
        countyPop.insert (pair<string,int>(CountyName,Population)); //inserting county name and the population 
    }
}

double Vaccination::vaccinationRate(string county)
{
    
    VacinationRate = -1;

    if (countyPop.find(county) != countyPop.end() && countyVacc.find(county) != countyVacc.end())
    {
        VacinationRate = static_cast<double>(countyVacc[county]) / static_cast<double>(countyPop[county]); // if the counties are found 
    }
    
    return VacinationRate;
}
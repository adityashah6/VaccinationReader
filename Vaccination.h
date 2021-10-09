//
//Program Summary
//The following program has two maps one that is the county population and county vaccination 
//it reads through all the county names population and vaccination
//it searches into the two maps coutny population and county vaccination
//searches and does the maps if its found it return the variable
// if not found then it returns -1



#ifndef VACINATION_H
#define VACINATION_H


#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Vaccination
{
  private:
   map<string, int> countyPop; // This is the string name of county and integer value of the population  
   map<string, int> countyVacc;  //This is the  string name of the county and its integer value vaccinated
   double VacinationRate;
public:
    Vaccination();
    void readVaccinationsFile(string filename);
    void readPopulationFile(string filename);
    double vaccinationRate(string county);
};

#endif
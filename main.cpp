//Catherin-Elizabeth Biggs-Grace
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
int main() 
{

  ifstream inData;
  ofstream outData;

  inData.open("data.txt");
  outData.open("output.dat");

  string firstName, lastName;
  double baseSalary, commissionPercent, commission, expenses, totalSales, total;


  //first employee
  inData >> lastName >> firstName >> baseSalary >> totalSales >> commissionPercent>> expenses;
  inData >> baseSalary >> commissionPercent;
  inData >> totalSales;
  inData >> expenses;

  commission = totalSales*commissionPercent;
  total = baseSalary + (totalSales*commissionPercent) + expenses; 

  outData << firstName << lastName << endl;
  outData << baseSalary << commissionPercent << endl;
  outData << totalSales << endl;
  outData << expenses << endl;
  outData << total << endl;



  //second employee
  inData >> lastName >> firstName >> baseSalary >> totalSales >> commissionPercent>> expenses;
  inData >> baseSalary >> commissionPercent;
  inData >> totalSales;
  inData >> expenses;

  commission = totalSales*commissionPercent;
  total = baseSalary + (totalSales*commissionPercent) + expenses; 

  outData << firstName << lastName << endl;
  outData << baseSalary << commissionPercent << endl;
  outData << totalSales << endl;
  outData << expenses << endl;
  outData << total << endl;


  //third employee
  inData >> lastName >> firstName >> baseSalary >> totalSales >> commissionPercent>> expenses;
  inData >> baseSalary >> commissionPercent;
  inData >> totalSales;
  inData >> expenses;

  commission = totalSales*commissionPercent;
  total = baseSalary + (totalSales*commissionPercent) + expenses; 

  outData << firstName << lastName << endl;
  outData << baseSalary << commissionPercent << endl;
  outData << totalSales << endl;
  outData << expenses << endl;
  outData << total << endl;

//closing files

 inData.close ();
 outData.close ();

return 0;

}

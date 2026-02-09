//Catherin-Elizabeth Biggs-Grace
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() 
{
//declaring input and output streams
  ifstream inData;
  ofstream outData;

//opening the output file
  inData.open("data.txt");
  outData.open("output.dat");

// declaring variables
  string firstName, lastName;
  double baseSalary, commissionPercent;
  double totalSales;
  double expenses;

  double total, commission;

//reading in employees
  //first employee
  outData << fixed << showpoint;
  outData << setprecision (2);

  inData >> firstName >> lastName >> baseSalary >> totalSales >> commissionPercent>> expenses;
  inData >> baseSalary >> commissionPercent;
  inData >> commission;
  inData >> expenses;

  commission = totalSales*commissionPercent;
  total = baseSalary+(totalSales*commissionPercent)+expenses; 

  outData << "Payroll data for " << setw(13)<<  firstName << " " << lastName << endl;
  outData << " " << endl;
  outData << "Base Salary: " << setw(10)<< baseSalary << endl;
  outData << "Commision: " << setw(12) << commission << " (" << commissionPercent << "%" << " of " << totalSales << ")"<< endl;
  outData << "Expenses: " << setw(13) << expenses << endl;
  //outData << "    ------" << setw(13) << endl;
  outData << "Total: " << setw(16) << total << endl;



  //second employee


  outData << fixed << showpoint;
  outData << setprecision (2);

  inData >> firstName >> lastName >> baseSalary >> totalSales >> commissionPercent>> expenses;
  inData >> baseSalary >> commissionPercent;
  inData >> commission;
  inData >> expenses;

  commission = totalSales*commissionPercent;
  total = baseSalary + (totalSales*commissionPercent) + expenses; 

  outData << "Payroll data for " << setw(13)<<  firstName << " " << lastName << endl;
  outData << " " << endl;
  outData << "Base Salary: " << setw(10)<< baseSalary << endl;
  outData << "Commision: " << setw(12) << commission << " (" << commissionPercent << "%" << " of " << totalSales << ")"<< endl;
  outData << "Expenses: " << setw(13) << expenses << endl;
  //outData << "    ------" << setw(13) << endl;
  outData << "Total: " << setw(16) << total << endl;


  //third employee

  outData << fixed << showpoint;
  outData << setprecision (2);

  inData >> firstName >> lastName >> baseSalary >> totalSales >> commissionPercent>> expenses;
  inData >> baseSalary >> commissionPercent;
  inData >> commission;
  inData >> expenses;

  commission = totalSales*commissionPercent;
  total = baseSalary + (totalSales*commissionPercent) + expenses; 

  outData << "Payroll data for " << setw(13)<<  firstName << " " << lastName << endl;
  outData << " " << endl;
  outData << "Base Salary: " << setw(10)<< baseSalary << endl;
  outData << "Commision: " << setw(12) << commission << " (" << commissionPercent << "%" << " of " << totalSales << ")"<< endl;
  outData << "Expenses: " << setw(13) << expenses << endl;
  //outData << "    ------" << setw(13) << endl;
  outData << "Total: " << setw(16) << total << endl;

//closing files

 inData.close();
 outData.close();

return 0;

}

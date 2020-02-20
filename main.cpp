//Unit 6 Assignment
//Date: 2-17- 2020 IDE: Repl. it tool 

#include <iostream>
#include "accounts.h"
#include <fstream>
#include <algorithm>
using namespace std;

//function prototype
void sortArrayBDSC(int [], int size);
void printArray (int[], int size);

int main() 
{
  ofstream myfile;
myfile.open ( "Results.txt");
myfile << "Book Bubble Sort DSC Time\n" << "Start: " <<cpuTime() << endl;
sortArrayBDSC(accountBalances, maxAccounts);//Call's function
myfile <<  "End: " << cpuTime () << "\n" << endl;

}
//**************************************************************************************
//Function Definition 
void sortArrayBDSC(int array [], int size)
{
 bool swap;
 int temp;
 do
 {
   swap = false;
    for ( int count = 0; count < (size -1); count ++)
    {
      if (array[count] < array [count +1])
      {
        temp=array[count];
        array [count] =array [count +1];
        array [count +1] = temp;
        swap = true;
      }
    }
 }
 while (swap);

printArray (accountBalances, maxAccounts);//Displays results
}
void printArray (int arrayVals [], int size) //Displays function 
{
  cout << "\nPrinted Values in Array: " << endl;
  for (int i = 0; i< size ; i ++)
  {
  cout<< arrayVals[i] << ",";
  }
  cout << "\n" << endl;
}
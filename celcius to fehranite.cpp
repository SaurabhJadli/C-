//C++ program for converting degree Celsius into Fahrenheit
#include<iostream>
using namespace std;

int main()
{
   float fahr, cel;
   char option;

   cout << "Celsius to Fahrenheit." << endl;

cout << "Enter the temperature in Celsius: ";
      cin >> cel;

      fahr = (1.8 * cel) + 32.0; //temperature conversion formula
      cout << "\nTemperature in degree Fahrenheit: " << fahr << " F" << endl;

   return 0;
}

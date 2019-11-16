//
//Input output stream header file
#include <iostream>
using namespace std;
//Start of main method
int main()
{
   //Variable declaration
   unsigned char age;
   long startEnergy;
   char characterLevel;
   
   //Get user input on character
   cout<< "What is your character's age?: ";
   cin >> age;
   cout << "How much start energy does your character have: ";
   cin >> startEnergy;
   cout << "What is the character level: ";
   cin >> characterLevel;
   
   //Displaying character charateristics
   cout << "Your character is " << age << " years old." << endl;
   cout << "Has " << startEnergy << " of starting energy." << endl;
   cout << "And their level is " << characterLevel << "." << endl;
   return 0;
}
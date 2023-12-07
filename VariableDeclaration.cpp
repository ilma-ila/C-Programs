//Program to demonstrate Variable declaration and usage
#include <iostream>
using namespace std;

int main(){

    //Syntax for declaring variable
    //type variableName = value;

    int myNum = 5;               // Integer (whole number without decimals)
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)

    // Method 1:
    cout << myNum ;
    cout<< endl;
    
    //Method 2: 
    cout <<"Integer Number is: "<< myNum ;

    /*Display in New Line
    Method 1: */
    cout <<"\nFloat Number is:"<< myFloatNum << "\n";
    //Method 2:
    cout <<"Char is: "<< myLetter << endl ;

    cout <<"Text string is: " << myText << "World \n" ;
    cout <<"Boolean is: " << myBoolean; 
    return 0;

}
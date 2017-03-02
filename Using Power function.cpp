#include <iostream>     //This includes InputOutput Library

#include <cmath>

using namespace std;

int main()      //This is the main function
{       //Start of main body

    cout<<"Please enter a number: ";    //Prompts the user for number

    double num;    //Declares integer variable with label : num

    cin>>num;       //Takes user input and stores it in variable

    double power;

    cout<<"Please enter the power of your number: ";

    cin>> power;

    double powered = pow(num, power);
+
+
+
6+

    cout<<endl<<"Your number is " << num << " raised to the " << power <<"th power is equal to " <<powered  <<"."<<endl;      //Displays the number to the user


    return 0;       //End of program
}       //End of main body

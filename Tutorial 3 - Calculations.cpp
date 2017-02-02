#include <iostream>

using namespace std;

int main()
{
    int number_1, number_2;

    cout<<"Please enter your first number: ";

    cin>> number_1;

    cout<<"Please enter your second number: ";

    cin>> number_2;


    int sum, difference, product, qoutent;      //Here we declare multiple boxes in the computer's memory for storing intigers, and give them different names / labels.
                                                //I repeat : They do not hold anything meaningful yet.



    //Next lines 24 to 30 we write some formulas to perform some operations on the numbers and store it in the new boxes we just made.
    //The operations SHOULD be selfexplanatory, :v , google for more operations. :D
    sum = number_1 + number_2;

    difference = number_1 - number_2;

    product = number_1 * number_2;

    qoutent = number_1 / number_2;


    //Finally we print out everything :D

    cout<<"The sum of " << number_1 << " and " << number_2 << " is " << sum << "." <<endl;

    cout<<"The difference between " << number_1 << " and " << number_2 << " is " << difference << "." <<endl;

    cout<<"The product of " << number_1 << " and " << number_2 << " is " << product << "." <<endl;

    cout<<"The qoutent when " << number_1 << " is divided by " << number_2 << " is " << qoutent << "." <<endl;



    return 0;
}

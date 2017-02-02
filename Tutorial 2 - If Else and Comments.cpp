//Welcome back Hossages!
/*
    A brief review on what we did last class : See tutorial 1 :v

    This class we will be doing Conditional Statements
*/



#include <iostream>

using namespace std;

int main()
{
    int number;     //Here we make a box / container in the memory
                    //of   the computer which is big enough to hold just
                    //integer values / data.

                    //Right now our box does not hold anything
                    //we're interested in. ;) (Try printing it
                    //yourself just after this line to find out ;)


    cout<<"Please enter a number: ";    //Take input from the user
                                        //and store it in our box.

    cin>> number;                       //Stored! (box == number)

//    cout<<endl<<"Your number is : " << number <<endl;

//I did this ^above line just as a sanity check
//- meaning I wanted to make sure je what I did so far worked, :v wouldn't want to look stopod infront of you guys and girls :v



    /*
    Okay, so here's the new things:
    conditional blocks.

    The structure of an if/else block is like:

    if(condition)
    {
        //code to be executed
    }
    else
    {
        //code to be executed
    }

    */


    /*
    Often times, having only an if else blocks (2 case senarios) does not fit what we want to do.
    Thats when the else if(condition) block comes. :D
    */

    if (number < 0)   //if the number we enter is greater or equal to zero
                      //Then this statement is false

                      //The program keeps executing line by line, and when it encounters the if block,
                      //it first checks if the condition in the brackets is true
                      //if it is true, it goes into the curly (2nd) brackets
                      //and executes the codes.
                      //AND it skips all the other else if, and else blocks connected to this if.
    {
        cout<<"\nYour number is negative."<<endl;
    }
    else if (number > 0)    //If the if block did not run, the program checks if the condition in the else if block is true, if that is true, then the body of the else if is run.
    {
        cout<<"\nYour number is positive."<<endl;
    }
    else                    //If neither if / else if worked, then the program directly goes to the else.
                            //It does not check any conditions this time.

    {
        cout<<"\nYour number is unsigned."<<endl;
    }

    return 0;
}



//Oh yeah, the double slash, in CPP, means comments, it is basically a way of writing notes in your code to remind yourself why you wrote this, or what this code does.
//Might sound like you're never gonna need it, but trust me, when you go to the hundred lines of coding, or more, and you will soon :v ,then you wont remember what your code does without commenting. :v Other people wont get you either.

//So as good practice, comment out your codes, so that you and other people know what it does.

//You can also comment out codes to make them inactive.















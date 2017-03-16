#include <iostream>

using namespace std;


// So today we're adding a new weapon to our arseanal - que Loops.
// Its one of the most important things in programming - i.e. shob language, shob jaygay lage, (loops, arrays, data structures, algos).
// Without further ado, lets start.




// for (starting_value_of_variable; condition_till_which_loop_will_work; increment)
// {
//     loop body
// }


// In smaller words:

// for (starting value, ending condition, increment)
// {
//     loop body
// }




int main()
{
    cout<<"Lets find the sum of numbers from 0 to n: "<<endl<<endl;

    cout<<"Please enter the value of n: ";

    int bleh;

    cin>> bleh;

    cout<<endl<<"Value of n is : " << bleh <<endl<<endl;

    // cout<<"Starting Loop..."<<endl<<endl;

    // for (int iter = 0; iter < bleh; iter++)
    // {
    //     // cout<<"Value of the iterator variable: " << iter;
    //     // cout << endl;
    //     cout<<"Value of " << iter <<"-th term: " << iter;
    //     cout<<endl;
    // }


    // cout<<"Ended Loop! " <<endl << endl;



    // cout<<"Now Lets find the cummulative sum: " <<endl <<endl;

    // int cummulative_sum = 0;



    // cout<<"Starting Loop..."<<endl<<endl;

    // for (int iter = 0; iter < bleh; iter++)
    // {
    //     // cout<<"Value of the iterator variable: " << iter;
    //     // cout << endl;
    //     cout<<"Value of " << iter <<"-th term: " << iter;
    //     cout<<endl;
    //     cummulative_sum = cummulative_sum + iter;
    //     cout<<"Cummulative Sum: " <<cummulative_sum <<endl;
    // }


    // cout<<"Ended Loop! " <<endl << endl;

    // cout<<"\nThe value of bleh after loop: " <<bleh <<endl;
    // cout<< "The value of cummulative_sum after loop: " <<cummulative_sum <<endl;




     cout<<"Finally A Key Note On Variables And Scopes: " <<endl <<endl;

    int cummulative_sum = 0;



    cout<<"Starting Loop..."<<endl<<endl;

    for (int iter = 0; iter < bleh; iter++)
    {
        cout<<"Value of the iterator variable: " << iter;
        cout << endl;
        // cout<<"Value of " << iter <<"-th term: " << iter;
        // cout<<endl;
        cummulative_sum = cummulative_sum + iter;
        // cout<<"Cummulative Sum: " <<cummulative_sum <<endl;
    }


    cout<<"Ended Loop! " <<endl << endl;

    cout<<"\nThe value of bleh after loop: " <<bleh <<endl;
    cout<< "The value of cummulative_sum after loop: " <<cummulative_sum <<endl;

    // cout<<"Iterator variable after loop: " <<iter <<endl;


    return 0;
}

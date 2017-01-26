//  All Right Primages!
/*
    Welcome To Your First C++ Tutorial!

    Given most of you are new here, lets keep terms at a minimum, for now, and do everything in layman's terms.

    So basically if you've come this far, I'm guessing you've your own GitHub account with a repository for all your codes / projects to build up your Port Folio, and have downloaded and installed CodeBlocks - this thing, TADA - successfully!

    You might have noticed if you clicked on Help > About, je its written IDE.

    IDE stands for Interactive Development Environment - or so I like to call it, you never know - and this is where you make the magic happen!


    Okay, so without further ado, lets get forward to actually getting our hands dirty. :< >-> :D
*/




/*
    First we, or I :v , went to File > New > Empty File.

    Then an Untitied (blank) File opened up with an asterisk / star(*) beside the file name.

    That means its not saved.

    Go to File > Save file / Save file as to save it.

    The asterisk will disappear.


    P.s. Of'en you hossages will see je your codes aren't running.
         Check if there's an asterisk before the file name.
         That means you haven't saved it damit.! :<
         Save before running! :D

*/





/*
    Below is the basic template of all - and for a higher level - most :p C++ programs.

    Always write this down before starting any code! Initially :p :


    Template:


    #include <iostream>

    using namespace std;

    int main()
    {

       /* your code goes here \*

        return 0;
    }



*/




#include <iostream>     //In Line number 71, i.e. here, we imported the built-in module / library called IO Stream.
                        //A library / module is basically a package full of codes, premade by other programmers, to make our lives a heck lotta easier.
                        //Basically its like, I've made the wheel, now you don't have to bother with it, just make a dang airplane.

                        //The IO of IO Stream stands for Input and Output.
                        //It basically lets you take and display inputs and outputs to and from the user through the console.       P.s. Getting to console later.



using namespace std;        //This, we're coming back here in a later class. Kudos to that. Or I'm too lazy. :v


int main()              //int main()   << This is the function which is common for all C++ programs. (Not always)
                        //int main() this is the start of the function, and immidiately after we give a pair of curly braces where we put in the body of this function.


{                       //Start of the body of the code...

    cout<<"Hi";         //cout meaning Console Output. Console is basically the terminal (Unix) or Command Prompt (Windows) you saw earlier.
                        // The double left pointing angle brackets "<<" - called left shift - shows je whatever is on the right of it is being passed into the Console.
                        //Here in the right side we have a pair of double quotes " " with the word Hi, "Hi". Anything inside a pair of double quotes " " - NOT ' ' - are called strings.
                        //String is basically a fancy way of saying a collection of characters :v or just text. :v Thats prettiee much it bruh.
                        //As in Englsih you have to put a fullistop at the end of every sentence - proper English language syntax - in C++, the semicolon - ; - is the equivalent for a fullstop.
                        //At the end of every line / statement, PUT semicolons.

    string myname;      //Here we made a box in the memory of the PC, and labelled that box myname (you can label this box anything)
                        //We also specified that this box can only fit string information / data.
                        //Hence string myname;

    cout<<"Whats my name?" <<endl;  //You guys Google what this does -,-

    cout<<"My name: ";  //This line is just added to enhance user experience - so that they know what they're doing / supposed to do or NOT do :p (Pepol are not smart!)

    cin>> myname;      //cin>> New term! Guess what it means. Console in :v
                       //The right shift - double right pointing angle brackets - mean it is taking input from the Console and putting it into the box myname. Simpol?

    cout<<"Thats right! \nMy name is " << myname << "! " << myname <<" ki jowani! bla bla bla! ";     //Here we display - cout - text which is fixed - and a text which can change - myname - based on a variable. So yeah. Run it :v
                        //There's something new in this line too. Figure it out. :D :p

    return 0;           //This tells the PC je I've run successfully, with zero errors, now terminate me. :D

}                      //End of the body of the code!




//Somethings to be noted:

//Save and press build and run / compile and run

//When you press compile and run / build and run, The program will first start from the first line - rip english - and translate the lines one by one to machine (PC) understandable code

//Here we first import the libraries

//Then run the main function

//Finally terminate / return from the function and clear the memory of our - program's - existence.




//Hope you guys and girls got it, and hopefully enjoyed it. Now go crazy with this and use what you got to make some silly useless things. Will help later. I promiss. :p

//Next time!

//Kudos


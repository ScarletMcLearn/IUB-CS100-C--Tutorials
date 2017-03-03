#include <iostream>

#include "t.h"


using namespace std;

int main()
{
	       srand(time(NULL));

          for (int i = 0; i < 10; i++)
          {
            // srand(time(0));
               int a = randy_ranger(1, 20);

               cout<< a << " ";
          }




//            cout<<endl<<"Try 2: " <<endl;


// //           srand(time(0));

//            for (int j = 0; j<=10; j++ )
//            {
//                cout<< 0 + rand() % (10 + 1) <<" ";
//            }


	return 0;
}

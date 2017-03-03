#include <iostream>

#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{
	       srand(time(0));

           for (int j = 0; j<=10; j++ )
           {
               cout<< 0 + rand() % (10 + 1) <<" ";
           }


           cout<<endl<<"Try 2: " <<endl;


//           srand(time(0));

           for (int j = 0; j<=10; j++ )
           {
               cout<< 0 + rand() % (10 + 1) <<" ";
           }

           


	return 0;
}

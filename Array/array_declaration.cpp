#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
   int i;
   
   
   int value[6] = {5,10,15,20,25,30};
 
	cout<<"Single Dimensional Array In C++ Example Program\n";
 
   for (i=0;i<6;i++)
   {
     
      cout<<"Position : "<<i<<" , Value : "<< value[i]<<" \n";
   }
  
   getch();
    return 0;
}

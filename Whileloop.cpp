#include <iostream>
using namespace std;
int main ()
{
   int x=1;
   int number=0;
   int sum=0;
   while (x<=5)
   {
       cout<<"Please enter a number= "<<endl;
       cin>>number;
       sum=sum+number;

       x++;
    }
   cout<<"The sum is "<<sum<<endl;
   return 0;
}

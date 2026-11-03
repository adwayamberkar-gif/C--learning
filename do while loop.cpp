#include <iostream>
using namespace std;
int main ()
{
   int x=1;
   int number=0;
   int sum=0;
  do
   {
       cout<<"Please enter a number= "<<endl;
       cin>>number;
       sum=sum+number;

       x++;
    }
     while (x<=5);
   cout<<"The sum is "<<sum<<endl;
   return 0;
}

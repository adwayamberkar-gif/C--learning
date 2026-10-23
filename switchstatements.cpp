#include <iostream>
usimg namespace std;

int main ()
{
   int grade;

   cout<<"Please enter your grade"<<endl;
   cin>> grade;

   switch (grade)
   {
       case 'A' : cout<<"EXCELLENT"<<endl;
       break;
       case 'B' : cout<<"VERY GOOD"<<endl;
       break;
       case 'C' : cout<<"YOU PASSED"<<endl;
       break;
       default : cout<<"INVALID ENTRY"<<endl;
       break;
   }
   return 0
}
       
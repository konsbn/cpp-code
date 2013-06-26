#include<iostream>
using namespace std;
struct det
{
       char name;
       char dob;
       int age;
       };
int main()

       {
           det det1;
           det1.name= "Shubham";
           det1.dob= "25-12-1993";
           det1.age= 19;
           
           cout<<"Name  "<<det1.name<<"  "<<"Date of birth   "<<det1.dob<<"  "<<"Age"<<det1.age<<endl;
           system("pause");
           return 0;
       }
           

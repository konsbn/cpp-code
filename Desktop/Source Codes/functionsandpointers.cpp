#include<iostream>
using namespace std;
void mult(int*);
int main()
{
    int a;
   cin>> a;
   mult(&a);
   system("pause");
   return 0;
}
void mult(int *ptr)
{
     
    
     *ptr *=2;
     cout<<*ptr;
     }

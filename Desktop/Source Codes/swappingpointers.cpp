#include<iostream>
using namespace std;
void order(int*, int*);
int main()
{
    int a,b;
    cin>>a>>b;
    order(&a, &b);
    system("pause");
    return 0;
}
void order(int*n1, int*n2)
{
     int temp;
     if(*n1>*n2)
     {
                temp=*n1;
                *n1=*n2;
                *n2= temp;
                cout<<"The sorted sequence is  "<<*n1<<"\t"<<*n2<<endl;
                }
                else 
                cout<<"the sorted sequence is"<<*n1<<"\t"<<*n2<<endl;
                }

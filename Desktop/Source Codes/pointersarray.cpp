#include<iostream>
using namespace std;
int main()
{
    int intarray[]={2,4,6,8,9};
    int* intarr;
    intarr=intarray;
    for(int j=0; j<5; j++)
    {
            cout<<*(intarr++)<<endl;
            cout<<intarr<<endl;
            }
            system("pause");
            return 0;
            }

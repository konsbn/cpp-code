#include<iostream>
using namespace std;
int main()
{
    int intarray[5]={4,5,6,7,8};
    cout<<intarray+2;
    for(int j=0; j<5; j++)
    {
            cout<<*(intarray+j)<<endl;
            }
            system("pause");
            return 0;
}

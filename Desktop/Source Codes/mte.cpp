#include<iostream>
using namespace std;
int main()
{
    for(int k=0; k<8; k++){
            cout<<k<<endl;
            if(k%2==0)
            cout<<k+3<<endl;
            else if(k%3==0) continue;
            else if(k%5==0)break;
            cout<<"end of loop"<<endl;}
            cout<<"end of program"<<endl;
            system("pause");
            return 0;
}

#include<iostream>
using namespace std;
int main()
{
    void centimize(double&);
    double inches;
    cin>>inches;
    centimize(inches);
    cout<<inches<<endl;
    return 0;
}
void centimize(double& ptr)
{
    ptr*=2.54;
}

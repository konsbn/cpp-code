#include<iostream>
using namespace std;
int main()
{
    double n;
    double sum=0.0;
    double inter;
    cout<<"Enter the number of terms\t";
    cin>>n;
 
    for(double lc=1; lc<=n; lc++)
    {
            inter=1/(lc*lc);
            sum= sum+inter;
            }
            cout<<sum<<endl;
            system("pause");
            return 0;
            }

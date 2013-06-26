#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int s=1;
    int n=1;
    int it;
    cout<<"enter the number of terms till which we have to calculate the series"<<endl;
    cin>>it;
    for(int l=1; l<=it; l++)
    {
            i=-1*i;
            n=n*l;
            s=s+((i*l)/n);
}
cout<<s;
system("pause");
return 0;
}
            

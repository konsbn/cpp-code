#include<iostream>
using namespace std;
int main()
{
    const int max= 80;
    char s[max];
    int d;
    char a;
    int l=0;
    cout<<"input"<<endl;
    cin.getline(s,max);
    for(int i=0; i<=strlen(s); i++)
    {
            a=s[i];
            d=a;
            if(d==32)
            l=l+1;
            }
            cout<<"number of spaces"<<l<<endl;
    system("pause");
    return 0;
}

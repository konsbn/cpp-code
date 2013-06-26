#include<iostream>
using namespace std;
void threefn(int, int, int);
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    threefn(a, b, c);
    return 0;
}
void threefn(int n1, int n2, int n3)
{
    cout<<n1<<n2<<n3;
}

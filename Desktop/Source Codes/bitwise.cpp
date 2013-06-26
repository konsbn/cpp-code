#include<iostream>
using namespace std;
int main()
{
    short x=-12;
    short y=13;
    string s;
    s=x;
    x=x&y;
    cout<<x<<" "<<s;
    system("pause");
    return 0;
}

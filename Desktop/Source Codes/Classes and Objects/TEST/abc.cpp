#include<iostream>
using namespace std;
int main()
{
    char* str="hello";
    char* st;
    st=str;
    while(*st)
    {
        cout<<*st;
        st++;
    }

}

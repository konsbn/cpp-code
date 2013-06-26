#include<iostream>
using namespace std;
int main()
{
    char* str ="Hello";
    while(*str)
    {
        cout<<*str;
        str++;
    }
    return 0;
}

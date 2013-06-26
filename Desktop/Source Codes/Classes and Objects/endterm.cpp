#include<iostream>
using namespace std;
void mystery(char* ,char*);
int main()
{
    char st1[80], st2[80];
    cin>>st1>>st2;
    mystery(st1, st2);
    cout<<st1<<endl;
    system("pause");
    return 0;
}
void mystery(char* s1, char* s2)
{
     while(*s1!='\0') ++s1;
     for(*s1=*s2; s1++; s2++)
     ;//blank
     }

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char* str="Hello Monalisa";
    int len=strlen(str);
    char* temp;
    temp=new char[len+1];
    strcpy(temp, str);
    cout<<"*temp= "<<temp<<endl;
    delete[] temp;
    return 0;
}

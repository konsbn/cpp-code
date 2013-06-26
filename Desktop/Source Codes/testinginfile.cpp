#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    
    const int max=80;
    char s[max];
    ifstream infile;
    infile.open("text.txt");
    while(!infile.eof())
    {
    infile.getline(s, max);
    cout<<s;
}

    system("pause");
    return 0;
}

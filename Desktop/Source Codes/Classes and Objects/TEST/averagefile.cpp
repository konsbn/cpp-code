#include<iostream>
#include<fstream>
using namespace std;
  int avg( int arr[], int size)
    {
        int temp;
        for(int i=0; i<5; i++)
        {
                temp=temp+arr[i];
                }
                temp=temp/size;
        return temp;
        }
int main()
{
    int a[5];
    ifstream infile;
    infile.open("test101.txt");
    for(int l=0; l<5; l++)
    {
            infile>>a[l];
            }
  
    cout<<avg(a, 5);
    system("pause");
    return 0;
}
        

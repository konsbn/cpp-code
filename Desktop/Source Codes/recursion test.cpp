#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    ofstream recursion;
    float a,b;
    float x;
    float f;
    int l=0;//loop counter
    int n; 
    cout<<"Enter the logistic variable"<<endl;
    cin>>x;
    cout<<"Enter the number of iterations"<<endl;
    cin>>n;
      recursion.open("recursive data sets.txt");

    while(l<=n){
        f=3*x*(1-x);
        cout<<x<<endl;
        
           recursion<<x<<endl;
            
        
        x=f;
        l=l+1;
    }
     recursion.close(); 
    system("pause");
    return 0;
}       
       

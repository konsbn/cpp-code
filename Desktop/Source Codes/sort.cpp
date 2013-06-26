#include<iostream>
using namespace std;
int main()
{
    cout<<"this program sorts 10 numbers smallest first"<<endl;
    const int s=5;
    int a[s];
    for(int q=0; q<5; q++)
    {
            cout<<"enter a number"<<endl;
            cin>>a[q];
            }
            cout<<"the numbers you entered were"<<endl;
            for(int l=0; l<5; l++)
            {
                    cout<<a[l];
                    cout<<endl;
                    }
                   
                    int m=a[2];
                    int st[5];
                    for(int i=0; i<5; i++)
                    {
                            if(a[i]<m)
                            {
                                      st[i]=a[i];
                                      m=a[i];
                                      }
                            if(a[i]>m)
                            {
                                      st[4-i]=a[i];
                                      m=a[i];
                                      }
                            if(a[i]==m)
                            {
                                       st[i]=a[i];
                                       m=a[i];
                                       }
                            
                                      }
                      cout<<"the sorted sequnce is"<<endl;
                      for(int k=0; k<5; k++)
                      {
                              cout<<st[k];
                              cout<<endl;
                              }
                    system("pause");
                    return 0;
}

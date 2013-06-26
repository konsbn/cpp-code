 #include<iostream>
 using namespace std;
 int main()
 {
 
 
  for(int j=5; j<=7; j++)
                    {
                             for(int k=1; k<=j-4; k++)
                             {
                                      cout<<" ";
                                      }
                             for(int i=1; i<=15-2*j; i++)
                             {
                                      cout<<"*";
                                      }
                                      cout<<endl;
                                      }
                             
                             
                             
    system("pause");
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
class namebase
{
      protected:
                int age;
                string name;
      public:
             
             void getname()
             {
                  cout<<"Enter Name"<<endl;
                  cin>>name;
                  cout<<"enter age"<<endl;
                  cin>>age;
                  }
      
};
class parent : public namebase
{
      private: 
               int p_age;
               string Pname;
      public:
          
             void display()
             {
                  cout<<"Parent Name\t"<<name<<endl;
                  cout<<"Parent Age\t"<<age<<endl;
                  
                  }
             void getname()
             {
                  namebase::getname();
                
                  }
};
 
int main()
{
    parent p1; 
    p1.getname();
    p1.display();
  
    system("pause");
    return 0;
}            
                

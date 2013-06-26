#include<iostream>
#include<string>
using namespace std;
struct Node
{
       string name;
       string desig;
       int empno;
       Node* nextlink;
};
class payroll
{
      private:
              Node* head;
      public:
             payroll()
             { head==NULL;}
             void addentry()
             {
                  Node* newentry; Node* Nodeptr;
                  newentry= new Node;
                  cout<<"Enter Name\t"; cin>>newentry->name;
                  cout<<"\nEnter Designation\t"; cin>>newentry->desig;
                  cout<<"\nEnter Number\t"; cin>>newentry->empno;
                  if(head==NULL)
                  { head=newentry;}
                  else
                  {
                      Nodeptr=head;
                      while(Nodeptr->nextlink)
                      {
                             Nodeptr=Nodeptr->nextlink;

                             }
                             Nodeptr->nextlink= newentry;
                             }
             }
                  void display()
                  {
                       Node* nodeptr;
                       nodeptr=head;
                       while(nodeptr!=NULL)
                       {
                                               cout<<"Name\t"<<nodeptr->name;
                                               cout<<"\nDesignation\t"<<nodeptr->desig;
                                               cout<<"\nEmployee Number\t"<<nodeptr->empno;
                                               nodeptr=nodeptr->nextlink;
                                               }
                    }
};

int main()
{
    cout<<"                        APPLE COMPUTERS PAYROLL"<<endl;
    payroll p1;
    p1.addentry();

    p1.display();

    return 0;
}


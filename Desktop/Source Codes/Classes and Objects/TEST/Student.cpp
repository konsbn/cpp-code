#include<iostream>
#include<cstring>
using namespace std;
struct link
{
       int roll;
       string Name;
       link* next;
};
class List
{
      private:
              link* head;
      public:
             List()
             {  head=NULL;}
                 
             void getdetails(string n, int rn)
             {
                  link *newlink; link* linkptr;
                  newlink= new link();
                  roll=rn;
                  strcpy(Name, n);
                  if(head==NULL)
                  {head=newlink;}
                  else
                      {
                                 linkptr=head;
                                 while(linkptr->next)
                                 {
                                                     linkptr=linkptr->next;}
                                 linkptr->next=newlink;
                                 }
                  }
             void display()
             {
                  link* current;
                  current=head;
                  while(current!=NULL)
                  {
                                      cout<<current->Name<<endl;
                                      cout<<current->roll<<endl;
                                      }
                  }
             void delete(int no)
             {
                  link* linkptr; link* prev;
                  if(head==NULL)
                  return;
                  if(head->roll==no)
                  {
                                    linkptr=head->next;
                                    delete head;
                                    head= linkptr;
                                    }
                  else
                  {
                    while(head->next!=NULL&&head->roll!=no)
                    {
                                                           prev=linkptr;
                                                           linkptr=linkptr->next;
                                                           }
                    prev->next=linkptr->next;
                    delete linkptr;
                    }
                    }
};
int main()
{
    List l;
    l.getdetails("shubham", 42);
    l.getdetails("shubha", 41);
    l.display();
    l.delete(41);
    l.display();
    system("pause");
    return 0;
}
             

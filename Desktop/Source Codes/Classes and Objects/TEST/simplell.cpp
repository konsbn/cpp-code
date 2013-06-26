#include<iostream>
using namespace std;

struct Node
{
       int value;
       Node* next;
};
class SLL
{
      private:
              Node *head;
      public:
             SLL()
             {head=NULL;}
             
             void appendnode(int number)
             {
                  Node *nodeptr;
                  Node *newnode = new Node();
                  newnode->value=number;
                  newnode->next=NULL;
                  if(head==NULL)
                  head=newnode;
                  else
                  {
                      nodeptr=head;
                      while(nodeptr->next)
                      nodeptr=nodeptr->next;
                      nodeptr->next=newnode;
                      }
                      }
                  void display()
                  {
                       Node *nodeptr;
                       nodeptr=head;
                       while(nodeptr!=NULL)
                       {
                                           cout<<nodeptr->value<<endl;
                                           nodeptr=nodeptr->next;
                                           }
                                           }
             void deletenode(int d)
             {
                  Node *nodeptr; Node *previous;
                  
                  if(head==NULL)
                  return;
                  if(head->value==d)
                  { 
                                    nodeptr=head->next;
                                    delete head;
                                    head=nodeptr;
                                    }
                  else
                  {
                      nodeptr=head;
                      if(nodeptr->value!=d && nodeptr->next!=NULL)
                      {
                                           previous=nodeptr;
                                           nodeptr= nodeptr->next;
                                           }
                      previous->next=nodeptr->next;
                      delete nodeptr;
                      }
                      }
                                    
};
int main()
{
    SLL list;
    list.appendnode(1);
    list.appendnode(2);
    list.appendnode(3);
    list.display();
    list.deletenode(2);
    list.display();
    system("pause");
    return 0;
}

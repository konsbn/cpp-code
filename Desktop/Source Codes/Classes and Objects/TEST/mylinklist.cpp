#include<iostream>
using namespace std;
struct link
{
    char name[20];
    int age;
    link* next;
};
class LL
{
    private:
        link* first;
    public:
        LL()
        {
            first=NULL;
        }
        void addlink()
        {
            link*newlink = new link;
            link*linker;
             cout<<"Enter Name\t";
                cin>>newlink->name;
                cout<<"Enter Age\t";
                cin>>newlink->age;
                newlink->next=NULL;

            if(first==NULL)
            {

                first=newlink;

            }
            else
                {
                    linker=first;
                    while(linker->next)
                    {
                        linker=linker->next;
                        linker->next=newlink;

                    }
                }


        }
        void display()
        {
            link* current;
            current=first;
            while(current->next)
            {
                cout<<current->name<<endl;
                cout<<current->age<<endl;
                current=current->next;
            }

        }
};
int main()
{
    LL list;
    list.addlink();
    list.addlink();
    list.display();
    system("pause");
    return 0;
    }

#include<iostream>
using namespace std;
struct link
{
    int data;
    char[20] name;
    link* next;
};
//------------------------------------------------
class linklist
{
    private:
        link* first;
    public:
        linklist()
        {
            first=NULL;
        }
    void add(int d, char n)
    {
        link* newlink= new link;
        newlink->data=d;
        newlink->name=n;
        newlink->next=first;
        first=newlink;
    }
    void display()
    {
        link* current=first;
        while(current!= NULL)
        {
            while(current->name)
            {
                cout<<current->name;
                current->name++;
            }
            cout<<current->data<<endl;
            current=current->next;
        }
    }
};
int main()
{
    linklist li;
    li.add(12, "shubha");
    li.display();
    return 0;
}

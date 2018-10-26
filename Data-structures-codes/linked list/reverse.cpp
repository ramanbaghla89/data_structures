using namespace std;
#include<iostream>
class abc
{
struct node
{
int value;
struct node *next;
};
struct node *start;
struct node *ptr;
struct node *new_node;
struct node *save;
public:
abc()
{
start=NULL;
}
void create()
{
int num;
cout<<"enter number to create a node and 0 to exit"<<endl;
cin>>num;
while (num!=0)
{
    if (start==NULL)
   {
    new_node=new node;
    new_node -> next=start;
    new_node -> value=num;
    start=new_node;
    save=new_node;
   }
   else{
        new_node=new node;
    new_node -> next=NULL;
    new_node -> value=num;
   save -> next=new_node;
   save=new_node;

   }
    cin>>num;

}
}

void show()
{
    ptr=start;
    while (ptr!=NULL)
    {
        cout<<ptr -> value;
        cout<<endl;
        ptr=ptr->next;
    }
}
void rev()
{
struct node *current=start;
struct node *prev=NULL;
struct node *next=NULL;
 while (current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        start = prev;
  }

};
int main()
{
abc obj;
obj.create();
obj.rev();
obj.show();
}

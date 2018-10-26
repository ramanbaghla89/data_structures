using namespace std;
#include<iostream>
class ddl
{
struct node
{
int value;
struct node *prev;
struct node *next;
};
struct node *start;
struct node *tail;
struct node *ptr;
struct node *new_node;
public:
ddl()
{
start=NULL;
}
void display()
{

    ptr=start;
    while (ptr!=NULL)
    {
        cout<<ptr -> value;
        cout<<endl;
        ptr=ptr->next;
    }
}
void create_end()
{
  int num;
    cout<<"enter a number to insert in the list and 0 to exit"<<endl;
    cin>>num;
    while(num != 0)
    {
        if (start==NULL)
        {
             new_node=new node;
        new_node -> value=num;
        new_node -> prev=NULL;
        new_node -> next=NULL;
        start=new_node;
        tail=new_node;
        }
        else
        {
             new_node=new node;
        new_node -> value=num;
        new_node -> prev=tail;
        new_node -> next=NULL;
        tail -> next = new_node;
        tail = new_node;
        }

    cin>>num;
    }
}
void swap1()
{
struct node *ptr1;
struct node *ptr2;
ptr=start;
int count=0,temp;
while (ptr != NULL)
{
count++;
ptr=ptr->next;
}
for (int p=1;p<count;p++)
{
ptr2=start;
  for (int c=0;c<count-p;c++)
  {
    ptr1=ptr2;
    ptr2 = ptr1->next;
    if (ptr1 -> value > ptr2 -> value )
    {
     temp=ptr1->value;
     ptr1->value=ptr2->value;
     ptr2->value=temp;
    }
  }
}

}
};
int main()
{
    ddl ob;
    ob.create_end();
    ob.swap1();
    ob.display();
}

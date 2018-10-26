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
void create_beg()
{
    int num;
    cout<<"enter a number to insert in the list and 0 to exit"<<endl;
    cin>>num;
    while(num != 0)
    {
    if(start==NULL)
    {
        new_node=new node;
        new_node -> value=num;
        new_node -> prev=NULL;
        new_node -> next=NULL;
        start=new_node;
    }
    else
    {
        new_node=new node;
        new_node -> value=num;
        new_node -> prev=NULL;
        new_node -> next=start;
        start -> prev= new_node;
        start=new_node;

    }
    cin>>num;
    }
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
void insert_after(int num,int data)
{
    ptr=start;
    while(ptr!= NULL)
    {
        if (ptr -> value==num)
        {
            break;
            ptr=ptr -> next;
        }
    }
   /* if (ptr -> next==NULL)
        insert_end(data);
    else
    {*/
     new_node=new node;
    new_node -> value=data;
    new_node -> prev=ptr;
    new_node -> next=ptr -> next;
    new_node -> next -> prev=new_node;
    ptr -> next=new_node;

}
};
int main()
{
ddl obj;
obj.create_end();
int num1,num2;
cout<<"enter no. to inserted"<<endl;
cin>>num1;
cout<<"enter the no. after which it has to be inserted"<<endl;
cin>>num2;
obj.insert_after(num2,num1);

obj.display();
}

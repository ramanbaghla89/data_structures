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
void insert_beg(int num)
{
    new_node=new node;
    new_node ->value=num;
    new_node -> prev=NULL;
    new_node -> next=start;
    start -> prev=new_node;
    start=new_node;
}
void insert_end(int num)
{
    tail=start;
    while (tail->next != NULL)
    {
        tail=tail->next;
    }
     new_node=new node;
    new_node ->value=num;
    new_node -> prev=tail;
    new_node -> next=NULL;
    tail -> next=new_node;
    tail=new_node;
}
void insert_after(int num,int data)
{
    ptr=start;
    while(ptr!=NULL)
    {
        if (ptr -> value==num)
        {
            break;

        }
         ptr=ptr -> next;
    }
    if (ptr -> next==NULL)
        insert_end(data);
    else
    {
     new_node=new node;
    new_node ->value=data;
    new_node -> prev=ptr;
    new_node -> next=ptr -> next;
    new_node -> next -> prev=new_node;
    ptr -> next=new_node;
    }
}
void insert_before(int num,int data)
{
    ptr=start;
    while(ptr->next!=NULL)
    {
        if (ptr -> value==num)
        {
            break;
        }
         ptr=ptr -> next;
    }
    if (ptr -> prev==NULL)
    {
        insert_beg(data);
    }
    else
    {
    new_node=new node;
    new_node -> value=data;
    new_node -> next=ptr;
    new_node -> prev=ptr -> prev;
    ptr -> prev -> next=new_node;
    ptr -> prev = new_node;
    }
}
};
int main()
{
    ddl obj;
    int ch;
    cout<<"enter 1 to create a list with insertion in beginning , 2 to create a list with insertion at last,3 to display ,4 to insert a new element in beginning,5 to insert a new element at end ,6 to insert new element after a given element,7 to insert a new element before a given element and 0 to exit"<<endl;
    cin>>ch;
    while (ch != 0)
    {
        switch(ch)
        {
        case 1:
            obj.create_beg();
            break;
        case 2:
            obj.create_end();
            break;
        case 3:
            obj.display();
            break;
        case 4:
            int num1;
            cout<<"enter value to be inserted"<<endl;
            cin>>num1;
            obj.insert_beg(num1);
            break;
        case 5:
            int num2;
            cout<<"enter value to be inserted"<<endl;
            cin>>num2;
            obj.insert_end(num2);
            break;
        case 6:
            int num3,num4;
            cout<<"enter value to be inserted"<<endl;
            cin>>num3;
            cout<<"enter the value after which it has to be inserted"<<endl;
            cin>>num4;
            obj.insert_after(num4,num3);
            break;
        case 7:
            int num5,num6;
            cout<<"enter value to be inserted"<<endl;
            cin>>num5;
            cout<<"enter the value after which it has to be inserted"<<endl;
            cin>>num6;
            obj.insert_before(num6,num5);
            break;
        }
         cout<<"enter 1 to create a list with insertion in beginning , 2 to create a list with insertion at last,3 to display ,4 to insert a new element in beginning,5 to insert a new element at end ,6 to insert new element after a given element,7 to insert a new element before a given element and 0 to exit"<<endl;
         cin>>ch;
    }
}

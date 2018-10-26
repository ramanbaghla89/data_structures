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
void del_beg()
{
    ptr=start;
    if (ptr -> next==NULL)
    {
        start=NULL;
        delete ptr;
    }
    else{
    start=ptr -> next;
     ptr -> next -> prev=NULL;
    ptr -> next=NULL;
   delete ptr;
    }
}
void del_end()
{
    tail=start;
    while (tail->next != NULL)
    {
        tail=tail->next;
    }
    ptr=tail;
    if (tail->prev==NULL)
        start=NULL;
    else{
    ptr -> prev->next=NULL;
    tail=ptr->prev;
    ptr->prev=NULL;
    }
    delete ptr;
}
void del_given(int num)
{
    ptr=start;
    while (ptr != NULL)
    {
        if (ptr->value==num)
        {
            break;
        }
            ptr=ptr->next;

    }
    if (ptr->next==NULL)
    {
        del_end();
    }
    else if (ptr->prev==NULL)
    {
        del_beg();
    }
    else{
        ptr->prev->next=ptr->next;
        ptr->next->prev=ptr->prev;
        ptr->prev=NULL;
        ptr->next=NULL;
        delete ptr;
    }
}
};
int main()
{
    ddl obj;
    int ch;

     cout<<"enter 1 to insert the value in beginning of list , 2 to insert in last , 3 to display , 4 to delete first element , 5 to delete last element , 6 to delete a specific element , 0 to exit"<<endl;

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
            obj.del_beg();
            break;
        case 5:
            obj.del_end();
            break;
        case 6:
            int num1;
            cout<<"enter number to be deleted"<<endl;
            cin>>num1;
            obj.del_given(num1);
        }

     cout<<"enter 1 to insert the value in beginning of list , 2 to insert in last , 3 to display , 4 to delete first element , 5 to delete last element , 6 to delete a specific element , 0 to exit"<<endl;

         cin>>ch;
    }
}

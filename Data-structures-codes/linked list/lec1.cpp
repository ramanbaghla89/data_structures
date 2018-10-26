using namespace std;
#include<iostream>
class ll
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
struct node *copy1;
public:
ll()
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
    new_node=new node;
    new_node -> next=start;
    new_node -> value=num;
    start=new_node;
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
void insert_beg(int num)
{
new_node=new node;
new_node -> value=num;
new_node -> next=start;
start=new_node;
}
void insert_end(int num)
{
struct node *ptr1;
ptr1=start;
while (ptr1 -> next!= NULL)
{
ptr1=ptr1->next;
}
new_node=new node;
new_node -> value=num;
new_node -> next=NULL;
ptr1 -> next=new_node;
}
void insert_after(int num,int data)
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
    new_node=new node;
    new_node->value=data;
    new_node->next=ptr->next;
    ptr->next=new_node;
}
void insert_before(int num,int data)
{
  ptr=start;
  copy1=NULL;
    while (ptr != NULL)
    {
        if (ptr->value==num)
        {
            break;
        }
        copy1=ptr;
        ptr=ptr->next;
    }
    if (copy1==NULL)
    {
        insert_beg(data);
    }
    else
    {
        new_node=new node;
    new_node->value=data;
    new_node->next=copy1->next;
    copy1->next=new_node;
    }

}
void del_beg()
{ struct node *temp;
    temp=start;
    start=temp -> next;
    temp -> next=NULL;
    delete temp;
}
void del_given(int num)
{ struct node *previous;
    previous=NULL;
    ptr=start;
    while(ptr != NULL)
    {
        if (ptr -> value==num)
            break;
        previous=ptr;
        ptr=ptr -> next;
    }
    previous -> next=ptr -> next;
    ptr -> next= NULL;
    delete ptr;
}
};
int main()
{
    ll obj;
    int ch,num;
    cout<<"enter 1 to create list and 2 for display,3 for inserting new element in beginning,4 for inserting new element in end,5 for deletion in beginning,6 for deleting nth element,7 to insert after a specific element,8 to insert before a specific element and 0 to exit"<<endl;
    cin>>ch;
    while (ch !=0)
    {
    switch(ch)
    {
    case 1:
    obj.create();
    break;
    case 2:
    obj.show();
    break;
    case 3:
     cout<<"enter element to be inserted"<<endl;
     cin>>num;
     obj.insert_beg(num);
     break;
    case 4:
    cout<<"enter element to be inserted"<<endl;
    cin>>num;
    obj.insert_end(num);
    break;
    case 5:
      obj.del_beg();
      break;
    case 6:
        cout<<"enter element to be deleted"<<endl;
        cin>>num;
      obj.del_given(num);
      break;
    case 7:
        int num1,data1;
        cout<<"enter no. to be inserted"<<endl;
        cin>>data1;
        cout<<"enter the no. after which it has to be inserted"<<endl;
        cin>>num1;
        obj.insert_after(num1,data1);
        break;
    case 8:
        int num11,data11;
        cout<<"enter no. to be inserted"<<endl;
        cin>>data11;
        cout<<"enter the no. before which it has to be inserted"<<endl;
        cin>>num11;
        obj.insert_before(num11,data11);
        break;
    }
        cout<<"enter 1 to create a list and 2 for display,3 for inserting new element in beginning,4 for inserting new element in end,5 for deletion in beginning,6 for deleting nth element,7 to insert after a specific element,8 to insert before a specific element and 0 to exit"<<endl;

    cin>>ch;
    }
}

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
    new_node=new node;
    new_node -> next=start;
    new_node -> value=num;
    start=new_node;
    cin>>num;

}
}
void merge1()
{

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
};
int main()
{
abc ob1,ob2;
int ch;
cout<<"enter 1 to create lists,2 to merge list and 3 to display and 0 to exit"<<endl;
cin>>ch;
while (ch !=0)
    {
    switch(ch)
    {
    case 1:
    ob1.create();
    cout<<"enter values of next list"<<endl;
    ob2.create();
    break;
 /*   case 3:
    obj.show();
    break; */
    }
    cout<<"enter 1 to create lists,2 to merge list and 3 to display and 0 to exit"<<endl;
cin>>ch;
    }
}

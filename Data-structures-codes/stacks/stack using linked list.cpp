using namespace std;
#include<iostream>
class stack1
{
struct node
{
int value;
struct node *next;
};
struct node *top;
struct node *ptr;
struct node *new_node;
public:
stack1()
{
top=NULL;
}
void push(int num)
{
    new_node=new node;
    new_node -> next=top;
    new_node -> value=num;
    top=new_node;
}
void pop()
{
    if (top==NULL)
        cout<<"UNDERFLOW"<<endl;
    else
    {
   struct node *temp;
   /* temp=top;
    top=temp -> next;
    temp -> next=NULL;
    delete temp;*/
top=top->next;
    }
}
void peek()
{
    if (top==NULL)
        cout<<"Empty Stack"<<endl;
    else
        cout<<"top element of this stack is:"<<top->value<<endl;
}
void display()
{
 if (top==NULL)
        cout<<"Empty Stack"<<endl;
    else
        while(top!=NULL)
    {

        cout<<"top element of this stack is:"<<top->value<<endl;
        top=top->next;
    }

}
};
int main()
{
    stack1 ob;
    int ch;
    cout<<"enter 1 to push a element in stack,2 to delete ,3 to display the top element 4 to display and 0 to exit"<<endl;
    cin>>ch;
    while (ch!=0)
    {
        switch(ch)
        {
        case 1:
            int num;
            cout<<"enter value"<<endl;
            cin>>num;
            ob.push(num);
            break;
        case 2:
            ob.pop();
            cout<<"element deleted"<<endl;
            break;
        case 3:
            ob.peek();
            break;
        case 4:
            ob.display();
            break;
        }
         cout<<"enter 1 to push a element in stack,2 to delete ,3 to display top element and 0 to exit"<<endl;
    cin>>ch;
    }
}

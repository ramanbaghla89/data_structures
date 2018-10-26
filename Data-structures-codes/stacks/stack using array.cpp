using namespace std;
#include<iostream>
class stacks
{
    int *arr;
    int top;
    int size1;
public:
    stacks(int n)
    {
        top=-1;
        size1=n;
        arr=new int[size1];
    }
    void push(int val)
    {
        if (top==size1-1)
            cout<<"overflow"<<endl;
        else
        {
            top++;
            arr[top]=val;
        }
    }
    void pop()
    {
        if (top==-1)
            cout<<"underflow"<<endl;
        else
        {
            top--;
            cout<<"element popped"<<endl;
        }
    }
    void display()
    {
        for (int i=0;i<=top;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
};
int main()
{
    int ch,s;
    cout<<"enter size of stack"<<endl;
    cin>>s;
    stacks ob(s);
    cout<<"enter 1 to enter a element,2 to delete a element and 0 to exit"<<endl;
    cin>>ch;
    while (ch!=0)
    {
        switch(ch)
        {
        case 1:
            int item;
            cout<<"enter the value to be inserted"<<endl;
            cin>>item;
            ob.push(item);
            break;
        case 2:
            ob.pop();
            break;
        }
      cout<<"enter 1 to enter a element,2 to delete a element and 0 to exit"<<endl;
      cin>>ch;
    }
    ob.display();
}


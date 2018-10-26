using namespace std;
#include<iostream>
class queue_
{
    int *arr;
    int rear,front_;
    int size_;
public:
    queue_(int n)
    {
        rear=-1;
        front_=-1;
        size_=n;
        arr=new int[size_];
    }
    void Enqueue(int val)
    {
        if ((rear==front_-1)||(front_==0 && rear==size_-1))
        {
            cout<<"queue is full"<<endl;
        }
        else if((rear==-1)&&(front_==-1))
        {
           rear++;
           front_++;
           arr[rear]=val;
        }
        else
        {
          if (rear==size_-1)
            rear=0;
          else
            rear++;
          arr[rear]=val;
        }
    }
    void Dequeue()
    {
        int temp;
        if ((rear==-1)&&(front_==-1))
            cout<<"Queue is empty"<<endl;
        else if(front_==rear)
        {
            temp=front_;
            cout<<arr[temp]<<"deleted"<<endl;
            rear=-1;
            front_=-1;
        }
        else if(front_==size_-1)
        {
            temp=front_;
            front_=0;
            cout<<arr[temp]<<"deleted"<<endl;
        }
        else
        {
            temp=front_;
            front_++;
            cout<<arr[temp]<<"deleted"<<endl;
        }
    }
    void display()
    {
        if (rear<front_)
        {
         for (int i=front_;i<size_;i++)
            cout<<arr[i]<<endl;
         for (int i=0;i<=rear;i++)
            cout<<arr[i]<<endl;
        }
        else
        {
            for (int i=front_;i<=rear;i++)
                cout<<arr[i]<<endl;
        }
    }
};
int main()
{
    int ch,s;
    cout<<"enter size of queue"<<endl;
    cin>>s;
    queue_ ob(s);
    cout<<"enter 1 to enter a element in queue\n,2 to delete a element from queue\n,3 to display queue and \n0 to exit"<<endl;
    cin>>ch;
    while (ch!=0)
    {
        switch(ch)
        {
        case 1:
            int item;
            cout<<"enter the value to be inserted"<<endl;
            cin>>item;
            ob.Enqueue(item);
            break;
        case 2:
            ob.Dequeue();
            break;
        case 3:
            ob.display();
            break;
        }
      cout<<"enter 1 to enter a element in queue,2 to delete a element,3 to display queue and 0 to exit"<<endl;
      cin>>ch;
    }
}

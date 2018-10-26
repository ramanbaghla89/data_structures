#include<iostream>
using namespace std;
class queue_
{
    struct node
    {
    int value;
    struct node *next;
    };
    struct node *new_node;
    struct node *ptr;
    struct node *save;
    struct node *temp;
     struct node *frontt;
     struct node *rear;
      public:

    queue_()
    {
    frontt=NULL;
    rear=NULL;
    }
    void insertion_at_end()
    {
      int num;
      cout<<"enter no";
      cin>>num;
      while(num!=-1)
      {
          if(rear==NULL)//when 1 node is going to be inserted//to keep track of new node save ptr we are using
          {
              new_node=new node;
              new_node->value=num;
              new_node->next=NULL;
              rear=new_node;
              save=new_node;
              frontt=new_node;

          }
          else
          {

              new_node=new node;//to get next address
              new_node->value=num;
              new_node->next=NULL;
              save->next=new_node;
              save=new_node;
              rear=save;


          }
          cout<<"again enter no";
          cin>>num;

      }
    }
    void display()
    {
        temp=frontt;
       while(temp->next!=NULL)
       {

          cout<<temp->value<<"\t";
        temp=temp->next;
       }
       cout<<temp->value<<"\t";

    }
    void del()
    {
if(frontt!= NULL)
        {
        struct node *t = frontt;
      frontt = frontt -> next;
      cout<<"Deleted element:"<<t->value<<"\t";
      delete(t);
        }
        else{
            cout<<"underflow"<<endl;
        }

    }
};
int main()
{
 int ch;
cout<<"enter choice1 for cretaing ll \n";
cout<<"enter choice 2 for display\n";
cout<<"enter 3 for deletion at beginning\n";
cout<<"enter 4 for break\n";
cin>>ch;
  queue_ obj;
do
{
switch(ch)
{
case 1:
    obj.insertion_at_end();
    break;
case 2:
    obj.display();
    break;
case 3:
    obj.del();
    break;
case 4:
        break;

}
cout<<"again enter choice";
cin>>ch;
}while(ch!=4);
}

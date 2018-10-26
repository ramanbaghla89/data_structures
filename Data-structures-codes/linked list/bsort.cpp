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
struct node *save;
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
    if (start==NULL)
   {
    new_node=new node;
    new_node -> next=start;
    new_node -> value=num;
    start=new_node;
    save=new_node;
   }
   else{
        new_node=new node;
    new_node -> next=NULL;
    new_node -> value=num;
   save -> next=new_node;
   save=new_node;

   }
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
void bsort()
{
  int i,j=0;
  int counter=0;
  struct node *curr=start;
  struct node *trail=start;
  struct node *temp=NULL;

  while (curr !=NULL)
  {
    curr=curr->next;    //couting the number of items I have in my list.
    counter++;          //this works fine.
  }

  curr=start->next;          // reseting the curr value for the 2nd position.

  for (i=0; i<counter; i++)
  {
    while (curr != NULL)
    {
      if (trail->value > curr->value)
      {
        temp=curr->next;      //bubble sort for the pointers.
        curr->next=trail;
        trail->next=temp;
 temp=curr;         //reseting trail and curr. curr gets back to be infront.
        curr=trail;
        trail=temp;

        if (j==0)   //i'm using j to determine the start of the loop so i won't loose the head pointer.
        {
          start=trail;
        }

      }
      j++;
      trail=curr;
      curr=curr->next;   //traversing thru the list. nested loop.
    }

    trail=start;
    curr=trail->next;
    curr->next=trail->next->next;  //traversing thru the list. outer loop.
    j=0;
  }
}


};
int main()
{
abc obj;
obj.create();
obj.bsort();
obj.show();
}

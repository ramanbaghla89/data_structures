#include <iostream>

using namespace std;
class priority_queue{
	int front;
	int rear;
int **index;
char **arr;
public:
	 priority_queue()
	{
		front=0;
		rear=1;
	}
	void intial(int n)
	{
 arr=new char*[n];
	 index=new int*[n];
	for(int i=0;i<n;i++)
	
		arr[i]=new char[n];
	for(int i=0;i<n;i++)
		index[i]=new int[2];
	
	for(int i=0;i<n;i++)
	for(int j=0;j<2;j++)
	index[i][j]=-1;
		for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	arr[i][j]='x';

	}
 void enqueue(int priority,char data,int n)
 {
 	if(index[priority-1][front]==-1)
 	{
 		index[priority-1][front]++;
 		index[priority-1][rear]++;
 		arr[priority-1][front]=data;
 		}
 		else if(index[priority-1][rear]==n-1)
 	cout<<"Overflow";
	 else{
	 
		 index[priority-1][rear]++;
	 		arr[priority-1][index[priority-1][rear]]=data;
	 }
 }
 
void display(int priority)
{ for(int i=index[priority-1][front];i<=index[priority-1][rear];i++)
cout<<arr[priority-1][i]<<"\t";
 
 }
 
 void dequeue(int priority,int n)
 {
 	if(index[priority-1][front]>index[priority-1][rear])
 	cout<<"Underflow\n";
 	else
	 {
	 	arr[priority-1][front]='x';
 		index[priority-1][front]++;
 		
	 }
  } 

};
int main()
{ int num,choice;
char value;
int seq;
	cout<<"Enter the no. of varied varities:";
	cin>>num;
	priority_queue obj;
	obj.intial(num);
	do{
		cout<<"Press 1 to insert the element\n Press 2 to delete \n Press 3 to display\nPress 0 to exit\n";
		cin>>choice;
		if(choice==1){
	cout<<"Enter the priority:";cin>>seq;
	cout<<"Enter the data:";cin>>value;
	obj.enqueue(seq,value,num);	
	}
	if(choice==2)
	{ 	cout<<"Enter the priority:";cin>>seq;
		obj.dequeue(seq,num);
	}
	if(choice==3)
	{
		
		cout<<"Enter the priority:";cin>>seq;
		obj.display(seq);
		}
	} while(choice);
	
	}



void insert_sort(int num)
{
ptr=start;
while(ptr!=NULL)
{
if ((ptr -> value)>num)
break;
copy1=ptr;
ptr=ptr -> next;
}
if (ptr==NULL)
insert_end(num);
else if(copy1==NULL)
insert_beg(num);
else
{
new_node=new node;
new_node -> value=num;
new_node -> next=copy1 -> next;
copy1 -> next=new_node;
}
}

void insert_before(int ele,int num)
{
ptr=start;
while (ptr != NULL)
{
if (ptr -> value==ele)
break;
copy1=ptr;
ptr=ptr -> next;
}
if (copy1==NULL)
{
insert_beg(num);
}
else
{
new_node=new node;
new_node -> value=num;
new_node -> next= copy1 -> next;
copy1 -> next=new_node;
}
}

void insert_after(int ele,int num)
{
ptr=start;
while (ptr != NULL)
{
if (ptr -> value==ele)
break;
ptr=ptr -> next;
}
new_node=new node;
new_node -> value=num;
new_node -> next= ptr-> next;
ptr -> next=new_node;
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
new_node=new node;
new_node -> value=num;
new_node -> next=NULL;
save -> next=new_node;
save=new_node;
}



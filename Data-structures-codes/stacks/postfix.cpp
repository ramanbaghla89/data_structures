using namespace std;
#include<iostream>
#include<string.h>
class stacks
{
char postfix[50];
char infix[50];
char stack_[50];
int index;
public:
void
while (infix[i]!='\0')
{
if (isalpha(infix[i])||isdigit(infix[i]))
{
insert_postfix(infix[i]);
}
else if(infix[i]=='+'||infix[i]=='-'||infix[i]=='/'||infix[i]=='*'||infix[i]=='^')
{
if(preceed(infix[i])>preceed(stack[top]))
{
push(infix[i]);
}
}
}
int preceed(char ch)
{
if (ch==^)
return 3;
else if (ch=='*'||ch=='/')
return 2;
else if (ch=='+'||ch=='-')
return 1;
else
return 0
}
stacks()
{
cout<<"enter infix"<<endl;
cin>>infix;
index=strlen(infix);
}

}
int main()
{
stacks ob;

}

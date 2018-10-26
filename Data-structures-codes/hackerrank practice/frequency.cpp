using namespace std;
#include<iostream>
int main() {
   int arr[100],n,i,final1[100],j=0;
    int hash[100]={0};
    cin>>n;
    for (i=0;i<n;i++)
        cin>>arr[i];
    for (i=0;i<n;i++)
    {
        hash[arr[i]]++;
        if (hash[arr[i]]==1)
        {
            final1[j]=arr[i];
            j++;
        }
    }
  for (i=0;i<j;i++)
    {
        cout<<"Frequency of"<<final1[i]<<"is"<<hash[final1[i]]<<endl;
    }


}

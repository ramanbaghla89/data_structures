using namespace std;
#include<iostream>
int main()
{
    int a[100],b[100],m,n;
    int i=0,j=0,z,k=0;
    cout<<"enter size of array 1"<<endl;
    cin>>m;
    cout<<"enter sorted elements in array 1"<<endl;
    for (i=0;i<m;i++)
        cin>>a[i];
    cout<<"enter size of array 2"<<endl;
    cin>>n;
    cout<<"enter sorted elements in array 2"<<endl;
    for (i=0;i<n;i++)
        cin>>b[i];
    int arr[20]={0};
    for (k=0;k<m+n;k++)
    {
        if (a[i]<b[j])
        {
            arr[k]=a[i];
            i++;
            if (i==m)
            {
                k++;
                for(z=j;z<n;z++)
                {
                    arr[k]=b[z];
                    k++;
                }
                break;
            }
            cout<<"hi";
        }
        else
        {
            arr[k]=b[j];
            j++;
            if (j==n)
            {
                k++;
                for(z=i;z<m;z++)
                {
                    arr[k]=a[i];
                    k++;
                }
                break;
            }
        }
    }
     for (int s=0;s<m+n;s++)
            cout<<arr[s]<<" ";
}

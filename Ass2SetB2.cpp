/*Write a C++program to modify contents of an integer array. (Use Call by
reference)*/
#include<iostream>
using namespace std;
void modify(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
      a[i]=a[i]*2;//modify each element
    }
    
}
int main()
{
    int n,a[50],i;
    cout<<"Enter limit:";
    cin>>n;
    cout<<"Enter elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\n Original Array:";
    for(i=0;i<n;i++){
    cout<<a[i]<<" ";
    }
    modify(a,n);//calling to modify function::
    cout<<"\n Modified Array:";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
/*Write a C++ program to accept ‘n’ float numbers, store them in an array and
print thea lternate elements of an array. (Use dynamic memory allocation)*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter limit:";
    cin>>n;

    //Dynamic memory allocation
    float *a=new float[n];

//accept elements
cout<<"Enter numbers:\n";
for (int i=0;i<n;i++)
{
cin>>a[i];
}
//display alternate elements
cout<<"\n Alternate elememts of an array:\n";
for (int i=0;i<n;i+=2){
    cout<<a[i]<<" ";
}
cout<<"\n";
//deallocate memory
delete[] a;
return 0;

}
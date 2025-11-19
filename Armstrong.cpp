#include<iostream>
using namespace std;
int main(){
    int n,cube,d,num;
    int sum;
    cout<<"Enter the number";
    cin>>n;
    for(int i=1;i<n;i++)
     {
    num=i;
    sum=0;
       while(num>0)
        {
            d=num%10;
            cube=d*d*d;
            sum=sum+cube;
            num=num/10;
        }
        if(sum==i)
        {
            cout<<"Armstrong number is:"<<i<<endl;

        }
    }
 
}
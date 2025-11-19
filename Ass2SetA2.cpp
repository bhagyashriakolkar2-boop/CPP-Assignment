/*Write a C++ program to define power function to calculate x^y. (Use default
value as 2 for y).*/
#include<iostream>
using namespace std;
double power(double x,int y=2)
{
    double z=1.0;
  
    //calculate power
    for(int i=0;i<y;i++){
       z*=x;
    }
    return z;

}
int main()
{
    double base;
    int exp;
    cout<<"Enter base number:";
    cin>>base;
    cout<<"Power of 2 (default) is:"<<power(base)<<endl;
    return 0;
}

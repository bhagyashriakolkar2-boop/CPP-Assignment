/*Write a C++ program to calculate maximum and minimum of two integer
numbers of two different classes. (Use friend function).*/
#include<iostream>
using namespace std;
class Second;//forward declaration
class First{
    int n1;
    public:
    void accept(){
        cout<<"Enter number 1:";
        cin>>n1;
    }
    friend void calMaxMin(First,Second);//friend function;
};
class Second{
    int n2;
    public:
    void accept(){
        cout<<"Enter number 2:";
        cin>>n2;
    }
    friend void calMaxMin(First,Second);//friend function;
};
void calMaxMin(First f,Second s)
{
    if(f.n1>s.n2)
    {
        cout<<"\n Maximun"<<f.n1;
        cout<<"\n Minimum:"<<s.n2;
    }
    else{
        cout<<"\n Maximun"<<s.n2;
        cout<<"\n Minimum:"<<f.n1;
    }
}
int main(){  
    First f;
    Second s;
    f.accept();
    s.accept();
    calMaxMin(f,s);
    return 0;
}
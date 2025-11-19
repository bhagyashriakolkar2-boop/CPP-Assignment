#include<iostream>
using namespace std;
class MyNumber{
int a,b,c;
public:
MyNumber(){//Default 
    a=b=c=3;
}

MyNumber(int x,int y,int z=30)//Parameterized with default value
{
    a=x;
    b=y;
    c=z;
}
//display function
void display(){
    float avg=(a+b+c)/3;
    cout<<"Numbers:"<<a<<" "<<b<<" "<<c;
    cout<<"Average:"<<avg<<endl;
}
};
int main(){
    MyNumber n1;
    n1.display();
    MyNumber n2(10,20,30);
    n2.display();
    MyNumber n3(7,40);
    n3.display();
}
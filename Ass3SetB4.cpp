/*Write a C++ program to calculate multiplication of two integer numbers of
two different classes. (Use friend class).*/
#include<iostream>
using namespace std;
class class2;//forward declaration
class class1{
    int n1;
    public:
    void accept()
    {
        cout<<"Enter first no.:";
        cin>>n1;

    }
    friend class class2;
};
class class2{
    int n2;
    public:
    void accept(){
        cout<<"Enter second num:";
        cin>>n2;

    }
    void multiply(class1 c1){
int res;
res=c1.n1*n2;
cout<<"Multiplication="<<res<<endl;
    }
};
int main(){
    class1 c1;
    class2 c2;

    c1.accept();
    c2.accept();
    c2.multiply(c1);
    return 0;
}
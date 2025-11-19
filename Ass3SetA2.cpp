/*Write a C++ program to calculate the average height of all the students of a
class. The number of students and their heights are entered by user. (Use array
of objects).*/
#include<iostream>
using namespace std;
class Student{
float height;
public:
void accept(){
    cout<<"Enter height of students:";
    cin>>height;
}
float putHeight(){
    return height;
}
};
int main(){
    int n,i;
    float avg;
    cout<<"Enter limit:";
    cin>>n;
    //Array of object
    Student s[n];
    float sum=0;
    for(i=0;i<n;i++){
    cout<<"Student"<<i+1<<" :";
    s[i].accept();
    sum+=s[i].putHeight();
}
//calculate average
avg=sum/n;
cout<<"\n Average height of students:"<<avg<<endl;
return 0;
}
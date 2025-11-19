#include<iostream>
using namespace std;
class Student{
int roll_no;
string stud_name,cl;
static int cnt;
public:
void accept(){
    cout<<"\n Enter roll no:";
    cin>>roll_no;
    cout<<"/n Enter student name:";
    cin>>stud_name;
    cout<<"\nEnter class:";
    cin>>cl;
    cnt++;//student count
}
void display(){
    cout<<"\n Roll no:"<<roll_no;
    cout<<"\nStudent name:"<<stud_name;
    cout<<"\nClass:"<<cl;
}
//static member function
static void dispCount(){
    cout<<"\n Total Students:"<<cnt<<endl;
}
};
//initialize static member
int Student::cnt=0;
int main(){
    int n,i;
    cout<<"Enter limit:";
    cin>>n;
    Student s[n];// array of object
    for (i=0;i<n;i++)
    {
       cout<<"Enter Student details:";
     s[i].accept();

    }
    cout<<"Display Student Details";
    for (i=0;i<n;i++)
    {
        cout<<"\n Studet Details"<<i+1<<"\n";
        s[i].display();
    }
    Student::dispCount();
    return 0;
}
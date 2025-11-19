#include<iostream>
using namespace std;
//base class
class Personnel{
protected:
string name,addr,email,b_date;
public:
void acceptP(){
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter address:";
    cin>>addr;
    cout<<"Enter email:";
    cin>>email;
    cout<<"Enter birth date:";
    cin>>b_date;
}
void displayP(){
    cout<<"----Personal Information----"<<endl;
    cout<<"Name   :"<<name<<endl;
    cout<<"Address   :"<<addr<<endl;
    cout<<"Email    :"<<email<<endl;
    cout<<"Birth date   :"<<b_date<<endl;
}
};
//base class 2
class Academic{
protected:
float ten_marks,twe_marks;
string class_ob;
public:
void acceptA(){
    cout<<"Tenth marks:";
    cin>>ten_marks;
    cout<<"Twelth marks:";
    cin>>twe_marks;
    cout<<"Obtained class:";
    cin>>class_ob;
}
void displayA(){
    cout<<"-----Academic Informatioin------"<<endl;
    cout<<"Tenth marks  :"<<ten_marks<<endl;
    cout<<"Twelth marks :"<<twe_marks<<endl;
    cout<<"Obtained class:"<<class_ob<<endl;

}
};
//derived class
class BioData:public Personnel,public Academic{
    public:
void accept(){
    cout<<"Enter personal Details:";
    acceptP();
    cout<<"Enter Academic Details:";
    acceptA();
}
void display(){
    cout<<"******Stident Bio Data*******";
    displayP();
    displayA();
}
};
int main(){
    BioData bio;
    bio.accept();
    bio.display();
    return 0;
}

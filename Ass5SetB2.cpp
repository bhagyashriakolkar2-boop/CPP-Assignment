#include<iostream>
#include<vector>
using namespace std;
//base class
class Employee{
    protected:
    int emp_code;
    string name;
    public:
virtual void accept()=0;
virtual void display()=0;
virtual int get_code()=0;//searching emp

};
//derived class 
class FullTime:public Employee{
   
float daily_rate;
int days;
float sal;
public:
void accept() override{
cout<<"Enter Employee code:";
cin>>emp_code;
cout<<"Enter Emp name:";
cin>>name;
cout<<"Enter Daily rate:";
cin>>daily_rate;
cout<<"Working days:";
cin>>days;
cout<<"Enter Salary:";
cin>>sal;
}
void display() override{
    cout<<"\n Fulltime Employee\n";
    cout<<"Emp code:"<<emp_code<<endl;
    cout<<"E Name:"<<name<<endl;
    cout<<"Daily rate:"<<daily_rate<<endl;
    cout<<"Number of days:"<<days<<endl;
    cout<<"Salary:"<<sal<<endl;
}
int get_code() override{
    return emp_code;
}
};
//Derived class Parttime
class Perttime:public Employee{
int hrs;
float h_rate,sal;
public:
void accept() override{
    cout<<"Enter Employee code:";
cin>>emp_code;
cout<<"Enter Emp name:";
cin>>name;
cout<<"Enter Hourly rate:";
cin>>h_rate;
cout<<"Number Hours:";
cin>>hrs;
cout<<"Enter Salary:";
cin>>sal;
}
void display() override{
    cout<<"\n Prttime Employee\n";
    cout<<"Emp code:"<<emp_code<<endl;
    cout<<"E Name:"<<name<<endl;
    cout<<"Hourly rate:"<<h_rate<<endl;
    cout<<"Number of days:"<<hrs<<endl;
    cout<<"Salary:"<<sal<<endl;
}
int get_code() override{
    return emp_code;
}
};
int main(){
    vector<Employee*>employees;
    int ch;
    do{
        cout<<"\n1 Add Fulltime Emp:";
        cout<<"\n2 Add Parttime Emp:";
        cout<<"\n3 Display Employees:";
        cout<<"\n4 Search Employee:";
        cout<<"\n Exit:";
        cout<<"Enter choice:";
        cin>>ch;

        switch (ch){
            case 1:{
            Employee* e=new FullTime();
            e->accept();
            employees.push_back(e);
            break;}
          case 2:{
          Employee* e=new FullTime();
           e->accept();
           employees.push_back(e);
           break;
          }
          case 3:{
          cout<<"Display Emp Details"<<endl;
          for(auto e:employees)
          e->display();}
          case 4:
          {
            int c;
            cout<<"Enter code to serch:";
            cin>>c;
            for(auto e:employees)
            if ((e->get_code())==c)
            {
            e->display();
            break;
            }
          }

          case 5:{
          cout<<"Exit";
          break;}
          default:
          cout<<"Invalid choice"<<endl;
        }
     

}while (ch!=5);
return 0;
}


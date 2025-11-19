/*Write a C++ program to accept and display Bank Account details as Acc_No,
Acc_holder_name, Addr, Contact_Number and Balance. Perform deposit of
some amountand display modified bank account details. (Use manipulators).*/
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class BankAcc{

    int a_no;
    string holder_name,addr,mob_no;
    double bal;
    public:
    void accept(){
        cout<<"Enter Account number";
        cin>>a_no;
        cout<<"Enter account holder name:";
        cin>>holder_name;
        cout<<"Enter Address:";
        cin>>addr;
        cout<<"Enter Mobile number:";
        cin>>mob_no;
        cout<<"Enter Balance:";
        cin>>bal;
    
    }
    void display()
    {
        cout<<"\n Bank account Details\n";
        cout<<"Account Number:"<<a_no<<endl;
        cout<<left<<setw(20)<<"Account Holder name:"<<holder_name<<endl;
        cout<<left<<setw(20)<<"Address:"<<addr<<endl;
        cout<<left<<setw(20)<<"Mobile Number:"<<mob_no<<endl;
        cout<<left<<setw(20)<<"Account Balance:"<<bal<<endl;
    }
    void deposit(double amt){
        if(amt>0)
        {
            bal+=amt;
            cout<<"\n Deposited:"<<amt<<endl;
        }
        else{
            cout<<"\n Invalid deposit amount"<<endl;
        }
    }
};
int main()
{
    BankAcc a;
    double amount;
    a.accept();
    cout<<"\n Before Deposit";
    a.display();
cout<<"\n Enter amount to deposit";
cin>>amount;
a.deposit(amount);
cout<<"\n After Deposit";
a.display();
return 0;
}
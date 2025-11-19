/*Design a Base class Customer (name, phone-number). Derive a class
Depositor (accno, balance) from Customer. Again, derive a class Borrower
(loan-no, loan-amt) from Depositor. Write necessary member functions to
read and display the details of ‘n’customers.*/
#include<iostream>
using namespace std;
//base class
class  Customer
{
    protected:
    string name;
    string ph;
    public:
    void acceptC(){
        cout<<"Enter Cust name:";
        cin>>name;
        cout<<"Enter Phone no.:";
        cin>>ph;

    }
    void displayC(){
        cout<<"Cust Name:"<<name<<endl;
        cout<<"Cust Phone:"<<ph<<endl;
            }
};
//derived class from cutomer
class Depositer:public Customer{
    protected:
    int a_no;
    float bal;
    public:
    void acceptD(){
        acceptC();
        cout<<"Enter Account no.:";
        cin>>a_no;
        cout<<"Enter balance:";
        cin>>bal;
            }
        void displayD(){
            displayC();
            cout<<"Account no."<<a_no<<endl;
            cout<<"Balance:"<<bal<<endl;
        }
};
//derived class from depositor
class Borrower:public Depositer{
    int l_no;
    float l_amt;
    public:
    void acceptB(){
        acceptD();
         cout<<"Enter loan no.:";
        cin>>l_no;
        cout<<"Enter loan amount:";
        cin>>l_amt;
    }
    void displayB(){
        displayD();
        cout<<"Loan no:"<<l_no<<endl;
        cout<<"Loan amt:"<<l_amt<<endl;
            }
};
int main(){
    int n;
    cout<<"enter No. of customer:";
    cin>>n;
    Borrower *b=new Borrower[n];//array of object
    cout<<"Enter Details";
    for (int i = 0; i < n; i++)
    {
      b[i].acceptB();
    }
    cout<<"Show Cust Detials:";
    for(int i=0;i<n;i++)
    {
        b[i].displayB();
    }
    delete[] b;
    

}
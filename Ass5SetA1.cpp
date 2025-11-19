/*Design a base class product (Product_Id,Product_Name,Price).Derive a class
Discount (Discount_In_Percentage) from Product. A customer buys ‘n’ product.
Write a C++ program to calculate total price, total discount.
*/
#include<iostream>
#include<string>
using namespace std;
//base class
class Product{
    protected:
    int P_id;
    string p_name;
    float price;
    public:
void accept()
{
    cout<<"enter Product id:";
    cin>>P_id;
    cout<<"enter Product name:";
    cin>>p_name;
    cout<<"enter Product price:";
    cin>>price;
}
void display(){
    cout<<"P ID:"<<P_id;
    cout<<"P Name:"<<p_name;
    cout<<"P Price:"<<price;
}
float getPrice(){
    return price;
}
};
//Derived class
class Discount:public Product{
    private:
    float d_iper;
    public:
    void accept(){
        Product::accept();
        cout<<"Enter Discount Percentage:";
        cin>>d_iper;
    }
    void display(){
        Product::display();
        cout<<"Discount:"<<d_iper<<"%"<<endl;

    }
    float getDiscount(){
        return(price*d_iper)/1000;
    }
};
int main(){
    int n;
    cout<<"Enter no. of product:";
    cin>>n;
    Discount *p=new Discount[n];
    float tp=0,td=0;
    for (int i = 0; i < n; i++)
    {
       cout<<"\n Enter details of product:"<<endl;
       p[i].accept();
       tp+=p[i].getPrice();
       td+=p[i].getDiscount();

    }
    cout<<"Display P Details\n";
    for (int i = 0; i < n; i++)
    {
        p[i].display();
    }
    cout<<"\n Total price:"<<tp<<endl;
    cout<<"\nTotal Discount:"<<td<<endl;
    cout<<"\n Final Price:"<<tp-td<<endl;
    delete[] p;
       
}
#include<iostream>
#include<string>
using namespace std;
class Product {
    int id;
    string name;
    float price;
public:
void accept(){
    cout<<"Enter product Id:";
    cin>>id;
    cout<<"Enter Pruduct name";
    cin>> name;
    cout<<"Enter P price";
    cin>>price;
}
void display(){
    cout<<"Product Id"<<id<<endl;
    cout<<"Product Name"<<name<<endl;
    cout<<"Product Price"<<price<<endl;
}
float getPrice(){
    return price;
}
};
int main(){
    int n,i;
    cout<<"Enter limit:";
    cin>>n;
    //Dynamic array of object
    Product *p=new Product[n];
    for(i=0;i<n;i++)
    {
        cout<<"\nProduct"<<i+1<<endl;
        p[i].accept();
    }
  for(i=0;i<n;i++)
    {
        cout<<"\nProduct"<<i+1<<endl;
        p[i].display();
    }
    //find maximum price 
    int max=0;
     for(i=1;i<=n;i++)
     {
        if(p[i].getPrice()>p[max].getPrice())
        {
            max=i;
        }
     }
     cout<<"Maximum Price of Product";
     p[max].display();
     //deallocate memory
     delete[] p;
}
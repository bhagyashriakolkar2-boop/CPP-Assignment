#include<iostream>
#include<string>
using namespace std;
class MyDate{
    int d,m,y;
    public:
    MyDate(int d1,int m1,int y1){
        d=d1;
        m=m1;
        y=y1;
    }
    void display(){

        string mon[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
        if(m>=1 && m<=12){
        cout<<d<<"-"<<mon[m-1]<<"-"<<y<<endl;
        }
        else{
            cout<<"Invalid date";
        }
    }
};
int main(){
    int d1,m1,y1;
    cout<<"Enter date(dd-mm-yyyy):";
    cin>>d1>>m1>>y1;
    MyDate m(d1,m1,y1);
    m.display();
    return 0;
}
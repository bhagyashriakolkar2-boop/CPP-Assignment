/*Write a C++ program to create a class ‘MyArray’ which contains single
dimensional integer array of given size. Write a member function to display
even and odd numbers from a given array. (Use Dynamic Constructor to
allocate and Destructor to free memory of an object)*/
#include<iostream>
using namespace std;
class MyArray{
    private:
    int *a;
    int n;
    public:
    MyArray(int s){ //parameterized constructor
        n=s;
        a=new int[n];//allocate memory dynamically
        cout<<"Enter element:";
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
    }
    void dispEvenOdd(){
        
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                cout<<"Even No.\t"<<a[i]<<endl;
            }
            else{
                cout<<"Odd no.\t"<<a[i]<<"\n ";
            }
        }
    }
    //destructor to free memory
    ~MyArray(){
        delete[] a;
        cout<<"\n Memory free";
    }
};
int main(){
    int s;
    cout<<"Enter size of array:";
    cin>>s;
    MyArray ob(s);
    ob.dispEvenOdd();
    return 0;
}
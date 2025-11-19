/*Write a C++ program to create a class ‘MyVector’ with data members size &
a pointer to integer. The size of the vector varies so the memory should be
allocated dynamically. Create and initialize the object using default and
parameterized constructor. Write a member function to display the vector in
the format (10, 20, 30,….)*/
#include <iostream>
using namespace std;

class MyVector {
    int size;     // to store size of vector
    int *arr;     // pointer to integer array

public:
    // Default Constructor
    MyVector() {
        size = 0;
        arr = nullptr;
    }

    // Parameterized Constructor
    MyVector(int n) {
        size = n;
        arr = new int[size];   // allocate memory dynamically

        cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    // Member function to display vector
    void display() {
        cout << "(";
        for (int i = 0; i < size; i++) {
            cout << arr[i];
            if (i != size - 1)  // add comma except last element
                cout << ", ";
        }
        cout << ")" << endl;
    }

    // Destructor
    ~MyVector() {
        delete[] arr;   // free allocated memory
    }
};

// Main function
int main() {
    cout << "Creating vector using default constructor...\n";
    MyVector v1;   // default constructor
    v1.display();

    cout << "\nCreating vector using parameterized constructor...\n";
    int n;
    cout << "Enter size of vector: ";
    cin >> n;
    MyVector v2(n);   // parameterized constructor
    v2.display();

    return 0;
}

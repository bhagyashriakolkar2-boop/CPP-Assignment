#include <iostream>
using namespace std;

class Array2;  // Forward declaration

class Array1 {
    int arr[50];
    int size;

public:
    void accept() {
        cout << "Enter size of Array1: ";
        cin >> size;
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++)
            cin >> arr[i];
    }

    void display() {
        cout << "Array1 elements: ";
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    // Declare friend function
    friend void findMax(Array1, Array2);
};

class Array2 {
    int arr[50];
    int size;

public:
    void accept() {
        cout << "Enter size of Array2: ";
        cin >> size;
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++)
            cin >> arr[i];
    }

    void display() {
        cout << "Array2 elements: ";
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    // Declare friend function
    friend void findMax(Array1, Array2);
};

// Friend function to find max of both arrays
void findMax(Array1 a1, Array2 a2) {
    int max1 = a1.arr[0];
    for (int i = 1; i < a1.size; i++)
        if (a1.arr[i] > max1)
            max1 = a1.arr[i];

    int max2 = a2.arr[0];
    for (int i = 1; i < a2.size; i++)
        if (a2.arr[i] > max2)
            max2 = a2.arr[i];

    cout << "Maximum in Array1: " << max1 << endl;
    cout << "Maximum in Array2: " << max2 << endl;
}

int main() {
    Array1 obj1;
    Array2 obj2;

    obj1.accept();
    obj2.accept();

    cout << endl;
    obj1.display();
    obj2.display();

    cout << endl;
    findMax(obj1, obj2);

    return 0;
}

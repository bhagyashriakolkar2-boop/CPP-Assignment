/*Write a C++ program to create a class ‘MyMatrix’ which contains twodimensional integer array of size mXn. Write a member function to display
sum of all elements of entered matrix. (Use Dynamic Constructor for
allocating memory and Destructor to free memory of anobject)*/
#include <iostream>
using namespace std;

class MyMatrix {
private:
    int **a;     // pointer to store 2D array
    int r, c;

public:
    // Dynamic Constructor
    MyMatrix(int m, int n) {
        r = m;
        c = n;

        // allocate memory for rows
        a = new int*[r];
        for (int i = 0; i < r; i++) {
            a[i] = new int[c];  // allocate memory for columns
        }

        // input matrix elements
        cout << "Enter elements of the matrix (" << r << "x" << c << "):\n";
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> a[i][j];
            }
        }
    }

    // Function to display sum of all elements
    void displaySum() {
        int sum = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                sum += a[i][j];
            }
        }
        cout << "Sum of all elements of the matrix: " << sum << endl;
    }

    // Destructor to free memory
    ~MyMatrix() {
        for (int i = 0; i < r; i++) {
            delete[] a[i]; // free each row
        }
        delete[] a; // free array of row pointers
        cout << "Memory free successfully." << endl;
    }
};


int main() {
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;

    // create object with dynamic constructor
    MyMatrix mat(m, n);

    // display sum of all elements
    mat.displaySum();

    return 0;
}

#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    // Function to accept distance
    void accept() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;

        // Normalize if inches >= 12
        if (inches >= 12) {
            feet += inches / 12;
            inches = inches % 12;
        }
    }

    // Function to display distance
    void display() {
        cout << feet << " feet " << inches << " inches" << endl;
    }

    // Function to add two distances (returns object)
    Distance add(Distance d) {
        Distance temp;
        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;

        // Normalize if inches >= 12
        if (temp.inches >= 12) {
            temp.feet += temp.inches / 12;
            temp.inches = temp.inches % 12;
        }
        return temp;
    }
};

int main() {
    Distance d1, d2, d3;

    cout << "Enter first distance:" << endl;
    d1.accept();

    cout << "Enter second distance:" << endl;
    d2.accept();

    d3 = d1.add(d2);

    cout << "\nFirst Distance: ";
    d1.display();
    cout << "Second Distance: ";
    d2.display();
    cout << "Sum of Distances: ";
    d3.display();

    return 0;
}

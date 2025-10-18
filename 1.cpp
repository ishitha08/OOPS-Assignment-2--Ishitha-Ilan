// Q1. Simple List Implementation in C++ (without using <vector>)
#include <iostream>
using namespace std;

class SimpleList {
private:
    int *data;     // Pointer to the dynamic array
    int capacity;  // Total allocated size
    int length;    // Current number of elements

    // Function to resize the array when needed
    void resize() {
        int newCapacity = capacity * 2;
        int *newData = new int[newCapacity];
        for (int i = 0; i < length; i++)
            newData[i] = data[i];
        delete[] data;
        data = newData;
        capacity = newCapacity;
    }

public:
    // Default constructor
    SimpleList() {
        capacity = 5;     // initial capacity
        length = 0;
        data = new int[capacity];
        cout << "SimpleList created successfully!" << endl;
    }

    // Add element
    void add(int value) {
        if (length == capacity)
            resize(); // resize if full
        data[length++] = value;
    }

    // Remove first occurrence of a value
    void remove(int value) {
        int index = -1;
        for (int i = 0; i < length; i++) {
            if (data[i] == value) {
                index = i;
                break;
            }
        }

        if (index == -1) {
            cout << "Value not found!" << endl;
            return;
        }

        // Shift elements to the left
        for (int i = index; i < length - 1; i++)
            data[i] = data[i + 1];

        length--;
    }

    // Display list contents
    void display() const {
        cout << "List contents: ";
        for (int i = 0; i < length; i++)
            cout << data[i] << " ";
        cout << endl;
    }

    // Get list size
    int size() const {
        return length;
    }

    // Destructor to free memory
    ~SimpleList() {
        delete[] data;
        cout << "SimpleList destroyed!" << endl;
    }
};

int main() {
    SimpleList myList;
    myList.add(10);
    myList.add(20);
    myList.add(30);
    myList.display();

    myList.remove(20);
    myList.display();

    cout << "Size: " << myList.size() << endl;
    return 0;
}

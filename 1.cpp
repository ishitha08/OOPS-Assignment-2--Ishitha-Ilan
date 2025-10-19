// Q1. Program to create a simple list class (like Python list)
#include <iostream>
using namespace std;

class SimpleList {
private:
    int *data;
    int size;
    int capacity;

    // Function to double the capacity when full
    void resize() {
        int newCap = capacity * 2;
        int *temp = new int[newCap];
        for (int i = 0; i < size; i++)
            temp[i] = data[i];
        delete[] data;
        data = temp;
        capacity = newCap;
    }

public:
    // Constructor
    SimpleList() {
        size = 0;
        capacity = 5;
        data = new int[capacity];
        cout << "List created successfully!\n";
    }

    // Add element at end
    void add(int value) {
        if (size == capacity)
            resize();
        data[size++] = value;
    }

    // Remove first occurrence of a value
    void remove(int value) {
        int index = -1;
        for (int i = 0; i < size; i++) {
            if (data[i] == value) {
                index = i;
                break;
            }
        }

        if (index == -1) {
            cout << "Value not found!\n";
            return;
        }

        for (int i = index; i < size - 1; i++)
            data[i] = data[i + 1];
        size--;
    }

    // Display the elements
    void display() {
        cout << "List: ";
        for (int i = 0; i < size; i++)
            cout << data[i] << " ";
        cout << endl;
    }

    // Return size
    int getSize() {
        return size;
    }

    // Destructor
    ~SimpleList() {
        delete[] data;
        cout << "List destroyed.\n";
    }
};

int main() {
    SimpleList lst;
    lst.add(10);
    lst.add(20);
    lst.add(30);
    lst.display();
    lst.remove(20);
    lst.display();
    cout << "Size: " << lst.getSize() << endl;
    return 0;
}

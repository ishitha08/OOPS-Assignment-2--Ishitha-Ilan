// Q2. Simple Dictionary Implementation in C++
#include <iostream>
#include <string>
using namespace std;

class SimpleDict {
private:
    string *keys;   // Array to store keys
    int *values;    // Array to store values
    int size;       // Current number of pairs
    int capacity;   // Maximum capacity

    // Function to resize arrays when full
    void resize() {
        int newCap = capacity * 2;
        string *newKeys = new string[newCap];
        int *newValues = new int[newCap];

        for (int i = 0; i < size; i++) {
            newKeys[i] = keys[i];
            newValues[i] = values[i];
        }

        delete[] keys;
        delete[] values;

        keys = newKeys;
        values = newValues;
        capacity = newCap;
    }

public:
    // Constructor
    SimpleDict() {
        capacity = 5;
        size = 0;
        keys = new string[capacity];
        values = new int[capacity];
        cout << "SimpleDict created successfully!" << endl;
    }

    // Add or update a key-value pair
    void add(string key, int value) {
        // Check if key already exists
        for (int i = 0; i < size; i++) {
            if (keys[i] == key) {
                values[i] = value; // update existing value
                return;
            }
        }

        if (size == capacity)
            resize(); // expand arrays

        keys[size] = key;
        values[size] = value;
        size++;
    }

    // Search for a key
    void search(string key) const {
        for (int i = 0; i < size; i++) {
            if (keys[i] == key) {
                cout << key << " => " << values[i] << endl;
                return;
            }
        }
        cout << "Key not found!" << endl;
    }

    // Display all key-value pairs
    void display() const {
        cout << "All key-value pairs:" << endl;
        for (int i = 0; i < size; i++)
            cout << keys[i] << " : " << values[i] << endl;
    }

    // Destructor
    ~SimpleDict() {
        delete[] keys;
        delete[] values;
        cout << "SimpleDict destroyed!" << endl;
    }
};

int main() {
    SimpleDict dict;
    dict.add("Age", 19);
    dict.add("Score", 90);
    dict.add("Year", 2025);

    dict.display();

    dict.search("Score");
    dict.search("Height"); // not found
    return 0;
}

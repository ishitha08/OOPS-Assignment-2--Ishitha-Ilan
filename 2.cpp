// Q2. Program to make a simple dictionary class
#include <iostream>
#include <string>
using namespace std;

class SimpleDict {
private:
    string *keys;
    int *values;
    int size;
    int capacity;

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
    SimpleDict() {
        size = 0;
        capacity = 5;
        keys = new string[capacity];
        values = new int[capacity];
    }

    void add(string k, int v) {
        for (int i = 0; i < size; i++) {
            if (keys[i] == k) {
                values[i] = v; // update existing key
                return;
            }
        }
        if (size == capacity)
            resize();
        keys[size] = k;
        values[size] = v;
        size++;
    }

    void search(string k) {
        for (int i = 0; i < size; i++) {
            if (keys[i] == k) {
                cout << k << " -> " << values[i] << endl;
                return;
            }
        }
        cout << "Key not found!\n";
    }

    void display() {
        cout << "Dictionary contents:\n";
        for (int i = 0; i < size; i++)
            cout << keys[i] << " : " << values[i] << endl;
    }

    ~SimpleDict() {
        delete[] keys;
        delete[] values;
    }
};

int main() {
    SimpleDict d;
    d.add("Age", 19);
    d.add("Score", 88);
    d.display();
    d.search("Age");
    return 0;
}

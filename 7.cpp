// Q7. Bubble Sort using OOP (no STL)
#include <iostream>
using namespace std;

class Sorter {
private:
    int arr[100];
    int n;

public:
    void input() {
        cout << "Enter number of elements: ";
        cin >> n;
        cout << "Enter elements: ";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
    }

    void bubbleSort() {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    void display() {
        cout << "Sorted data: ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Sorter s;
    s.input();
    s.bubbleSort();
    s.display();
    return 0;
}

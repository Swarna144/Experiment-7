//Name: Swarna Prakash
//PRN: 23070123139

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int a1[n], a2[n];

    // Create array
    for (int i = 0; i < n; i++) {
        cout << "Enter element-" << i + 1 << ": ";
        cin >> a1[i];
    }

    // Display input array
    cout << "\nArray given by user: ";
    for (int i = 0; i < n; i++) {
        cout << a1[i] << " ";
    }
    cout << endl;

    // Reverse array
    for (int i = 0; i < n; i++) {
        a2[i] = a1[n - 1 - i];
    }

    // Display reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << a2[i] << " ";
    }
    cout << endl;

    return 0;
}

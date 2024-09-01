# Experiment-7
Aim: To study and implement C++ Arrays and Strings

Theory:
Array:

An array stores a fixed-size sequential collection of elements of the same type. All arrays
consist of contiguous memory locations. The lowest address corresponds to the first
element and the highest address to the last element.

For example, an array containing 5 integer values of type int called foo could be
represented as:where each blank panel represents an element of the array. In this case, these are values of
type int. These elements are numbered from 0 to 4, being 0 the first and 4 the last; In
C++, the first element in an array is always numbered with a zero (not a one), no matter
its length.

CODE:-
Reverse array
```
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
```


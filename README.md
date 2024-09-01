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
```
7a(max&min)
#include<iostream>
using namespace std;
int main(){
    int n,i,max=0;
    cout<<"Enter number of elements: ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cout<<"Enter element-"<<i<<": ";
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    int min=a[0];
    for(i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    cout<<"Maximum: "<<max<<endl<<"Minimum: "<<min;
}
```
```
7b(search element)
#include<iostream>
using namespace std;
int main() {
int marks[5], i, j, num, flag=0, count=0;
for(i=0;i<5;i++) {
cout<<"Enter element-"<<i+1<<": ";
cin>>marks[i];
}
cout<<"Enter element to be searched: ";
cin>>num;
for(j=0;j<5;j++) {
if(marks[j]==num) {
cout<<"Position of "<<num<<": "<<j+1<<endl;
count++;
flag=1;
}
}
if(flag==0) {
cout<<"Element not present";
}
else if(flag==1) {
cout<<"Element is present: "<<count<<" times";
}
}
```
```
7c
#include <iostream>
using namespace std;
int main() {
// declare and initialize an array
double numbers[] = {7.5, 2.5, 3.6, 5.12, 7.35, 24.27};
double sum = 0.0;
double count = 0.0;
double average;
cout << "The numbers are: ";
// print array elements use of range-based for loop
for (const double n : numbers) {
cout << n << " ";
// calculate the sum
sum += n;
// count the no. of array elements
++count;
}
// print the sum
cout << "Sum = " << sum << endl;
// find the average
average = sum / count;
cout << "Their Average = " << average << endl;
return 0;
}
```
```
7d
#include<iostream>
using namespace std;
int main() {
int a1[5], i, j;
float sum=0, avg;
for(i=0;i<5;i++) {
cout<<"Enter element-"<<i+1<<": ";
cin>>a1[i];
}
for(j=0;j<5;j++) {
sum = sum + a1[j];
}
cout<<"Sum of elements = "<<sum<<endl;
avg = sum/5;
cout<<"Average = "<<avg;
}
```
```
7e(palindrome)
#include<iostream>
#include<string>
using namespace std;
int main() {
string a;
cout<<"Enter a string: ";
cin>>a;
int n=a.length(), i, flag=0;
for(i=0;i<a.length();i++){
if(a[i]==a[n-1]){
flag=1;
}
n--;
}
if(flag==1){
cout<<a<<" is palindrome";
}
else{
cout<<a<<" is not palindrome";
}
}
```
```
7f(printing the number in reverse)
#include<iostream>
#include<string>
using namespace std;
int main() {
string a;
cout<<"Enter string: ";
cin>>a;

int i;
for(i=a.length()-1;i>=0;i--) {
cout<<a[i];
}
return 0;
}
```
OUTPUT:- 
7

![Experiment 7 JPG](https://github.com/user-attachments/assets/9426db29-1aa7-4779-adac-b9ddcaa36e7e)

7a

![Experiment 7a JPG](https://github.com/user-attachments/assets/15c0517b-bb7b-479d-adf0-a010bd810750)

7b

![Experiment 7b JPG](https://github.com/user-attachments/assets/5b8ac269-65af-4b61-8814-f7c1a3944415)

7c

![Experiment 7c JPG](https://github.com/user-attachments/assets/5ae306b8-1e26-4c8f-8a4d-8a2cb738cd9f)

7d

![EX 7d JPG](https://github.com/user-attachments/assets/1a42875b-2f24-48f5-8f53-c2cc0045cac3)

7e

![Ex 7e JPG](https://github.com/user-attachments/assets/cef14aae-dda4-4728-8310-c40c7faa2644)

7f

![Ex 7f JPG](https://github.com/user-attachments/assets/df9dff56-b55e-472a-abf3-b222ccec371a)










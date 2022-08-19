#include<iostream>
using namespace std;

void print(int arr[], int n  , int start = 0) {

    for(int i = start; i<n; i++) {
        cout << arr[i] << endl;
    }

}

int main() {

    int arr[5] = {1,4,7,8,9};
    int size = 5;

    print(arr, size); //jab start =0 de diya value toh bhi no problem
    cout << endl;
    print(arr, size, 2); // phirse call pe bhi no problem


    return 0;
}

// condition :- 
// default argument hamesha right parameter se start karna chahiye matlab
// first ab start
// then int n
// then arr

// beech se hi agar int n pe kardein toh error dikha dega

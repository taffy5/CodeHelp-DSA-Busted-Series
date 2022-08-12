// ***** PASSING THROUGH FUNCTIONS *****

#include<iostream>
using namespace std;

void print(int *p) {

    cout << *p << endl; 

}

void update(int *p) {

    // dekho agar pointer ko update kar rahe hain then aise p = p+1 likhne se we will get same address printed before and after only. So we cannot do this
    
   // p = p + 1;
   //cout << "inside "<< p <<endl;
    
    // instead we can update the value by incrementing
   *p = *p + 1;

}

int getSum(int *arr, int n) {
// int *arr ke place pe int arr[] likhe tab bhi vo as a pointer hi pass hota hain
// as size print karne par vo 8 hi dega.
    
// BENEFIT :- to print of part of array like check arr+3 thing
    
    cout << endl << "Size : " << sizeof(arr) << endl;

    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {

    // intialised pointer with an function
    int value = 5;
    int *p = &value;
    print(p);
    
    
    cout <<" Before " << *p << endl;
    update(p);
    cout <<" After " << *p << endl;


    int arr[6] = {1,2,3,4,5,8};

    cout << "Sum is " << getSum(arr+3 ,3) << endl ;  
    
    // arr+3 just to print a part so we even though we call array but that is pointer only

    return 0;
}

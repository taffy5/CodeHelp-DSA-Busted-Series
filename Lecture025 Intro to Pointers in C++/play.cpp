#include<iostream>
using namespace std;

int main () {

    //pointer to int is created, and pointing to some garbage address
    //int *p = 0; 

    //cout << *p << endl;

    // First way to declare a pointer
    int i = 5;
    int *q = &i;
    cout << q << endl;
    cout << *q << endl;

    // Second way to declare a pointer
    int *p = 0; // this we wrote first to initialise a pointer to 0 
    p = &i;
    cout << p << endl; // this will print out address "0x16f933488"
    cout << *p << endl; // this will print out value 5

   int num = 5;
   int a = num;
   cout << "a before " << num << endl;
   a++;
   // this will increment the address of a
   cout << "a after " << num << endl;


   int *p  = &num;
   cout << "before " << num << endl;
   (*p)++;
   // this will increment the value num from 5 to 6
   cout << "after " << num << endl;

    //copying a pointer
   int *q = p;
   cout << p <<" - " << q << endl;
   cout << *p <<" - " << *q << endl;

   //important concept
   int i = 3;
   int *t = &i;
   //cout <<  (*t)++ << endl;
   *t = *t +1;
    cout << *t << endl;
    // will increment 3 to 4
    cout << " before t " << t << endl;
    t = t + 1;
    cout << " after t " << t << endl;


    return 0;
}

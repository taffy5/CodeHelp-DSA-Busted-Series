#include<iostream>
using namespace std;

int main () {

    int num  = 5 ;

    cout << num << endl;

    // address of Operator - &
    // spell it as "ampersand" or "address operator"

    cout <<" address of num is " << &num << endl;
    // we get an hexadecimal value means 0....9abcdef

    int *ptr = &num;

    cout << "Address is : " << ptr << endl;
    // this will give you 120 which the value of the pointer box that stored the value
    cout << "value is : " << *ptr << endl;
    // this will give you 5 which the address in the pointer box indicate the value to

    double d = 4.3;
    double *p2 = &d;

    cout << "Address is : " << p2 << endl;
    cout << "value is : " << *p2 << endl;

    cout << " size of integer is " << sizeof(num) << endl;
    cout << " size of pointer is " << sizeof(ptr) << endl;
    cout << " size of pointer is " << sizeof(p2) << endl;
    
   // here we get both the size of ptr and p2 as 8 as it isstoring the address which again points to some value



    return 0;
}

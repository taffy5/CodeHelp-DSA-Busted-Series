#include<iostream>
using namespace std;

int main () {

    int arr[10] = {23, 122, 41, 67};

    cout <<" address of first memory block is " << arr << endl;      // if 100
    // format of finding address with the located 
    cout << arr[0] << endl;                                          // 23
    cout <<" address of first memory block is " << &arr[0] << endl;  // 100
    // format of finding address with address operator
    
    /*  arr[10] -> arr - first location address
                -> arr[0] - value at 0th index
                -> &arr[0] - first location address
    */

    cout << "4th " << *arr << endl;         // 23
    cout << "5th " << *arr + 1 << endl;     // 24
    cout << "6th " << *(arr + 1) << endl;   // 122
    cout << "7th " << *(arr) + 1 << endl;   // 24
    cout << "8th " << arr[2] << endl;       // 41
    cout << "9th " << *(arr+2) << endl;     // 41
    
    /*  arr[i] = *(arr + i)
                OR
        i[arr] = *(i + arr)
    */

    int i = 3;
    cout << i[arr] << endl;
    /* ***** SOMETHING NEW HERE *****
         arr[i] is equal to i[arr]
         even though in this new format we are initialising with int and passing array
        */
    
   /// DIFFERENCE BETWEEN ARRAYS & POINTERS
    
   /*   1st - written in notes 
            - arr -> no. of block x 4 = print
            - ptr -> 8 bytes
   */

   int temp[10] = {1,2};
   cout << sizeof(temp) << endl;                // 40
   cout << " 1st " <<  sizeof(*temp) << endl;   // 4
   cout << " 2nd " <<  sizeof(&temp) << endl;   // 8

   int *ptr = &temp[0];
   cout << sizeof(ptr) << endl ;               // 8
   cout << sizeof(*ptr) << endl ;              // 4
   cout << sizeof(&ptr) << endl ;              // 8

/*   2nd - ( 1st is ARRAY , 2nd is POINTER ) 
            - &arr[0] -> address of block at 0th index
            - &ptr -> address of p waala
   */

   int a[20] = {1,2,3,5};
   cout << " ->" << &a[0] << endl;          // some value X
  cout << &a << endl;                       // some value X
   cout << a << endl;                       // some value X

   int *p = &a[0];
   cout << p << endl;                       // some value X
   cout << *p << endl;                      // 1
   cout << "-> " << &p << endl;             // some another value Y
    
/*   3rd - ( ERROR is ARRAY , 2nd is POINTER ) 
            - arR -> arr +1 - not assignable
            - &ptr -> address of p waala
   */

   int arr[10];

//ERROR
   //arr = arr+1;        
 
    int *ptr = &arr[0];
    cout << ptr << endl;       // some value X
    ptr = ptr + 1;
    cout << ptr << endl;       // some value Y as now pointer got incremented 






    return  0;
}

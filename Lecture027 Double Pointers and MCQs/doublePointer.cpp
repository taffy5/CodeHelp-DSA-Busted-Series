/*         ***** RECAP RECAP RECAP ***** 
    int value = 5;
    1st notation :-  int * ptr = & value;                   second notation:-  pointer ptr = & value;
    
    why dont we use 2nd notation is because of the following reasons :-
    1. kis type ka data hain
    2. kitne byte ko consider karna hain
    
    and these 2 things cant be found when we write pointer in place of int.
    
    can also execute as:-
    int i=0;
    double j=1.2;
    float f=1.2;
*/


#include<iostream>
using namespace std;

void update(int **p2) {
    //p2 = p2 + 1;
    //kuch change hoga  - NO

    //*p2 = *p2 + 1;
    //kuch change hoga - YES

    **p2 = **p2 + 1;
    //kuch change hoga - YES
}
    void update(int *p){
        *p = (*p)  *  2;
    }
        void increment(int **p){
        ++(**p);
    }
int main() {

    int i = 5;
    int* p = &i;
    int** p2 = &p;

    cout<< endl << endl <<" Sab sahi chal rha h " << endl << endl ;

    cout << i << endl;        // 5
    cout << *p << endl;        // 5
    cout << **p2 << endl;        // 5

    cout << &i << endl;        // 710
    cout << p << endl;        // 710
    cout << *p2 << endl;        // 710

    cout << &p << endl;        // 820
    cout << p2 << endl;        // 820

    cout << endl << endl;
    
    // double pointers and functions
    
    cout<< "before " << i << endl;         // 5
    cout<< "before " << p << endl;
    cout<< "before " << p2 << endl;
    update(p2);
    cout<< "after " << i << endl;
    cout<< "after " << p << endl;
    cout<< "after " << p2 << endl;
    cout << endl << endl; 



        int num = 110;
        int *ptr = &num;
        increment(&ptr);
        cout << num << endl;         // 5



    return 0;
}

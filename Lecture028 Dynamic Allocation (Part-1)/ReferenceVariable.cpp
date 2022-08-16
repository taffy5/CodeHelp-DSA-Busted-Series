// ***** DYNAMIC MEMORY ALLOCATION - PART 1
       //  REFERENCE VARIABLE  

#include<iostream>
using namespace std;

/* int& func(int a) {
    int num = a;
    int& ans = num;
    return ans;
}

// this should be followed kyunki ye block ke baad num aur ans ka value khatam
// ho jayega isliye ye run karte waqt error dikhayega

// **** RETURN BY REFERENCE **** // 


*/

int* fun(int n) {
    int* ptr = &n;
    return ptr;
}   // Same uppar waala hi error aa raha

void update2(int& n) {
    n++; 
}

void update1(int n) {
    n++;
}

int main() {

     int i = 5;

    //create a ref variable 
    int& j = i;

    cout << i << endl;         // 5
    i++;
    cout << i << endl;         // 6
    j++;
    cout << i << endl;         // 7
    cout << j << endl;         // 7
    */

   int n = 5;
   
   cout << "Before " << n << endl;         // 5
   update1(n);
   cout << "After " << n << endl;         // 5

 // kyunki pass by value se bas ek copy create hua hain isliye same output aaya before after mein
    // PASS BY VALUE -  copy ho jaata hain 
    // naya memory create ho jata hain
    
    
   cout << "Before " << n << endl;         // 5
   update2(n);
   cout << "After " << n << endl;         // 6

// ab reference variable se pass kara toh dekho output change hua
    // PASS BY REFERENCE - memory already allocated ko bas dusra naam dete hain
    
    
    fun(n);

    return 0;
}

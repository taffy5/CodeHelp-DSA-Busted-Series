// ***** CHARACTER ARRAY ***** 

#include<iostream>
using namespace std;

int main() {

    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";
    // we cant write here ch[5] as when we put a string in ch array then it will always end with null character

// means ki int array or ch array ka cout implementation different hain
    cout << arr << endl;         // some address got printed
    //attention here
    cout << ch << endl;         // "abcde" got printed 
    
    char *c = &ch[0];
    //prints entire string
    cout << c << endl;

    char temp = 'z';
    char *p = &temp;

    cout << p << endl;
    
    // it outputs value "z00j"
    // explanation :- pehle vo z print karega aur vo tab tak print karte rahega jab tak usko ek null character nahi mil jaata.
    // toh iss case mein usko j ke baad null character mila isliye uske baad stop hogaya
    
    /*   BUT VERY RISKY SO DONT DO LIKE THIS 
    
    char *c = "abcde";
    
    Behind the scenes
        Its a 2 step process:-
            1. temporary memory mein initialised value rakh lo
            2. aur second free memory hain usmein usko copy kardo
            
            
     so we only use :-
     
     char *c = "abcde";
     
    */


    return 0;
}

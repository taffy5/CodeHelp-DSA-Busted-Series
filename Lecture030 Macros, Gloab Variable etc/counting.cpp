/* ***** MACROS / GLOBAL VARIABLES / INLINE FUNCTIONS & DEFAULT ARGS ***** */

#include <iostream>  // preprocessor directive
// iska matlab program compile hone se pehle jo bhi file aap bol rahe ho vo aapke code
// mein laake copy kar di jayegi aur vo phir refer kar diya jayega 
// phir cout waala cheez use karte hain 

using namespace std;

// ***** " # define " ***** // 

void print(int n) {
    //base case
    if(n == 0) {
        return ;
    }

    //Recursive relation
    print(n-1);

    cout << n << endl;
}

int main() {

    int n;
    cin >> n;
    cout << endl;
    print(n);


    return 0;
}

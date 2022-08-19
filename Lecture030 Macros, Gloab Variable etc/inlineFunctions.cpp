#include<iostream>
using namespace std;



inline int getMax(int& a, int& b) {
    return (a>b) ? a : b;
}

int main() {

    int a = 1, b = 2;
    int ans = 0; 

    ans = getMax(a,b);
    // aise use karne se storage kam use hota hain
    // aur hamesha call nahi karna padhta
    cout << ans << endl;

    a = a + 3;
    b = b + 1;

    ans = getMax(a,b);
    cout << ans << endl;

// function call replace ho jaat ahin function ka body ke saath

    return 0;
}

#include<iostream>
using namespace std;

int score = 15;             // "score" is the share variable or GLOBAL VARIABLE


void a(int& i) {                      // &i is the reference variable

    cout << score << " in a" << endl;
   // score++;
    char ch = 'a';
    cout << i << endl;
}

void b(int& i) {                      // &i is the reference variable
    cout << score << " in b" << endl;
    cout << i << endl;
}

int main() {
    cout << score << " in main" << endl;
    int i = 5;
    a(i);
    b(i);

    return 0;
}

// Using global variable is a very bad practice as it can be changed by anyone in any of the function calls
// Lets suppose in 
// void a - we add - score ++ ;
// then in void b 
// we get the incremented value of the score which is wrong

// So better to use REFERENCE VARIABLE rather than GLOBAL VARIABLE

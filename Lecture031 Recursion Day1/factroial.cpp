#include<iostream> 
using namespace std;

int factorial(int n) {
    
    //base case
    if(n==0)
        return 1;

    int smallerProblem = factorial(n-1);   
    int biggerProblem = n * smallerProblem;

    return biggerProblem;
    
    /* can also write 10-13 lines as 
    
       return n * factorial (n-1);
    
}

/*
**: IMPORTANT in RECURSION :**

1) Base case should be present bas batane ki kahan jaake end mein rukna hain
3) Base case mein retrun likhna mandatory hain
2) Recursive relation chahiye jaise F(n) = n x F(n-1)

*/


int main() {

    int n;
    cin >> n;

    int ans = factorial(n);

    cout << ans << endl;

    return 0;
}

/*

**: RECURSION :**

When a function calls itself directly or indirectly

solve (int n) {

        ---------
        ---------
        solve (n);
        
 }
 
 if we dont write base case then "segmentation fault aata hain" 

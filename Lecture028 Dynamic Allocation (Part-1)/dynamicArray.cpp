#include<iostream>
using namespace std;

int getSum(int *arr, int n) {

    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    } 
    return sum;
}

int main() {

    int n;
    cin >> n;
    
    // before " int arr[n]; "  we used to say is a bad practice as 
    // size jo hain run time mein already pata hona makes it very difficult
    // rather than compile time mein pata hona
    // when we use n as the size variable
    
    //variable size array ka array create kar liya hain
    int* arr = new int[n];

    //taking input n in aray
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int ans = getSum(arr, n);

    cout << "answer is "<< ans << endl;

// these while loop cases are just for the system to crash :)
    
    //case 1     - STATIC WAY to crash a system
    while(true) {
        int i = 5;
    }
    
//case 2        - DYNAMMIC WAY to crash a system
    while(true) {
        int* ptr = new int;
    }

 char ch= 'q';
    cout<< sizeof(ch)<< endl;    // 1 byte   (ch hain isliye)
    
char *c = &ch;
    cout<< sizeof(c) << endl;   // 9 byte    (ch hain isliye)
    
  //  int ke case mein 12 byte uthayega vo. 4 byte or 8 byte


    return 0;
}

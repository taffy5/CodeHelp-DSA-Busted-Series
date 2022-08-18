#include<iostream> 
using namespace std;

#define PI 3.14

int main() {

    int r = 5;
    //double pi = 3.14;
    
    // if we use the number 9 line instead of 4th line then we can later add that
    // PI = PI + 1;
    
    // but after introduction of line 4 we cannot increment or decrement that particular variable
    // for which macro is defined. 

    double area = PI * r * r;

    cout << "Area is " << area << endl;

    return 0;
}

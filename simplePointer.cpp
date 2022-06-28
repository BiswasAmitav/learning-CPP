#include <iostream>
using namespace std;

int main(){
    int n=5;
    int * ptr = &n;
    cout << ptr <<endl;
    cout <<*ptr<<endl;
    cout << &n << " , address is holds integer " << n << endl;
    *ptr = 15;
    cout << "After second initialized : " << *ptr;
    cout << n;
    
    return 0;
}
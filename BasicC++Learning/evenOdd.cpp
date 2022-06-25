#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Please enter whole number : ";

    cin >> number;
    if(number%2==0){
        cout << "You entered even number ." <<endl;
    }
    else{
        cout << "You have entered odd number" <<endl;
    }
    cout <<endl;
    cout << "Thank you";
    return 0;
    
}
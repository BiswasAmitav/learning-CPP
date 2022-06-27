#include<iostream>
using namespace std;

bool isPrimeNumber(int number){
    for(int i=2;i<number;i++){
        if(number%i==0)
            return false;
    }
    return true;
}

int main(){
    int number;
    cout << "Number : ";
    cin>>number;
    

    isPrimeNumber(number);
    if(isPrimeNumber){
        cout << "Given number is a Prime . ";
    }
    else
        cout << "Given number is not a Prime . ";
}
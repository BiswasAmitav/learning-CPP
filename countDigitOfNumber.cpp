#include <iostream>
using namespace std;

int main(){
    long number;
    cout << "Number : "; 
    cin>>number;

    cout << " your given number is : " << number <<endl;

    if(number==0)
        cout << "You entered zero";

    else if(number<=0)
        cout << "You entered negative value : ";
    
    else{
        long counter = 0;
        while(number>0){
            number/=10;
            counter++;
        }
        cout << "Your given number is contain : " << counter << " digits"; 
    }


}
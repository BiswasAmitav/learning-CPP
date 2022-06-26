#include <iostream>
using namespace std;

int main(){
    int selectPair,number1,startNumber,endNumber;

    cout << "For single pair , Press 1 & For multipair, Press 2 : " <<endl;
    cin >> selectPair;

    if(selectPair==1){

        cout << "Entered your number : " <<endl;
        cin >> number1;
        
            for(int i=number1;i<=number1;i++){
                for(int j=1;j<=10;j++){
                    cout << i << " * " << j << " = " << i*j << endl;
                }
            cout << endl;
            }
    }
    else if(selectPair==2){
        cout << "Start Number : " << " , ";
        cout << "End Number : " << endl;

        cin>>startNumber >>endNumber;

        for(int i=startNumber;i<=endNumber;i++){
                for(int j=1;j<=10;j++){
                    cout << i << " * " << j << " = " << i*j << endl;
                }
            cout << endl;
            }

    }
    else
        cout<<"You entered wrong number ...!" << endl;
        cout <<"Kindly Choose correct one between 1 & 2 . Thank You ";

    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int hostUserNumber, gustUserNumber;

    cout << "Host : ";
    cin >> hostUserNumber;

    // system("cls");
    cout << "Guest : ";
    cin >> gustUserNumber;
    cout << endl;

   /* if(hostUserNumber==gustUserNumber)
        cout << " WOW Matched";


    else
        cout << "Didn't match";
*/
(hostUserNumber==gustUserNumber)?cout << " Correct !": cout << " Failed";


}

#include <iostream>
using namespace std;

int main(){
    int year,month;
    cout << "Year" << "  &  " << "Month : ";
    cin >> year >> month;

    cout << year <<" , " << month << endl;


    switch (month){
        case 2: 
            (year % 4 == 0 && year % 100 !=0 || year % 400 == 0 )? 
            cout << "Moth has 29 days ." <<endl : cout << " Month has 28 days . ";
            break;

        case 4: 
        case 6: 
        case 9: 
        case 11: cout<< " Month has 30 days . " << endl; break; 

        case 1:
        case 3: 
        case 5: 
        case 7: 
        case 8: 
        case 10: 
        case 12: cout << "Month has 31 days" <<endl; break ;
        default: cout << "Not valid";
    }
    cout << "its okay";
}
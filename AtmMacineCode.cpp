#include <iostream>
using namespace std;
void showMenu(){
    cout << "**********Menu**********"<<endl;
    cout << "1. Check balance "<<endl;
    cout << "2. Withdraw balance"<<endl;
    cout << "3. Deposit balance"<<endl;
    cout << "4. Exit"<<endl;
    cout<<"**************************"<<endl;
}

int main(){
        int option;
    double balance=500.50;
    do{
        showMenu();
        cout<<endl;

    cout << "Choose option ->" <<endl;
    cin >> option;

    switch (option){
        case 1: 
            cout <<"Balance is : "<<balance <<" $" <<endl;
            break;

        case 2: 
            cout <<"Withdraw ammount : "<<endl;
            double withdrawAmmount;
            cin>>withdrawAmmount;

            if(balance>=withdrawAmmount){
                balance -= withdrawAmmount;
                cout <<"Successfully withdraw & " <<"Current balance is " <<balance << " $";
            }
            else
                cout << "Not enough money" <<endl;
            break;

        case 3:
            cout << "Deposit ammount" <<endl;
            double depostitAmmount;
            cin>>depostitAmmount;

            balance +=depostitAmmount;
            cout<<"Current balance after deposit " <<balance<<" $" <<endl;
        break;
    }
    } while (option!=4);
    




    return 0;
}
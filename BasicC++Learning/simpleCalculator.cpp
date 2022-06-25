#include <iostream>

using namespace std;

int main(){
    float num1, num2;
    char operation; 

cout << " ** CodeBeauty Calculator ** "<<endl;
cin >>num1 >> operation >> num2;

switch (operation){
    case '-':
        cout << num1 << operation << num2 << " = " <<num1-num2;
        break;
    
    case '+':
        cout << num1 << operation << num2 << " = " <<num1+num2;
        break;

    case '*':
        cout << num1 << operation << num2 << " = " << num1*num2;
        break;


    case '%':
       // cout << num1 << operation << num2 << " = " << num1%num2;

       bool isNum1Int, isNum2Int;
       isNum1Int=((int)num1==num1);
       isNum2Int=((int)num2==num2);

       if(isNum1Int==true && isNum2Int==true)
            cout << num1 << operation << num2 << " = " << (int)num1 % (int)num2;


        else
            cout << " NOt Valid";
        break;    
        
    default:
        cout << "Not a valid operation ! ";
}




}
#include <iostream>
using namespace std;
int main(){
    
    //this is the bmi calculator 
    float weight,height,bmi;
    cout << "Weight(kg), Height(m) : ";
    cin >> weight>>height;
    bmi=weight/(height*height);

    if(bmi<18.5)
        cout << "Underweight"<<endl;
    
    else if(bmi>25)
        cout << "Overweight"<<endl;

    else
        cout << " Normal" <<endl;

    cout << "Your BMI is " <<bmi;
    return 0;

}
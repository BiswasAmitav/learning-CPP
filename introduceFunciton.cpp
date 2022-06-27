#include<iostream>
using namespace std;
void introduceMe(string n, string c, int a=0){
    cout<< "My name is " << n << endl;
    cout<< "I am from " << c << endl;
    if(a !=0)
        cout << "I am "<< a << "years old . " << endl;
}

int main(){
    // introduceMe("Amitav Biswas","Khulna", 22);
    // cout<<endl;
    // introduceMe("protap","Satkhira");

    string name, city;
    int age;
    cout << "Name : ";
    cin>> name;
    cout << "City : ";
    cin>>city;
    cout << " Age : ";
    cin>>age;


    introduceMe(name,city,age);

    return 0;
}
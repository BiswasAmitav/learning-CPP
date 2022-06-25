#include<iostream>
using namespace std;


/*
    cout <<(int)'a'<<endl;
    cout<<(int)'A'<<endl;
    cout<<char(65)<<endl;
    cout<<char(97)<<endl;
    =========================================



*/
int main(){
    char c1, c2, c3, c4, c5,c6;
    int n1,n2,n3,n4,n5;

    cout<<"Enter 5 letter : ";
    cin>> c1>>c2>>c3>>c4>>c5;
    cout<<" messege : " <<int(c1)<<","<<int(c2)<<","<<int(c3)<<","<<int(c4)<<","<<int(c5)<<","<<int(c6)<<endl;

    cout<<"Enter your number : ";
    cin>>n1>>n2>>n3>>n4>>n5;
    cout<<"Alphabte of your given code : "<<char(n1)<<" ,"<<char(n2)<<" ,"<<char(n3)<<" ,"<<char(n4)<<" ,"<<char(n5);
    return 0; 

}
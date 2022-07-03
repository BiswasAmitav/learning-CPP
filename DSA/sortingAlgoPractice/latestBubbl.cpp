#include<iostream>
using namespace std;

void BubbleSort(int array[], int n){
                    int temp;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1;j++){

                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
            cout<<"Result : after sorted :-"<<"\n";
    for(int i=0;i<n;i++){
        cout<<array[i]<<"\t";
    }
}
int main(){
    int n;
    cout<<"Enter number of element on your array : ";
    cin>>n;

    int array[n];
    cout<<"Now enter your array element one by one : "<<endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"This is your Entered array : "<<"\n";
    for(int i=0;i<n;i++){
        cout<<array[i]<<"\t";
    }
    cout<<"\n";

    BubbleSort(array,n);
    return 0;
}
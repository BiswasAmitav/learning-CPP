#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<arr[i]<<" is having on index no : ";
            return i;
        }
    }
    return -1;

}

int main(){
    int n;
    cout<<"Enter size of your array : ";
    cin>>n;
    int arr[n];


    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter key: ";
    cin>>key;

    cout<<linearSearch(arr,n,key);

    return 0;

}
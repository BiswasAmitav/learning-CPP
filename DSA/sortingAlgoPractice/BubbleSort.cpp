#include<iostream>
using namespace std;

int main(){
    int arr[5]={20,22,14,28,30};
    int temp;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0;i<5;i++){
        cout<<arr[i]<<"\t";
    }

    return 0;
}
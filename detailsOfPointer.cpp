#include <iostream>
using namespace std;


void printNumber(int* numberPtr){
    cout << *numberPtr<<endl;
}
void printLetter(char* charPtr){
    cout << *charPtr <<endl;
}

void print(void* ptr,char type){
    switch (type){
        case 'i':cout<<*((int*)ptr)<<endl;//handle int*.
        case 'c':cout<<*((char*)ptr) <endl;//handle char*.
    }
}
int main(){
    int number =5;
    char letter ='a';
    printLetter(&letter,'i');
    printNumber(&number,'a');

    return 0;
}
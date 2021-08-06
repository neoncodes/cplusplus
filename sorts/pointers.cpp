#include <iostream>
#include <string>
using namespace std;

void printer(int arr[], int len){
    for(int i = 0; i < len; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int array[2];
    array[0] = 8;
    array[1] = 2;
    printer(array, 2);
}
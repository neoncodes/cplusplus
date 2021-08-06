#include <iostream>
#include <string>
using namespace std;

void bubble(int* arr, int n){
    bool check = false;

    while(!check){
        for(int x = 0; x < (n-1); x++){
            if(arr[x] > arr[(x+1)]){
                int save = arr[x];
                arr[x] = arr[(x+1)];
                arr[(x+1)] = save;
                check = true;
            }
        }

        if(check == true){
            check = false;
        } else {
            check = true;
        }
    }
}

int main(){
    int arr[7] = {1,7,23,675,234,123,346};
    bubble(arr, 7);

    for(int x = 0; x < 7; x++){
        cout<<arr[x];
        if(x != 6){
            cout<<", ";
        }
    }

    return 0;
}
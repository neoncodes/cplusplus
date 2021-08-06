#include <iostream>
#include <string>
using namespace std;

void append(int* arr, int n, int l){
    arr = Arrays.copyOf(arr, l + 1);
    arr[l - 1] = n;
}

void pop(int* arr, int l){
    for(int j = 0; j < l; j++){
        arr[j] = arr[j+1];
    }

    arr = Arrays.copyOf(arr, l - 1);
}

void merge(int* left, int* right, int* leftL, int* rightL){
    bool check = true;
    int arr[0];

    while(check){
        if(!left || !right){
            if(left){
                for(int i = 0; i < left.length; i++){
                    append(arr, left[i]);
                }
            }
            if(right){
                for(int i = 0; i < right.length; i++){
                    append(arr, right[i]);
                }
            }

            check = false;
        } else {
            if(left[0] < right[0]){
                append(arr, left[0]);
                pop(left);
            }
            else if(left[0] > right[0]){
                append(arr, right[0]);
                pop(right);
            }
        }
    }

    return arr;
}
int main(){
    
}
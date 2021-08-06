#include <iostream>
#include <string>
using namespace std;

int exponent(int x, int y){
    int s = x;

    for(int i = 1; i < y; i++){
        x = x*s;
    }
    
    return x;
}

int main(){
    bool j = true;
    while(j){
        int x, y;
        string e;

        // Calculator

        cout<<"Type in a number:"<<endl;
        cin >> x;
        cout<<"Type in a second number:"<<endl;
        cin >> y;
        cout<<"Type in a operator:"<<endl;
        cin >> e;

        // Check Operator

        int ans = -1;

        if(e == "*"){
            ans = x*y;
        }
        else if(e == "/"){
            ans = x/y;
        } 
        else if(e == "+"){
            ans = x+y;
        }
        else if(e == "-"){
            ans = x-y;
        }
        else if(e == "^"){
            ans = exponent(x, y);
        }

        cout<<ans<<endl;

        string g;

        cout<<"Type E to exit the calculator. Type any other key to continue."<<endl;
        cin >> g;
        cout<<endl<<endl<<endl<<endl;

        if(g == "E"){
            j = false;
        }
    }

    return 0;
}
#include <iostream>
using namespace std;

void doSomething(int n){
    for(int i = 0; i < n; i++){
        // leading spaces
        for(int j = 0; j < i; j++){
            cout << " ";
        }

        // stars
        for(int j = 0; j < 2*n - (2*i + 1); j++){
            cout << "*";
        }
        for(int j=0;j<i;j++){
            cout << " ";
        }

        cout << endl;
    }
}

int main(){
    int t;
    cin >> t; // number of test cases

    while(t--){
        int n;
        cin >> n;
        doSomething(n);
    }

    return 0;
}
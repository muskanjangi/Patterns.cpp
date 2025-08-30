
#include<bits/stdc++.h>
using namespace std;
void doSomething(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        doSomething(n);
    }
    return 0;
}
//- Outer loop (i) runs from 0 to n-1 → controls the number of rows.
//- Inner loop (j) runs from 0 to i → controls how many stars to print in each row.
//- So row i has i+1 stars.

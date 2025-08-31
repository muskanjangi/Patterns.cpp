
#include<bits/stdc++.h>
using namespace std;
void doSomething(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<i+1;j++){
            cout << j << "";
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
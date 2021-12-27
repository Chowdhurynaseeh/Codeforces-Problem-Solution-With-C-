#include <iostream>
using namespace std;
void solveThis(int l1,int l2, int l3){
    if(l1 == l2 ){
        if(l3 % 2 == 0) {
            cout<<"YES"<<endl;
            return;
        }
    }
    if(l2 == l3 ){
        if(l1 % 2 == 0) {
            cout<<"YES"<<endl;
            return;
        }
    }
    if(l1 == l3){
        if(l2 % 2 == 0) {
            cout<<"YES"<<endl;
            return;
        }
    }
    if(l1 + l2 == l3){
        cout<<"YES"<<endl;
        return;
    }
    if(l2 + l3 == l1){
        cout<<"YES"<<endl;
        return;
    }
    if(l1 + l3 == l2){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}
int main() {
    int t,l1,l2,l3;
    cin >> t;
    while(t-- != 0){
        cin >> l1 >> l2 >> l3;
        solveThis(l1,l2,l3);
    }
}
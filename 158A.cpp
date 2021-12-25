#include <iostream>
using namespace std;
int main() {
    //int a[8] = {10, 9, 8,7,7,7,5,5};
    //int a[4] = {0,0,0,0};
    //int a[4] = {0,0,0,1};
    int n,k,a[100],next = 0;
    cin>>n;
    cin>>k;
    for(int i = 0; i < n; i++) {cin>>a[i];}
    for(int i = 0; i < n; i++) {
        if(a[i] >= a[k-1] && a[i] > 0) {
            next++;
        }
    }
    cout<<next<<endl;
}
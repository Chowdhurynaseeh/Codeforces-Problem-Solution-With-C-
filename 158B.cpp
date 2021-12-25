#include <bits/stdc++.h>
using namespace std;
queue<int>v,v2;
int main() {
    int n,sum = 0,sum2 = 0,count = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] == 4){
                count++;
            }else if(a[i] + a[j] == 4){
                v.push(a[i]);
                v.push(a[j]);
            }
        }
    }
    cout<<v.size()<<endl;
}
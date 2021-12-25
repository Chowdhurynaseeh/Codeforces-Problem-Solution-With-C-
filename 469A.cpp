#include <iostream>
#include <algorithm>
#include <set>
#include <iterator>
using namespace std;

int main() {
    int n,p,q,a[100],b[100],i;
    string mess = "I become the guy.";
    set<int> s1;
    cin>>n>>p;
    if(p != 0){
        for(i = 0; i < p; i++) {
        cin >> a[i];
        s1.insert(a[i]);
        }
    }

    cin>>q;
    if(q != 0){
        for(i = 0; i < q; i++){
            cin >> b[i];
            s1.insert(b[i]);
        } 
    }
    if(p == 0 && q == 0){
        cout<<"Oh, my keyboard!"<<endl;
    }else{
        set<int> :: iterator itr;
        for( itr = s1.begin(),i = 1; itr != s1.end(),i <= n; itr++,i++){
            if(i != *itr){
                mess = "Oh, my keyboard!";
                break;
            }
        }
        cout<<mess<<endl;
    }
}
#include <iostream>
#include <map>
#include <iterator>
using namespace std;
int main() {
    int n,x;
    map<int,int> mp;
    map<int,int> fmp;
    cin>>n;
    for(int i = 1; i <= n; i++){
        cin>>x;
        mp.insert(pair<int,int>(i,x));
    }
    map<int,int>::iterator itr;
    for(itr = mp.begin(); itr != mp.end(); ++itr){
        //cout<< itr->first << " " << itr->second<<endl;
        fmp.insert(pair<int,int>(itr->second,itr->first));
    }
    for(itr = fmp.begin(); itr != fmp.end(); ++itr){
        cout<< itr->second<<" ";
    }
}
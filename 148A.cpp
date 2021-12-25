#include <iostream>
#include <algorithm>
#include <set>
#include <iterator>
using namespace std;
int main() {
    set<int> s1,s2;
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    for(int i = 1; i <= d; i++){
        s2.insert(i);
    }
    for(int  i = k; i <= d; i += k){
        s1.insert(i);
    }
    for(int  i = l; i <= d; i += l){
        s1.insert(i);
    }
    for(int  i = m; i <= d; i += m){
        s1.insert(i);
    }
    for(int  i = n; i <= d; i += n){
        s1.insert(i);
    }
    set<int>::iterator itr;

    set<int> result;
    set_difference(s2.begin(), s2.end() ,s1.begin(), s1.end(),
    inserter(result, result.end()));
    cout<<d - result.size()<<endl;
}
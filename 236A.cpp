#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main() {
    string name;
    cin >> name; 
    int count = 0;
    /*
    wjmzbmr -> f
    w j m z b r
    xiaodao -> m
    x i (a o) d (a o)
    sevenkplus -> f
    s e v n k p l u s
    */
   sort(name.begin(), name.end());
   for(int i = 0; i < name.length(); i++) {
        if(name[i] != name[i+1]){
               count++;
       }
   }
   if(count % 2 == 0){
       cout<<"CHAT WITH HER!"<<endl;
   }else{
       cout<<"IGNORE HIM!"<<endl;
   }
}
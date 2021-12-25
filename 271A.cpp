#include <iostream>
#include <vector>
using namespace std;

bool checkDistinct(vector<int> nums);
bool getAllDigits(int n){
    vector<int> nums;
    int r;
    while(n > 0) {
        r = n % 10;
        n = n / 10;
        nums.push_back(r);
    }
    bool getVal = checkDistinct(nums);
    if(getVal == true){
        return true;
    }else{
        return false;
    }
}
bool checkDistinct(vector<int> nums){
    bool tmp = true;
    for(int i = 0; i < nums.size(); i++) {
        for(int j = i + 1; j < nums.size(); j++){
            if(nums[i] == nums[j]){
                tmp = false;
                break;
            }
        }
    }
    return tmp;
}
int main() {
    int n;
    cin >> n;
    while(true){
        n++;
        if(getAllDigits(n) == false){
            getAllDigits(n);
        }else{
            cout<<n<<endl;
            break;
        }
    }
}
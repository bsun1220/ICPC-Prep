#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include <array>
using namespace std;

bool find_subarray_sum(vector<int> list, int target);

int main(){
    vector<int> lst ({1,3,2,5,1,1,2,3});
    cout << find_subarray_sum(lst, 60) << "\n";
}

bool find_subarray_sum(vector<int> list, int target){
    int lp = 0, rp = 0;
    int length = list.size(), sum = 0;

    while (rp < length){
        if (sum < target){
            rp +=1;
            if (rp < length){
                sum += list[rp];
            }
        }
        else if (sum > target){
            sum -= list[lp];
            lp += 1;
        }
        else if (sum == target){
            return true; 
        }
    }
    return false; 
}
#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

int main(){
    int t;
    cin >> t; 
    for(int i = 0; i < t; i++){
        string b;
        cin >> b;
        vector<int> nums;
        int start = -1;
        for(int end = 0; end < b.length(); end++){
            if (b[end] == '0'){
                nums.push_back(end - start - 1);
                start = end; 
            }
            else if (b[end] == '1' && end == b.length() - 1){
                nums.push_back(end - start);
            }
        }
        sort(nums.begin(), nums.end(), greater<int>());
        int max_score = 0;
        for(int k = 0; k < nums.size(); k+=2){
            max_score += nums[k];
        }
        cout << max_score << endl;

    }

}
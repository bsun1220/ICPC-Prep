#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

int main(){
    int num_test_cases;
    cin >> num_test_cases;
    vector <double> ans;
    for(int i = 0; i < num_test_cases; i++){
        vector<double> apples;
        vector<double> oranges;
        int n;
        cin >> n;
        double min_apple = 10000000000;
        for(int k = 0; k < n; k++){
            double val;
            cin >> val;
            apples.push_back(val);
            min_apple = min(min_apple, val);
        }
        double min_orange = 10000000000;;
        for(int k = 0; k < n; k++){
            double val;
            cin >> val;
            oranges.push_back(val);
            min_orange = min(min_orange, val);
        }
        double overall_min = min(min_apple, min_orange);
        double amount = 0;
        for(int k = 0; k < n; k++){
            double diff = min(oranges[k] - overall_min, apples[k] - overall_min);
            oranges[k] -= diff;
            apples[k] -= diff;
            amount += diff;
            if (oranges[k] > min_orange){
                amount += oranges[k] - min_orange;
            }
            if (apples[k] > min_apple){
                amount += apples[k] - min_apple;
            }
        }
        ans.push_back(amount);
    }
    for (int i = 0; i < num_test_cases; i++){
        cout << ans[i] << "\n";
    }
}
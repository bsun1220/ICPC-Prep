#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include <array>
using namespace std;

/*
Given a set of coin increments, what is the min number of coins
we would need to add up to n coins
*/

int findCoins(set<int> coins, int target);
int countCoins(set<int> coins, int target);

int main(){
    set<int> coins ({1,2,5,6,10});
    cout << countCoins(coins, 12) << "\n";
    cout << countCoins(coins, 10) << "\n";
    cout << countCoins(coins, 15) << "\n";
}

int findCoins(set<int> coins, int target){
    vector<int> arr (target + 1);
    arr[0] = 0;
    for (int i = 1; i < target + 1; i++){
        arr[i] = INT_MAX;
        for (auto coin : coins){
            if (i - coin >= 0){
                arr[i] = min(arr[i - coin] + 1, arr[i]);
            }
        }
    }
    return arr[target];
}

int countCoins(set<int> coins, int target){
    vector<int> arr (target + 1);
    arr[0] = 1;
    for (int i = 1; i < target + 1; i++){
        for (auto coin : coins){
            if (i - coin >= 0){
                arr[i] += arr[i - coin];
            }
        }
    }
    return arr[target];
}
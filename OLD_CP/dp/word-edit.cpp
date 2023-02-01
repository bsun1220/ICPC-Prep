#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include <array>
using namespace std;

int word_edit(string s1, string s2);

int main(){
    cout << word_edit("happy", "friends") << "\n";
    cout << word_edit("love", "movie") << "\n";
}

int word_edit(string s1, string s2){
    int m = s1.length() + 1, n = s2.length() + 1;
    int arr [m][n];
    arr[0][0] = 0;
    for(int i = 1; i < m; i++){
        arr[i][0] = i;
    }
    for(int i = 1; i < n; i++){
        arr[0][i] = i;
    }
    for(int i = 1; i < m; i++){
        for(int k = 1; k < n; k++){
            int min_val = min(arr[i][k - 1] + 1, arr[i - 1][k]+ 1);
            int cost = s1[i - 1] == s2[k - 1] ? 0 : 1;
            min_val = min(min_val, arr[i - 1][k - 1] +  cost);
            arr[i][k] = min_val;
        }
    }

    return arr[s1.length()][s2.length()];
}
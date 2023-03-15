#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include <cmath>
#define ll                    long long int
using namespace std;

int main(){
    int n; cin >> n;
    int t; cin >> t;

    char arr[2][n];
    bool diff[n];
    for(int word = 0; word < 2; word++){
        for(int i = 0; i < n; i++){
            cin >> arr[word][i];
        }
    }
    int diff_total = 0; 
    for(int i = 0; i < n; i++){
        diff[i] = arr[0][i] != arr[1][i];
        if(diff[i]) diff_total++;
    }
    if (t < ceil((float)diff_total/2)){
        cout << -1 << endl;
        return 0;
    }


    int curr_d = 0;
    int curr_s = 0;

    int diff_check = max(0, diff_total - t);
    int sim_check = max(0, t - diff_total);

    char ans[n];
    for(int i = 0; i < n; i++){
        if (diff[i]){
            if (curr_d < diff_check){
                ans[i] = arr[0][i];
            } else if (curr_d < 2 * diff_check){
                ans[i] = arr[1][i];
            } else {
                char val = 'a';
                if (arr[0][i] == 'a' || arr[1][i] == 'a'){
                    val = 'b';
                    if (arr[0][i] == 'b' || arr[1][i] == 'b'){
                        val = 'c';
                    }
                }
                ans[i] = val;
            }
            curr_d++;
        } else {
            if (curr_s < sim_check){
                char val = 'a';
                if (arr[0][i] == 'a'){
                    val = 'b';
                    if (arr[0][i] == 'b'){
                        val = 'c';
                    }
                }
                ans[i] = val;
            } else {
                ans[i] = arr[0][i];
            }

            curr_s++;
        }
    }

    for(int i = 0; i < n; i++){
        cout << ans[i];
    }
    cout << endl;

}
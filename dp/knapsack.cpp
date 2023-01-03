#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include <array>
using namespace std;

int knapsack(vector<int> values, vector<int> weights, int max_weight);

int main(){
    vector <int> values ({1,2,14,2,3,1});
    vector <int> weights ({1,5,1,3,2,4});
}

int knapsack(vector<int> values, vector<int> weights, int max_weight){
    int n = max_weight;
    int m = values.size();
    int mat[m + 1][n + 1];

    for(int i = 0; i < n; i++){
        mat[i][0] = 0;
    }

    for(int j = 0; j < n; j++){
        mat[0][j] = 0;
    }

    for(int i = 1; i < m + 1; i++){
        for(int j = 1; j < n + 1; j++){
            if(weights[i] < j){
                mat[i][j] = mat[i - 1][j];
            } else {
                mat[i][j] = max(mat[i - 1][j], mat[i - 1][j - weights[i]] + values[i]);
            }
        }
    }
    return mat[m][n];

}
#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#define ll                    long long int
using namespace std;

map<int, vector<int>> directory;

int main(){
    directory[2] = {2};
    directory[3] = {3};
    directory[4] = {2,2,3};
    directory[5] = {5};
    directory[6] = {5,3};
    directory[7] = {7};
    directory[8] = {7,2,2,2};
    directory[9] = {7,3,3,2};
    vector<int> list; 
    int n; cin >> n;
    ll digits; cin >> digits; 
    for(int i = 0; i < n; i++ ){
        int digit = digits %10; 
        digits/=10; 
        if (directory.count(digit)){
            vector<int> to_add = directory[digit];
            for (int s : to_add){
                list.push_back(s);
            }
        }
    }
    sort(list.begin(), list.end(), greater<int>());
    for(int i = 0; i < list.size(); i++){
        cout << list[i];
    }
    cout << endl;

}
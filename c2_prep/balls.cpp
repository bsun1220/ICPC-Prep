#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#define ll                    long long int
using namespace std;


int calculateDelete(vector<pair<int, int>> list, int index){
    list.erase(list.begin() + index);
    bool complete = false;
    int total = 2; 
    while(!complete && index > 0){

        if (list[index].first == list[index - 1].first 
            && list[index].second + list[index - 1].second >= 3){

            total += list[index].second + list[index - 1].second;

            list.erase(list.begin() + index);

            list.erase(list.begin() + index - 1);
  
            index --; 

        } else {
            complete = true; 
        }
    }

    return total;

}

int main(){
    int n, k, x;
    cin >> n >> k >> x;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<pair<int, int>> consec;

    int init = arr[0];
    int num = 1;
    for(int i = 1; i < n; i++){
        if (arr[i] != init){
            consec.push_back({init, num});
            init = arr[i];
            num = 0;
        } 
        num++; 
    }
    consec.push_back({init, num});

    int max_total = 0;

    for(int i = 1; i < consec.size() - 1; i++){
        if (consec[i].first == x && consec[i].second == 2){
            max_total = max(max_total, calculateDelete(consec, i));
        }
    }
    cout << max_total << endl;

}
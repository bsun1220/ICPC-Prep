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

    ll arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    ll sec = arr[0];
    int num = 1;

    ll total = 0;

    for(int i = 1; i < n; i++){
        if (arr[i] != sec){
            total += (num * (num + 1))/2;
            sec = arr[i];
            num = 0;
        }
        num ++;
    }

    total += (num * (num + 1))/2;

    cout << total << endl;


}
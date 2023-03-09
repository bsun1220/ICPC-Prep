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
    char arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    char start = arr[0];
    int add = 0;
    int total = 1; 

    bool first = false; 
    bool second = false; 

    for(int i = 1; i < n; i++){
        if (arr[i] != start){
            total ++; 
            start = arr[i];
        }
        if (arr[i] == arr[i - 1]){
            if(!first) first = true; 
            else second = true; 
        }
    }

    if (first) add++;
    if (second) add++;

    cout << total + add << endl;

}
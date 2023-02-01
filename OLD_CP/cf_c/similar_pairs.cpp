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
    for(int iter = 0; iter < t; iter++){
        int length;
        cin >> length;
        int num_even  = 0, num_odd = 0;
        vector<int> v; 
        for(int i = 0; i < length; i++){
            int val;
            cin >> val;
            if (val % 2 == 1) num_odd++;
            else num_even++;
            v.push_back(val);
        }
        sort(v.begin(), v.end());
        int diff = 0;
        for(int i = 1; i < length; i++){
            if(v[i] - v[i - 1] == 1) diff++;
        }

        if(num_even % 2 == 0 && num_odd % 2 == 0){
            cout << "YES" << endl;
        }
        else if (num_even % 2 == 1 && num_odd % 2 == 1 && diff >= 1){
            cout << "YES" << endl;
        } else { 
            cout << "NO" << endl;
        }


    }
}
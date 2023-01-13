#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

int main(){
    int N;
    cin >> N;
    int sum = 0;
    for(int i = 0; i < N; i++){
        int x, y, z;
        cin >> x >> y >> z;
        int total = x + y + z;
        if (total >= 2){
            sum++;
        }
    }
    cout << sum << "\n";
}
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
    float prop = 0;
    for(int i = 0; i < N; i++){
        int f;
        cin >> f;
        prop += f;
    }
    
    cout << prop / (float)N << "\n";
}
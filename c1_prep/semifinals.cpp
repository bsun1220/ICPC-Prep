#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#define ll                    long long int
using namespace std;

void print_list(int arr [], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i];
    }
    cout << endl;
}

int main(){
    int n; cin >> n;

    pair<ll, int> semi1[n];
    pair<ll, int> semi2[n];

    int result1[n];
    int result2[n]; 

    for(int i = 0; i < n; i++){
        result1[i] = 0;
        result2[i] = 0;
    }

    for(int i = 0; i < n; i++){
        ll a; cin >> a; 
        ll b; cin >> b; 
        semi1[i] = make_pair(a, i);
        semi2[i] = make_pair(b, i);
    }
    for(int i = 0; i < n/2; i++){
        result1[semi1[i].second] = 1;
        result2[semi2[i].second] = 1;
    }

    int start1 = 0; int start2 = 0; 
    for(int i = 0; i < n; i++){
        if (semi1[start1].first < semi2[start2].first){
            result1[start1] = 1;
            start1++;
        } else { 
            result2[start2] = 1;
            start2++;
        }
    }

    print_list(result1, n);
    print_list(result2, n);

}
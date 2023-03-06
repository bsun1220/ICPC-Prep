#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <string>
#include <queue>
#include <cmath>
#define ll                    long long int
using namespace std;

int main(){
    int n; cin >> n;
    int A_total = 0;
    int G_total = 0; 
    for(int i = 0; i < n; i++){
        int price1; cin >> price1;
        int price2; cin >> price2; 

        if(abs(A_total + price1 - G_total) > abs(G_total + price2 - A_total)){
            cout << "G";
            G_total += price2; 
        } else {
            cout <<"A";
            A_total += price1;
        }
    }
    cout << endl;
}
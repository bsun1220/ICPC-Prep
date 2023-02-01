#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

int main(){
    int sum = 0;
    int two, three, five, six;
    cin >> two >> three >> five >> six;
    int min_value = min({two, five, six});
    sum += (256 * min_value);
    two -= min_value;
    five -= min_value;
    six -= min_value;
    min_value = min(three, two);
    sum += 32 * min_value;
    cout << sum << "\n";

}
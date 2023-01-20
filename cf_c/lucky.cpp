#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include <math.h>
#include <stdio.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long int value = (long long int)pow(2, n + 1) - 2;
    cout << value << endl;
}
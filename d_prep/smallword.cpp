
#include <iostream>
#include <string>
#define ll                    long long int
using namespace std;

int main(){
    string s; cin >> s;
    bool write[s.size()];
    write[0] = false; 

    for(int i = 1; i < s.size(); i++){
        cout << "hello" << endl;
        if(s.at(i) == 'a'){
            write[i - 1] = write[i-1]^ true;
            write[i] = true;
        }
    }
    for(int i = 0; i < s.size(); i++){
        cout << write[i];
        if (i < s.size() - 1){
            cout << " ";
        }
    }
    cout << endl;
}
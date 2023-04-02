#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <typeinfo>
#define endl '\n'
using namespace std;

map <int, string> pki;
map <string, int> pks;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, M, idx;
    string name, input;

    cin >> N >> M;
    

    for (int i = 1; i < N  + 1; i++) {
        cin >> name;
        pki.insert({ i, name });
        pks.insert({ name, i });
    }

    for (int i = 0; i < M; i++) {
        cin >> input;
        if (isdigit(input[0]) != 0) {
            idx = stoi(input);
            cout << pki[idx] << endl;
        }
        else { 
            cout << pks[input] << endl;
        }
    }

    return 0;
}
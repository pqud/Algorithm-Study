#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#define endl '\n'
using namespace std;

vector <int> p; 
vector <int> m;

//이분탐색 안쓰고
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    p.assign(10000000, 0);
    m.assign(10000000, 0);
    int N, M, input;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> input;
        if (input >= 0) { p[input] += 1; }
        else { 
            input = abs(input);
            m[input] += 1; 
        }
    }

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> input;
        if (input >= 0) { cout << p[input] << " "; }
        else { 
            input = abs(input);
            cout << m[input] << " "; 
        }
    }

    return 0;
}

//젤 처음 생각 -> 시간 초과
//multiset <int> ms;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
//
//    int N, M, input;
//
//    cin >> N;
//    for (int i = 0; i < N; i++) {
//        cin >> input;
//        ms.insert(input);
//    }
//
//    cin >> M;
//    for (int i = 0; i < M; i++) {
//        cin >> input;
//        cout << ms.count(input) << " ";
//    }
//
//    return 0;
//}

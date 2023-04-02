#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#define endl '\n'
using namespace std;

set <string> Listen;
set <string> Seen;
set <string> LnS;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	
	int N, M, count = 0;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		string input;
		cin >> input;
		Listen.insert(input);
	}

	for (int i = 0; i < M; i++) {
		string input;
		cin >> input;
		Seen.insert(input);
	}

	for (auto iter = Seen.begin(); iter != Seen.end(); iter++) {
		if (Listen.find(*iter) != Listen.end()) {
			count++;
			LnS.insert(*iter);
		}
	}

	cout << count << endl;

	for (auto iter = LnS.begin(); iter != LnS.end(); iter++) { cout << *iter << endl; }

	return 0;
}
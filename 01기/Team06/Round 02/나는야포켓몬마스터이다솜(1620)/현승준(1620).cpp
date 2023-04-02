#include <iostream>
#include <map>
#include <string>
#define endl '\n'
using namespace std;

int main()
{
    // 포켓몬 도감 수, 질문 수, 도감1, 도감2
    int N, M;
    string name;
    map<int, string> ig;
    map<string, string> ig2;

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> name;

        // 도감1에 (몬스터번호, 몬스터이름), 도감2에 (몬스터이름, 몬스터번호) 저장
        ig.insert({ i + 1, name });
        ig2.insert({ name, to_string(i + 1) });
    }

    // 질문받기, 숫자면 int로 변환, 정답 저장
    string q;
    int qn;
    string* a = new string[M];

    for (int i = 0; i < M; i++) {
        cin >> q;
        // 질문이 몬스터번호면
        if (q[0] >= '1' && q[0] <= '9') {
            qn = stoi(q);
            a[i] = ig.at(qn);
        }
        // 질문이 몬스터이름이면
        else {
            a[i] = ig2.at(q);
        }
    }

    for (int i = 0; i < M; i++) {
        cout << a[i] << endl;
    }

    return 0;
}

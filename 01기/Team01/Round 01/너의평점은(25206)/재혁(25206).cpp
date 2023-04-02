#include<iostream>
#include<cstring>
#include<sstream>
#define endl '\n'
using namespace std;

struct cl
{
    string name;
    float num;
    string grade;
};


float change(string grade) {
    if (grade[0] == 'P')return -2.0;

    float tmp;
    switch (grade[0])
    {
    case 'A':
        tmp = 4.0;
        if (grade[1] == '+')tmp += 0.5;
        break;
    case 'B':
        tmp = 3.0;
        if (grade[1] == '+')tmp += 0.5;
        break;
    case 'C':
        tmp = 2.0;
        if (grade[1] == '+')tmp += 0.5;
        break;
    case 'D':
        tmp = 1.0;
        if (grade[1] == '+')tmp += 0.5;
        break;
    case 'F':
        tmp = 0.0;
        break;
    }

    return tmp;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    struct cl information[20];

    for (int i = 0; i < 20; i++) {
        cin >> information[i].name;
        cin >> information[i].num;
        cin >> information[i].grade;
    }

    float final_result = 0;
    float final_class = 0;

    for (auto x : information) {
        float g = change(x.grade);
        if (g < -1.0)continue;
        final_result += (x.num * g);
        final_class += x.num;
    }

    cout << final_result / final_class;


    return 0;
}

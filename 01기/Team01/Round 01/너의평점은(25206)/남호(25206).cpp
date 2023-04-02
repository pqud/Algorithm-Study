#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <iomanip>
using namespace std;



int main(){
   map<string, double> m; 

    m.insert({ "A+", 4.5 });
	m.insert({ "A0", 4.0 });
	m.insert({ "B+", 3.5 });
	m.insert({ "B0", 3.0 });
	m.insert({ "C+", 2.5 });
	m.insert({ "C0", 2.0 });
	m.insert({ "D+", 1.5 });
	m.insert({ "D0", 1.0 });
	m.insert({ "F", 0.0 });

    double s;
    string n;
    string g;
    double sum1;
    double sum2;
    for(int i = 0; i < 20; i++){
        cin >> n >> s >> g;
        if(g == "P"){
            continue; 
        }
        else{
           sum1 += s * m[g];
           sum2 += s;
        }
    }
    sum1 = sum1 / sum2;

    cout << fixed << setprecision(4);
    cout << sum1;
} 

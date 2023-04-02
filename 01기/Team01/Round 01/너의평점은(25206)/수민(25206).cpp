#include <iostream>
#include <map>
#include <iomanip>
using namespace std;
int main()
{
    map<string, double> m;	//map <key type, value type> 이름
    m["A+"] = 4.5;
    m["A0"] = 4.0;
    m["B+"] = 3.5;
    m["B0"] = 3.0;
    m["C+"] = 2.5;
    m["C0"] = 2.0;
    m["D+"] = 1.5;
    m["D0"] = 1.0;
    m["F"] = 0.0;
    
    double avg;
    string o;
	double a;
	string p;
    double sum = 0;	//과목총합
	double num = 0;	//과목개수 
    
    for(int i = 0; i < 20; i++)
    {
		cin >> o >> a >> p;
		if(m.find(p) != m.end()){
    		sum += a * m[p];	//학점 * grade 
    		num += a;
		}
	}
//	cout << sum << endl;
//	cout << num << endl;
	avg = sum/num;
	cout << avg; 
}

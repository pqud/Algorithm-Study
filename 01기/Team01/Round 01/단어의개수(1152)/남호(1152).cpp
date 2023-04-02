#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <iomanip>
using namespace std;



int main() {
    string s;
    getline(cin, s); 
    int i=0,num=0;
    while(s[i]!='\0'){
    	if (s[i] != ' ' && (i == 0 || s[i-1] == ' ')){ 
        	num++;
        }
        i++;
    } 
    cout << num; 
}

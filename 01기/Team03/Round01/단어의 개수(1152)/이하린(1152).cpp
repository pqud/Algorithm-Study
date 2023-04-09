#include<iostream>
using namespace std;

int main()
{
	 int cnt=0;
	 string s;
	 
	 getline(cin,s);
	 if(s.empty()) {cout<<cnt; return 0;}
	 cnt+=1;
	 if(s[0]==' ') cnt--;
	 for(int i=0; i<s.length(); i++){
	 	if(s[i]==' '&&s[i+1]==NULL){
	 	}
	 	else if(s[i]==' '){
	 		cnt++;
	 	}
	 }
	 cout<<cnt;
	 
	 

}

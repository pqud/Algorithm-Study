#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

int main(){

    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N,M;
    cin>>N>>M;
    unordered_map<string,string> dogam;
    unordered_map<string, string> reverse_dogam;

    for(int i=1; i<=N; i++){
        string s;
        cin>>s;
        dogam[to_string(i)]=s;
        reverse_dogam[s]=to_string(i);
    }
    for(int i=0;i<M;i++){
        string f;
        cin>>f;

        if(dogam.find(f)!=dogam.end()){
           cout<<dogam[f]<<'\n';
        }else if(reverse_dogam.find(f)!=dogam.end()){
          cout<<reverse_dogam[f]<<'\n';
          }
    }
   
}
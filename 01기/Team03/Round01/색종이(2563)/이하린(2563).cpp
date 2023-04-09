#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<vector<int> > paper(100, vector<int>(100, 0));

    int N,x,y,result=0;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>x>>y;
        for(int a=0;a<10;a++){
            for(int b=0;b<10;b++){
                paper[x+a][y+b]=1;
            }

        }
    }
     for(int a=0;a<100;a++){
            for(int b=0;b<100;b++){
                if(paper[a][b]==1) result++;
        }
     }
    cout<<result;
    
}

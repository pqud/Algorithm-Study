#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int N,M;

    cin>>N>>M;
    vector<int> v(N);
    for(int w=0; w<N; w++){
        v[w]=w+1;
    }
    
    int i, j;
    for(int w=0; w<M; w++){ 
        cin>>i>>j;
        reverse(v.begin()+i-1,v.begin()+j);
        
    }

    for(int w=0; w<v.size(); w++){
        cout<<v[w]<<" ";
    }

}

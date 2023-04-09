#include <iostream>
#include <vector>
using namespace std;

int main(){

    int N;
    int other=0;
    cin>>N;
    if(N==1) cout<<1<<"/"<<1;
    else{
        int i=1;
        int hap=1;
        while(1){
            i++;
            hap+=i;
            if(hap>=N){
                hap-=i; 
                break;
            }
        }
        N-=hap;
        other=i+1-N;
        if(i%2==0) //i가 짝수면
            cout<<N<<"/"<<other;
        else 
            cout<<other<<"/"<<N;
    }
    
}

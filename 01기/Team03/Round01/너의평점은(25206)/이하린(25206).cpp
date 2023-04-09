#include <iostream>
using namespace std;

int main(){
    
    string cls;
    double grade;
    string cls_grade;
    double hap=0;
    double total=0;
    double result;

    for(int i=0;i<20;i++){
        cin>>cls>>grade>>cls_grade;
        

        if(cls_grade!="P"){
            hap+=grade;

            if(cls_grade =="A+") grade=grade*4.5;
            else if(cls_grade =="A0") grade=grade*4.0; 
            else if(cls_grade =="B+") grade=grade*3.5; 
            else if(cls_grade =="B0") grade=grade*3.0; 
            else if(cls_grade =="C+") grade=grade*2.5; 
            else if(cls_grade =="C0") grade=grade*2.0; 
            else if(cls_grade =="D+") grade=grade*1.5; 
            else if(cls_grade =="D0")grade=grade*1.0; 
            else if(cls_grade =="F") grade=grade*0; 
            
            total+=grade;
        }

    }
    result=total/hap;

    cout<<result;
}

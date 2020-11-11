
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    int ii;
    int num1 = num-1;

    for(ii = 2;ii<num;ii++){
        if(num%ii==0){
            cout<<"Non Prime"<<endl;
            break;
        }
        if(num%ii!=0 && ii==num1){
            cout<<"Prime"<<endl;
        }
        
    }
    if(num==2){
       cout<<"Prime"<<endl; 
    }
    return 0;
}
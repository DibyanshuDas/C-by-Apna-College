#include<iostream>
using namespace std;

int main(){
int a;
    int b;
    int c;
    cout<<"Enter any three number"<<endl;
    cin>>a>>b>>c;
    cout<<"The Greatest number betwwen the three is :";
    if(a>b){
        if(a>c){
            cout<<a<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }else{
        if(b>c){
            cout<<b<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
    return 0;
}
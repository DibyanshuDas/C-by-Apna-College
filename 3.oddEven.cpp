#include<iostream>
using namespace std;

int main(){
    //Question 1.Program to check if a number is even or odd.
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    if(n%2==0){
        cout<<"Even"<<endl;
    }else{
        cout<<"Odd"<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    //Ques1. Program to find the factorial of number n.
    int n;
    cout<<"/n"<<"/n"<<"Ques1. Program to find the factorial of number n."<<endl;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int fact = 1;
    for(int con = 1;con<=n;con=con+1){
        fact = fact * con;
        }
    cout<<"Factorial of you number == "<<fact<<endl;
    
    //Exit Code
    int exit;
    cout<<"Press 1 to exit"<<endl;
    cin>>exit;
    cout<<exit<<endl;
    
    return 0;
}
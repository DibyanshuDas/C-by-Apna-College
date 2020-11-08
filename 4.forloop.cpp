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



    //Ques2. Program to find sum of natural numbers till n.
    int n1;
    cout<<"/n"<<"/n"<<"Ques2. Program to find sum of natural numbers till n."<<endl;
    cout<<"Enter a number"<<endl;
    cin>>n1;
    cout<<endl;
    for(int natnum=1;natnum<=n1;natnum++){
        cout<<natnum<<endl;
    }



    //Ques3. Program to display multiplication table of n2 upto 10.
    int n2;
    int mtn;
    cout<<"\n"<<"\n"<<"Program to display multiplication table upto 10."<<endl;
    cout<<"Enter any number"<<endl;
    cin>>n2;
    cout<<endl;
    for(int mt =1; mt<=10 ; mt++){
        mtn = n2 * mt;
        cout<<n2<<" * "<<mt<<" = "<<mtn<<endl;
    }

    //Exit Code
    int exit;
    cout<<"Press 1 to exit"<<endl;
    cin>>exit;
    cout<<exit<<endl;

    return 0;
}
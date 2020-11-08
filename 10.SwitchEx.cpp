#include<iostream>
using namespace std;

int main(){
    //Ques1. Write a program to write a simple calculator.
    int num1,num2;
    int result;
    char opt;
    cout<<"Enter two numbers"<<endl;
    cin>>num1>>num2;
    cout<<"Enter which Operation do you want to do ?: "<<endl;
    cin>>opt;

    switch (opt)
    {
    case '+':
        result=num1+num2;
        cout<<"Result = "<<result<<endl;
        break;
    case '-':
        result=num1-num2;
        cout<<"Result = "<<result<<endl;
        break;
    case '*':
        result=num1*num2;
        cout<<"Result = "<<result<<endl;
        break;
    case '/':
        result=num1/num2;
        cout<<"Result = "<<result<<endl;
        break;
    case '%':
        result=num1%num2;
        cout<<"Result = "<<result<<endl;
        break;
    
    default:
        cout<<"Operand not found!"<<endl;
        break;
    }




    //Exit Code
    int exit;
    cout<<"Press 1 to exit"<<endl;
    cin>>exit;
    cout<<exit<<endl;
    
    return 0;
}
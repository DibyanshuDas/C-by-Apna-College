#include<iostream>
using namespace std;

int main(){
    // //Ques1. To find the numbers between two number
    // int num1;
    // int num2;
    // cout<<"Enter any 2 number"<<endl;
    // cin>>num1>>num2;
    // cout<<endl;
    // if(num1>num2){
    //     do{
    //         cout<<num2<<endl;
    //         num2++;
    //     }while(num2<=num1);
    // }else if(num2>num1){
    //     do{
    //         cout<<num1<<endl;
    //         num1++;
    //     }while(num1<=num2);
    // }else{
    //     cout<<num1<<endl;
    // }
    

    

    // //Ques2. C++ Program to print numbers from 1 to user number
    // int num;
    // cout<<"Enter a natural number"<<endl;
    // cin>>num;
    // int n = 1;
    // do{
    //     cout<< n <<" ";
    //     n++;
    // }while (n<=num);





    //Ques3. Sum of Positive Numbers Only
    int number;
    int sum = 0;

    do{
        cout<<"Enter a number : "<<endl;
        cin>>number;
        sum +=number;  
    } while (number>=0);
    cout<<"The sum is :"<<sum<<endl;
    
    

    return 0;
}
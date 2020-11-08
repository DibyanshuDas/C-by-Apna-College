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






    //Question 2.Program to find maximum, minimum among two numbers.
    int n1,n2;
    int max;
    int min;
    cout<<"Enter any two numbers"<<endl;
    cin>>n1>>n2;
    if(n1>n2){
        max=n1;
        min=n2;
    }else{
        max=n2;
        min=n1;
    }

    cout<<"Max ="<<max<<endl;
    cout<<"Min ="<<min<<endl;






    //Question 3.Program to find the maximum among three numbers.
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





    //Question 4.Program to check if a triangle is scalene, isosceles or equilateral.
    int sideA;
    int sideB;
    int sideC;
    cout<<"Enter the values of the three sides of the triangle"<<endl;
    cin>>sideA>>sideB>>sideC;

    if(sideA==sideB && sideB==sideC){
        cout<<"It is an equialteral triangle"<<endl;
    }else if (sideA==sideB || sideB==sideC || sideC==sideA){
        cout<<"It is an isosceles triangle"<<endl;
    }else{
        cout<<"It is a scalene triangle"<<endl;
    }






    //Question 5.Program to check if an alphabet is a vowel or a consonant.
    char cv;
    bool isVowel;
    bool isvowel;
    cout<<"Enter any character"<<endl;
    cin>>cv;
    isvowel = (cv =='a' || cv =='e' || cv=='i' || cv=='o' || cv=='u');
    isVowel = (cv =='A' || cv =='E' || cv=='I' || cv=='O' || cv=='U');
    if(isVowel||isvowel){
        cout<<"Vowel"<<endl;
    }else{
        cout<<"Constant"<<endl;
    }

    return 0;
}
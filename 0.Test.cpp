#include<iostream>
using namespace std;

int main(){
    //Stars pattern
    int num;
    int i;
    cout<<"Enter the number of columns"<<endl;
    cin>>num;
    cout<<endl;
    for(i = 1; i<=num ; i++){
        for(int n = 1;n<=i;n++){
            cout<<"*";
        }
        cout<<endl;        
    }



    //Exit code
    int exit;
    cout<<"\nPress 1 to exit"<<endl;
    cin>>exit;
    cout<<exit<<endl;
    return 0;
    }
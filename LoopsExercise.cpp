#include<iostream>
using namespace std;

int main(){
    //Ques1. Write a program to print all odd numbers till n.
    int n;
    cout<<"ENTER A NUMBER :"<<endl;
    cin>>n;
    cout<<" "<<endl;
    for (int i = 1; i <=n; i++){
        if(i%2==0){
            continue;
        }
        cout<<i<<endl;
    }






    //Ques2.Write a program to check if a given number is prime or not.
    int nn;
    cout<<"Enter a number"<<endl;
    cin>>nn;
    int ii;
    int num = nn-1;

    for(ii = 2;ii<nn;ii++){
        if(nn%ii==0){
            cout<<"Non Prime"<<endl;
            break;
        }
        if(nn%ii!=0 && ii==num){
            cout<<"Prime"<<endl;
        }
        
    }
    if(nn==2){
       cout<<"Prime"<<endl; 
    }




    
    //Ques3. Write a program to print all prime numbers in a given range
    int a,b;
    cin>>a>>b;
    if (a>b) {
        for (int num=b;num<=a;num++){
            int iii;
                for(iii = 2; iii<num ; iii++){
                    if(num%iii==0){
                        break;
                    }
                }
            if(iii==num){
                cout<<iii<<endl;
            }
        }
    }
    if(b>a){
        for (int num=a;num<=b;num++){
            int iii;
                for(iii = 2; iii<num ; iii++){
                    if(num%iii==0){
                        break;
                    }
                }
            if(iii==num){
                cout<<iii<<endl;
            }
        }
    }




    //Exit Code
    int bye;
    cout<<"Press 1 to exit"<<endl;
    cin>>bye;
    cout<<bye<<endl;
   return 0;
}
#include<iostream>
using namespace std;

int main(){
    int i = 0;
    int k,l,m;
    //post increment--value will be increased or decreased in the next use
    k=i++;
    m=i;
    cout<<k<<i<<m<<endl;
    //pre increment--value will be increased or decreased instantly
    l = ++i;
    cout<<k<<l<<i<<endl;

    return 0;
}
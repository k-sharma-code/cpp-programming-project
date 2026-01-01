#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 1st number : ";
    cin>>a;
    cout<<"enter 2nd number : ";
    cin>>b;
    cout<<"enter 3rd number : ";
    cin>>c;
    if(a>b){ // b can never be the greatest
        if(a>c){
            cout<<a<<" is the greatest number";
        }
        else{
            cout<<c<<" is the greatest number ";
        }
    }
    else{ 
        if(b>c){
            cout<<b<<" is the greatest number";
        }
        else{
            cout<<c<<" is the greatest number";
        }
    }
}
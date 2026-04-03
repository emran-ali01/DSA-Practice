#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        if(row==0 ||row==3){
            for(int col=0;col<4;col++){
                cout<<"*";
            }
        }else{
            //1st star
            cout<<"*";
            //space
            for(int i=0;i<2;i++){
                cout<<" ";
            }
            //last star
            cout<<"*";
        }
        cout<<endl;
    }
}
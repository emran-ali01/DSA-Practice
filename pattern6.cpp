#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        
        int col=1;
        while(col<=n-row){
            cout<<" ";
            col++;
        }
        col=1;
        while(col<=2*row-1){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
}
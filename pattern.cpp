#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    int space=n-row+1;
    while(space){
        cout<<" ";

    }
    int col=1;
    while(col<=row){
        cout<<"*";
        col++;

    }
    cout<<endl;
    row++;
}
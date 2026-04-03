#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int row=0;row<n;row++){
        //space
        for(int space=0;space<n-row-1;space++){
            cout<<" ";
        }
        for(int col=1;col<=row;col++){
            cout<<col;
        }
        
        for(int j=row-1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
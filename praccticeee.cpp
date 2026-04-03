#include<iostream>
using namespace std;
int main(){
    int n=5;;
    
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            cout<<col+1;
        }
        cout<<endl;


        }
         for(int row=n-1;row>=1;row--){
            for(int col=1;col<row+1;col++){
                cout<<col;
            }
            cout<<endl;
         }
       
        
    }
    

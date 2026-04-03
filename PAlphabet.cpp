#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        if(row==0 || row==2){
            for(int i=0;i<n;i++){
                cout<<"*";
            }
        }
            
        else if(row==1){
            cout<<"*";
            for(int i=0;i<n-1;i++){
              cout<<" ";
            }
            cout<<"*";
        }
        else{
            cout<<"*";
        }
        cout<<endl;
       
        
       
        
        
    }
    
}








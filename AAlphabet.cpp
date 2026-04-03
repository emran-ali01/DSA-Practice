#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        //space
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }
        //1st row star print
        if(row==0){
            cout<<"*";
           
        }else if(row==2){
            //middle line 5* print
            for(int i=0;i<(2*row+1);i++){
                cout<<"*";
            }
        }else{
            //bakigular suru te ekta star
            cout<<"*";
            //majer space
            for(int i=0;i<(2*row-1);i++){
                cout<<" ";
            }
            //last star
            cout<<"*";
        }
        //line ses
        cout<<endl;

        
        
            
    }
}

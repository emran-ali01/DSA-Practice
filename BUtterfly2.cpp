#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            cout<<"*";
        }
        //space
        for(int col=0;col<2*(n-row-1);col++){
            cout<<" ";

        }
        
        for(int col=0;col<row+1;col++){
            cout<<"*";
    }
    cout<<endl;
}

    //lower part
    for(int row=n;row>=1;row--){

    
    for(int col=1;col<=row;col++){
        cout<<"*";
    }
    //space
    int space=2*(n-row);
    for(int col=1;col<=space;col++){
        cout<<" ";
    }
    for(int col=1;col<=row;col++){
        cout<<"*";
    }
    cout<<endl;
}
   
    
}

    
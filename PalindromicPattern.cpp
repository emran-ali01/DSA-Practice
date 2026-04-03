#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter rows:";
    cin>>rows;
    int i=0;
    while(i<rows){
        int space=1;
        while(space<=rows-i){
            cout<<" ";
            space++;
        }
        int val=1;
        int j=0;
        while(j<=i){
            cout<<val<<" ";
            val=val*(i-j)/(j+1);
            j++;
        }cout<<endl;
        i++;
    }

    
    
}

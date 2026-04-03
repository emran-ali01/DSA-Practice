#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
  int row=1;
  while(row<=n){
    int space=n-row;
    while(space){
        cout<<" ";
        space--;

    }
    int col=row;
    while(col>=1){
        cout<<col;
        col--;
    }
    col=2;
    while(col<=row){
        cout<<col;
        col++;
    }
    cout<<endl;
  row++;
    
  }
  

}

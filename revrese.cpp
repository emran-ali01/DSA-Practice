#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    int n=5;
    int temp=50;
    
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];

    }
    arr[0]=temp;
   //print
   for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
   }
}

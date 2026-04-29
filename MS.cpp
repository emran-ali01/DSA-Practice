#include<iostream>
using namespace std;
int  missingNumber(int arr[],int n){
    int xorAns=0;
    //xor diye kora
    for(int i=0;i<n;i++){
      xorAns= xorAns^ arr[i]^i;
      }
      xorAns= xorAns^n;
      return xorAns;
    
}

int main(){
    int arr[]={0,1,2,3,5,6};
     int n=6;
   int ans= missingNumber(arr,n);
   cout<<"MissingNumber is:"<<ans<<endl;
  
}
#include<iostream>

using namespace std;
int main(){
int arr[]={0,1,1,0,0};
int n=5;
int left=0;
int right=n-1;
while(left<right){
    if(arr[left]==0){
        left++;
    }
    else{
        swap(arr[left],arr[right]);
            right--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
}


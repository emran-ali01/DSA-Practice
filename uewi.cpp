#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,0,1,0};
    int n=5;
    int left=0;
    int right=n-1;
    while(left<=right){
        if(arr[left]==1){
            swap(arr[left],arr[right]);
            right--;
           
         }
        else{
            left++;
            
        }
        }
    cout<<"Sorted array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

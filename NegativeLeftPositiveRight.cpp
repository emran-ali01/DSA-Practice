#include<iostream>
using namespace std;
int main(){
    int arr[]={12,67,-65,34,-62,-21};
    int n=6;
    int left=0;
    int right=n-1;
    while(left<=right){
        if(arr[left]>0){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        else{
            left++;

        }

    }
    cout<<"Final array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
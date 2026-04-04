#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,30,30,40,50,60};
    int n=8,ans=-1;
    int target=30;
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            //ans store
            ans=mid;
            //left me jao
            e=mid-1;
        }
        else if(arr[mid]<target){
            //right me jao
            s=mid+1;
        }
        else if(arr[mid]>target){
            //left me jao
            e=mid-1;
        }
        mid=s+(e-s)/2;
}
return ans;
}
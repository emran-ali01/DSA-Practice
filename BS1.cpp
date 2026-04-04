#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int target){

int s=0;
int e=n-1;
int mid=s+(e-s)/2;
while(s<=e){
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]<target){
        s=mid+1;
    }
    else{
        s=mid-1;
    }
    
    mid=s+(e-s)/2;

}
return -1;
    
}

int main(){
    int arr[]={10,20,30,40,50,60,70};
    int n=7;
    int target=60;
    int ans=BinarySearch(arr,n,target);
    cout<<"Answer is:"<<ans<<endl;
}
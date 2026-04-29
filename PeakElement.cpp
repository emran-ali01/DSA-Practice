#include<iostream>
using namespace std;
int MountedArray(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<e){
        if(arr[mid]==target){
            e=mid;

        }
        else if(arr[mid]<arr[mid+1]){

            s =mid+1;
        }
        else{
            e=mid-1;
        }
        //mid update
        //yaha par galti hoga 
        mid=s+(e-s)/2;
        

    
    }
    return s;
}




int main(){
    int arr[]={10,20,30,40,90,80,70,60};
    int n=8;
    int target=50;
   int ans= MountedArray(arr,n,target);
   cout<<"Peak element is:"<<arr[ans]<<endl;
}
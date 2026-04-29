#include<iostream>
using namespace std;
int findLastoccurence(int arr[],int n,int target){
int s=0;
int e=n-1;
int mid=s+(e-s)/2;
int ans=-1;
while(s<=e){
    if(arr[mid]==target){
        //ans store
        ans =mid;
        //right me jao
        s=mid+1;
    }
    else if(target>arr[mid]){
        //right me jao
        s=mid+1;

    }
    else{
        e=mid-1;
    }
    //mid update
    mid=s+(e-s)/2;
    
}
return ans;
}

int main(){
    int arr[]={10,20,30,40,40,40,40,50,60};
    int n=9;
    int target=40;
   int ans= findLastoccurence(arr,n,target);
   cout<<"Last Occurence index is:"<<ans<<endl;

}
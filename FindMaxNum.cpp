#include<iostream>
using namespace std;
#include<limits.h>
int findMaxNum(int arr[],int size){
    //ans store variable
    int maxAns=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>maxAns){
            maxAns=arr[i];
        }

    }
    return maxAns;
}

  int main(){
    int arr[]={1,22,33,44,56,6,7,8};
    int size=8;
    int max=findMaxNum(arr,size);
    cout<<"maxNum is:"<<max<<endl;

}
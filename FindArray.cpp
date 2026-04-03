#include<iostream>
using namespace std;
bool findArray(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
           return true;
        }
         
           

    }
    return false;
}


int main(){
    int arr[]={5,15,20,12,3,10};
    int size=6;
    int target=10;
    bool finalAns=findArray( arr,size,target);
    if(finalAns){
        cout<<"Target found"<<endl;
    }
    else{
        cout<<"Target not found"<<endl;
    }

        



}
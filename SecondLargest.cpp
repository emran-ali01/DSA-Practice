#include<iostream>
using namespace std;
int main(){
    int arr[]={12,34,56,78,90};
    int n=5;
    int largest=-1;
    int secondlargest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
         secondlargest=largest;
         largest=arr[i];
        }
        else if(largest > arr[i] && arr[i]>secondlargest){
            secondlargest=arr[i];
        }
       
    }
    cout<<"largest:"<<largest<<" "<<endl;
   cout<<"secondlargest:"<<secondlargest<<" ";
}
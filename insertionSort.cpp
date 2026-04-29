#include<iostream>
using namespace std;
int main(){
    int arr[]={2,9,45,8,5,12};
    int n=6;

for(int i=1;i<n;i++){
    int temp=arr[i];
    int j=i-1;
    for(;j>=0;j--){
        if(temp<arr[j]){
            //shift
            arr[j+1]=arr[j];

        }else{
            break;
        }

    }
    arr[j+1]=temp;
   
   
}
 cout<<"Array is:";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;

}
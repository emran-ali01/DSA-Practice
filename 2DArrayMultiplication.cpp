#include<iostream>
using namespace std;
void ArrayMultiply(int arr[][3],int brr[][3]){
    int crr[3][3] ={0};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                crr[i][j] += arr[i][k]*brr[k][j];
            }
        }
        

    }
    cout<<"Printing the array:"<<" "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }
    

}






int main(){
    int arr[3][3]={{0,2,3},{4,5,8},{7,8,9}};
    int brr[3][3]={{3,2,1},{8,5,4},{9,7,3}};
    ArrayMultiply(arr,brr);
   

}
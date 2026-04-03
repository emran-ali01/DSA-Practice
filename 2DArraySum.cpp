#include<iostream>
using namespace std;
void ArraySum(int arr[3][3],int brr[3][3]){
    int rows=3;
    int cols=3;
    int crr[3][3];
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
          crr[i][j] = arr[i][j] + brr[i][j];  

        }
    }
    //print the sum
    cout<<"Printing array sum"<<" "<<endl;;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }


}
int main(){
    int arr [3][3]={
        {1,2,3},
       {4,5,6},
       {7,8,9}};
    int brr[3][3]={
        {1,3,5},
        {3,4,3},
        {2,8,9}};
    ArraySum(arr,brr);
   
     

}
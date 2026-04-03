#include<iostream>
using namespace std;
void TransposeArray(int arr[][3]){
    int temp[3][3];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                temp[j][i]=arr[i][j];
            }
        }
        cout<<"Printing the array:"<<" "<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<temp[i][j]<<" ";
            }
             cout<<endl;
           
    }
   
        }
        
int main(){
    int arr[][3]={
        {2,1,3},
        {9,7,5},
        {5,7,3}};
        TransposeArray(arr);




}
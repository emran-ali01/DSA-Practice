#include<iostream>
using namespace std;
int main(){
int arr[][3]={{1,2,3},{4,5,6},{3,7,1}};
int brr[][3]={{2,5,7},{3,8,9},{5,1,3}};
int crr[3][3]={0};
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
       for(int k=0;k<3;k++){
        crr[i][j]= crr[i][j]+ arr[i][k]*brr[k][j];
       }

    }
}
    //print
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           
             cout<<crr[i][j]<<" ";
           }
             cout<<endl;
        }
       

    }
   
    
















#include<iostream>
using namespace std;
int main(){
    int arr[][3]={{1,2,3},{4,3,7},{6,8,1}};
    
    int n=3;
    int temp[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            temp[i][j]=arr[j][i];


        }
    }
    cout<<"The Transpose Matrix is:"<<" "<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                 cout<<temp[i][j]<<" ";
            }
           
           cout<<endl;
        }
         
    }




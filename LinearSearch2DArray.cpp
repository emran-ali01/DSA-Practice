#include<iostream>
using namespace std;
bool LinearSearch(int arr[][3]){
    int target=9;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;

}

int main(){
    int arr[][3]={
        {1,2,3},
        {4,7,9},
        {91,2,5}};
        bool ans=LinearSearch(arr);
        if(ans==1){
            cout<<"Target found";
        }else{
            cout<<"Target not found";
        }

        
              
      

}
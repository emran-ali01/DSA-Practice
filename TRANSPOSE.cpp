#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{6,3,4},{2,9,0}};
    int brr[3][3]={0};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            brr[j][i]=arr[i][j];
        }

    }
    //print
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}
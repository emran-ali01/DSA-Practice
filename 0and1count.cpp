#include<iostream> 
using namespace std;
void countZeroOne(int arr[],int size){
    int zerocount=0;
    int onecount=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zerocount++;
        }
        if(arr[i]==1){
            onecount++;
        }
        
    }
    
    cout<<"zerocount is:"<<zerocount<<endl;
     cout<<"onecount is:"<<onecount<<endl;
 
}


int main(){
    int arr[]={1,0,1,1,0,0,1,0,1,};
    int size=9;
    countZeroOne( arr, size);


}
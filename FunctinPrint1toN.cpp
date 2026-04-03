#include<iostream>
using namespace std;
int sum=0;
int print(int n){
    for(int i=1;i<=n;i++){
        sum=sum+i;
        
    }
    return sum;

}
int main(){
    int n;
    cin>>n;
    int totalsum=print(n);
    cout<<totalsum<<endl;

}
#include<iostream>
#include<vector>
using namespace std;
int main(){

    //create vector
    vector<int>arr;
    int ans=(sizeof(arr)/sizeof(int));
    cout<<ans<<endl;
    cout<<arr.size()<<endl;
    //insert
    arr.push_back(5);
    arr.push_back(7);

    //print
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //remove
    arr.pop_back();


    //print
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int>brr(10,3);
    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
    }

    return 0;


}
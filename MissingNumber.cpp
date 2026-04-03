#include<iostream>
#include<vector>
using namespace std;


    int missingNumber(vector<int>&nums){
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum=sum+nums[i];

        }
        int totalSum=((n+1)*(n+2))/2;
        int ans=totalSum-sum;
         return ans;
    }
    int main(){
        vector<int>nums{1,2,3,5,6,7};
        cout<<"Missing Number:"<< missingNumber(nums);
        return 0;
    }
   

    

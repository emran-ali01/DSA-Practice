#include<iostream>
#include<vector>
using namespace std;


int pivotIndex(vector<int>& nums) {

        int n=nums.size();
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(s==e){
                return s;

            }
            if(mid<=e && nums[mid]>nums[mid+1])
            return mid;
            if(mid-1>=s && nums[mid-1]>nums[mid])
            return mid-1;
            if(nums[s]>nums[mid])
            //left me jao
            s=mid-1;
            else
            e=mid+1;
             mid=s+(e-s)/2;
        }
        return -1;
        }






        int main(){
            vector<int>nums{9,10,2,4,6,8};
           
            int ans=pivotIndex(nums);
            if(ans==-1){
                cout<<"Vul hoise"<<endl;
            }
            else{
                cout<<"ans is at index:"<<ans<<endl;
                cout<<"Ans is :"<<nums[ans]<<endl;
            }

        }  
        
        
    

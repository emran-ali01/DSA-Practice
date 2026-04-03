#include<iostream>
#include<vector>
using namespace std;
vector<int>MaximumOnes(vector<vector<int>>&mat){
    vector<int>ans;
    int OneCount=0;
    int RowNo=-11;
    int n=mat.size();
    for(int row=0;row<n;row++){
        int count=0;
        for(int col=0;col<mat[row].size();col++){
            if(mat[row][col]==1){
                count++;

            }
        }
        if(count>OneCount){
            OneCount=count;
            RowNo=row;
        }


    }
    
    ans.push_back(RowNo);
    ans.push_back(OneCount);
    return ans;

}
int main(){
    vector<vector<int>>mat={
      {1,0,0,0},
      {0,1,1,0},
      {1,0,0,1},
      {0,0,1,0},
      {1,1,1,0},
    };
vector<int> result=MaximumOnes(mat);


cout<<"Row:"<< result[0]<<endl;
cout<<"Count is:"<<result[1]<<endl;


    };


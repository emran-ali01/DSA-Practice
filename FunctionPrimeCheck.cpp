#include<iostream>
using namespace std;
bool PrimeCheck(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    bool prime=PrimeCheck(5);
    if(prime){
        cout<<"prime Number";

    }
    else{
        cout<<"Not Prime Number";
        
    }

}
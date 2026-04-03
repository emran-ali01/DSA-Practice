#include<iostream>
using namespace std;
float circleArea(int r){
    float area=3.1416*r*r;
    return area;
    
}
int main(){
    float r;
    cin>>r;
   float  totalarea= circleArea( r);
    cout<<"Area of circle is:"<<totalarea<<endl;

}
#include<iostream>
using namespace std;

float AreaOfCircle(float r){

float area = 3.14*(r*r); 

return area;
}

int main(){

  float radius;
  cin>>radius;

  float ans = AreaOfCircle(radius);
  cout<<"radius is "<<ans;

    return 0;
}   
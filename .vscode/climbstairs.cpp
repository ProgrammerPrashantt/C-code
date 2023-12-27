#include<iostream>
using namespace std;



int ClimbStairs(int n){

//Base case
if(n == 0 || n == 1){
    return 1;
}

//recursive func
int ans =  ClimbStairs(n-1) + ClimbStairs(n-2);
return ans;


}



int main(){
int n;
cout<<"Enter the value of n "<<endl;
cin>>n;

int ans = ClimbStairs(n);

cout<<"Answer is "<<ans;

    return 0;
}
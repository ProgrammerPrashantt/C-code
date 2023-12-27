#include<iostream>
using namespace std;

int FindSqurt(int n){
    
int target = n;

int start = 0;
int end = n;
int mid  = start + (end-start)/2;
int ans = -1;

while(start<=end){

if(mid*mid == target){
    return mid;
}
else if(mid*mid>target){
    end = mid - 1;
}
else if(mid * mid < target){
    //ans store
    ans = mid;
    //right search
    start = mid + 1;
}
mid = start + (end-start)/2;
}
return ans;

}


int main(){
    
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;

    int ans = FindSqurt(n);
   // cout<<"Answer is "<<ans;

    int precision;
    cout<<"Enter the number of floating digits in precision"<<endl;
    cin>>precision;

    double step = 0.1;
    double final_ans = ans;

    for(double j = final_ans; j*j<=n; j = j+step){
        final_ans = j;
    }
//step = step/10;
cout<<"FINAL ANSWER IS "<< final_ans;


    return 0;
}   
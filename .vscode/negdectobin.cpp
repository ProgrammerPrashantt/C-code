#include<iostream>
#include<math.h>

using namespace std;
// negative decimal to binary
int main(){
    
  int n,t;
  float ans = 0, i = 0, count = 0;

  cin >> n;

  t = n;
  if(n<0){
    n = -n;
  }  
 while(n!=0)
 {
    int bit = n & 1;
    ans =  (bit * pow(10,i)) + ans; // bhai last iteratrion se answer aa raha hain usko dekhna 
    i ++;
    n = n>>1;
    count ++;
 }
 cout<<count<<endl;
 if(t<0)
 {
    ans =  ans + pow(10,count);
    cout<<ans;
 }
else
cout << ans;

    return 0;
}
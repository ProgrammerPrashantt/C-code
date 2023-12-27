//binary to decimal
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int i = 0 , ans = 0;

    while(n !=0){
        int digit = n % 10;
        if (digit == 1){
            /*bhai pehla loop chala tab i ki value 0 se 2 ho jaayegi bhale hi didgit 0 ho ya 1 i ki value har iteration ke sath increase hoti jayegi*/
            ans = ans +  pow (2,i);
        }

        n = n/10;
        i++;
    }

   cout << "Answer is " << ans << endl;


    return 0;
}
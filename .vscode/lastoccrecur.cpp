#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
// Recursion
//Last occurance of an character

// int bs(string arr, int s, int x,int& ans, int e) {
//     if (s > e) {
//         return ans;
//         //return -1; 

//     }
//     int mid = s + (e - s) / 2;
//     if (arr[mid] == x) {
//         ans = mid;
       
//      return bs(arr, mid+1, x, ans, e);
//     } else if (arr[mid] > x) {
//         return bs(arr, s, x,ans, mid - 1);
//     } else {
//         return bs(arr, mid + 1, x, ans, e);
//     }
//     // return ans;
// }

// int lastocc(string arr,int i,int& ans,int x){

// //base case
// if(i < 0){
// return -1;
// }

// if(arr[i]==x){
//     ans = i;
//     return ans;
// }


// return lastocc(arr,i - 1,ans,x);
 

//}


int main() {
    string arr = "alllmmmmmnot";
    int i = 0;
    int j = arr.size() - 1;
    int ans = -1;
    int target = 'l';  
    // cout<<bs(arr, i, x,ans, j);

    return 0;
}
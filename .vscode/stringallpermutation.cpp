#include<iostream>
#include<string>
using namespace std;

void print_permutation(string &str, int i){

//base case
if(i>=str.length()){
    cout<<str<<" ";
    return;
}

//swapping 

for(int j = i; j<str.length(); j++){
    //swap
    swap(str[i],str[j]);
    //recursive call
  print_permutation(str,i+1);

  //backtracking 
    swap(str[i],str[j]);

}


}

int main(){

 string str = "abc";

 int i = 0;

 print_permutation(str,i);   


    return 0;
}
#include<iostream>
using namespace std;


int setBit(int j, int k){

   int a,b;

    
    int counta;
    int countb;
    
    
    for(int i = 1; i<=a; i++){
     
    counta = a&1;
      counta ++;}
  
  for(int i = 1; i<=b; i++){
     
    countb = b&1;
      countb ++;}
  
  int setbits =  counta + countb;

  return setbits;
}

int main(){

int j;
cin>>j;
int k;
cin>>k;

cout<<setBit(j,k);

   return 0;
}
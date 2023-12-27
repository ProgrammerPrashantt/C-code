#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<= n - row + 1){
            cout << col << " ";
            col = col + 1;
        }
  int stars = 1;
   while (stars<= (row-1)*2){
    cout<<"* ";
    stars = stars + 1;
  }

  int tcol = n - row + 1;
  while(tcol>=1){
    cout << tcol << " ";
    tcol = tcol - 1;
  }

     row =  row + 1;
     cout << endl;

    }
    return 0;
}
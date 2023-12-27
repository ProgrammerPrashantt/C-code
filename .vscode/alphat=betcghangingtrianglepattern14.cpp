#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>> n;
    int row = 1;
    while(row <= n){
        int col = 1;
        while(col<=row){ 
        char ch = 'A' + row + col - 2;        
            cout << ch << " ";
             ch = ch + 1;
            col = col + 1;

        }
        row = row + 1;
        cout << endl;
    }

    return 0;
}
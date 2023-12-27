#include<iostream>
using namespace std;

int main(){
    int n; 
    cin >> n;
    int row = 0;
    while(row<=n){
        int col = 1;
        char start = 'A';
             start = start + row;

          start = 'A' + row   ;

        while (col<=n){
        
            cout<< start  << " ";
            start = start +1;
            col = col + 1;
        }
        row =  row + 1;
        cout << endl;
    }


    return 0;
}
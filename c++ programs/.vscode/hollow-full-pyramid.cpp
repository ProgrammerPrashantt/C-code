#include<iostream>
using namespace std;
// HOLLOW FULL PYRAMID
int main(){
     int n;
     cin>>n;
     // for row printing
     for (int row = 0;row<n;row++){
        // for intial space  printing
        for (int col = 0; col<n-row-1; col++ ){
            cout<<"  ";
            
        }
        // for  printing stars for more coloumns
        for (int col = 1;col<=2*row+1;col++){
           if (col==1 || col==(2*row)+1 || row == n-1){
            cout<<" *";
           }
            else{
                cout<<"  ";
            }
        }
        //last wala star
        //cout<<" *";
        cout<<endl;
     }
     
    return 0;
}
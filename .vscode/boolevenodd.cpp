#include<iostream>
using namespace std;

// 1-even
// 0 - odd

bool isEven(int a) {

    
    if(a&1){
        return 0;
    }
    else {
        return 1;
    }
}


int main(){

    int num;
    cin >> num;

    if(isEven(num)){
        cout << "num is even"<<endl;
    }
    else {
        cout<< " num is odd "<<endl;
    }
    
    return 0;
}
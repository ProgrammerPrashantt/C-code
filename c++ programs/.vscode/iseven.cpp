#include<iostream>
using namespace std;

int evnod(int n){

    if((n&1)==0){
        cout<<"yes it is even "<<n<<endl;
        return 1;
    }else{
        cout<<"ODD hain siri "<<n<<endl;
        return 0;
    }

}

int main(){
    int n;
    cin>>n;
int ans = evnod(n);
cout<<ans;

    return 0;
}
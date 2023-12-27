#include<iostream>
#include<string>
using namespace std;

bool isIsomorphic(string s, string t){
    int hash[256] = {0};
    bool istcharMapped [256] = {0};
 
 //stores if t[i] char already mapped with s[i].

for(int i = 0; i<s.size(); i++){
    if(hash[s[i]]==0 && istcharMapped [t[i]]==0){
        
        hash [s[i]] = t[i];
       
        istcharMapped[t[i]] = true;
    }
}
for(int i = 0; i<s.size(); i++){
    if(char(hash[s[i]])!=t[i]){
        return false;
    }
}
return true;
}

int main(){

    string a = {"paper"};
    string b = {"title"};
cout<<endl;
    int ans = isIsomorphic(a,b);
    cout<<"ans => "<<ans;
    
    return 0;
}
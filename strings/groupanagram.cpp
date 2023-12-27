#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>

//Group anagram
using namespace std;

vector<vector<string>> groupAnagram(vector<string>&strs){

map<string , vector<string>>mp;

for(auto str : strs){
    string s = str;
    sort(s.begin(),s.end());
    mp[s].push_back(str);
}

vector<vector<string>>ans;

for(auto store = mp.begin(); store!=mp.end(); store++){
    ans.push_back(store->second);
}


  for(int i = 0; i<ans.size();i++){

    for(
        auto it = ans[i].begin();
        it!= ans[i].end(); it++    )

           cout<<*it<<"  ";
           cout<<endl;
    

  }

}


int main(){

    vector<string>strs{
        "nat","tea","ate","eat","tan","bat"
    };

   groupAnagram(strs);

    
    return 0;
}
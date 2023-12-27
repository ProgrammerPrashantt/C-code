#include<iostream>
#include<vector>
using namespace std;

//SORT COLOURS BY IN PLACED-SOLUTION

void sort(vector<int>arr){

int l = 0, m = 0, h = arr.size()-1;

while(m<=h){

if(arr[m] == 0){
    swap(arr[l],arr[m]);
    l++;
    m++;
}else if (arr[m] == 1){
    m++;
}else if (arr[m] == 2){
    swap(arr[m],arr[h]);
    h--;
}

}

for(int i = 0; i<arr.size();i++){
    cout<<arr[i]<<" ";
}


}
int main(){

    vector<int> arr{2,0,0,1,1,2,0};

    sort(arr);
    
    return 0;
}   
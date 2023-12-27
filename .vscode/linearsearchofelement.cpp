#include<iostream>
using namespace std;

int search(int arr[], int size, int key){
int ans;
  for (int i = 0; i<size; i++){

    if (arr[i]==key){
      ans = arr[i]  ;
    }
  }
    return ans;
}

int main(){

    int arr[100];
     int n;
     cout<<"Enter the size of array "<<endl;
    cin>>n;
    cout<<"Enter the elements in the array "<<endl;

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the element to search for "<<endl;
    cin>>key;

    
      int found = search(arr,n,key);
      cout<<endl;
      cout<<"YOUR KEY "<<found<<" IS AVAILABLE IN THE ARRAY "<<endl;
    

    /*bool found = search(arr,n,key);

    if (found){
        cout<<"Hain bhai tumhari key "<<endl;
    }
    else{
        cout<<"Nahi hain bhai "<<endl;
    }
*/
    


    return 0;
}
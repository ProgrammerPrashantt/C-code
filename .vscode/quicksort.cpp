#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){
    //step 1 :- choose pivot element 
 
    int pivotIndex = s;

    int pivotelement = arr[s];

  //step :- find right position for pivot elemnt and place it there 

  int count = 0;
  for(int i =  s+1; i<=e; i++){
    if(arr[i]<=pivotelement){
        count++;
    }
  }

 // JAB MEIN LOOP SE BAAHAR HUA TOH MERE PAAS PIVOT KI RIGHT POSITION KA INDEX READY HAIN

 int rightindex = s+count;

 swap(arr[pivotIndex], arr[rightindex]);
 pivotIndex = rightindex;

 //Left mein chote right mein bade

 int i = s; int j = e;

 while(i<pivotIndex && j>pivotIndex){

 while(arr[i]<=pivotelement){
    i++;
 }
while(arr[j]>pivotelement){
    j--;
}

 

//2 case ho sakte hain -->
//A -> You found the elements to swap
//B -> No need to swap

if(i<pivotIndex && j>pivotIndex){
    swap(arr[i],arr[j]);
}
 }
return pivotIndex;





}




void quickSort(int arr[],int s, int e){
    //base case
    if(s>=e){
        return;
    }

    //Partition logic ,  return pivotIndex

    int p = partition(arr,s,e);

    //Recursive calls

    //Pivot element -> left
   quickSort(arr,s,p-1);

    //Pivot element -> right 
    quickSort(arr,p+1,e);



}



int main(){

 int arr[7] = {3,5,2,1,6,10,7};

 int n = 7;
 int s = 0;
 int e = n-1;
 quickSort(arr,s,e);

 for(int i = 0; i<n;i++){
    cout<<arr[i]<<" ";
 }

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;


void merge(int* arr, int s,int e){

int mid = s+(e-s)/2;
int len1 = mid - s+1;
int len2 = e-mid;
int*left = new int [len1];
int*right = new int[len2];

//copy values

int k = s;
for(int i = 0; i<len1;i++){
    left[i] = arr[k];

    k++;
}
k = mid+1;
for(int i = 0; i<len2; i++){
    right[i]=arr[k];
    k++;
}
//merge logic
int leftIndex = 0;
int rightIndex = 0;
int mainArrayIndex = s;

while(leftIndex < len1 && rightIndex < len2){
    if(left[leftIndex] < right[rightIndex]){
        arr[mainArrayIndex] = left[leftIndex];
        mainArrayIndex++;
        leftIndex++;
    }
    else{
        arr[mainArrayIndex] = right[rightIndex];
        mainArrayIndex++;
         rightIndex++; // Increment rightIndex here
    }
}

        // copy logic for left array

     while(leftIndex<len1){
        arr[mainArrayIndex++] = left[leftIndex++];
     }
        //copy logic for right array

        while(rightIndex<len2){
            arr[mainArrayIndex++] = right[rightIndex++];
        }


}
  



/**************************************************Merge sort**************************************************************/
// void merge(int* arr, int s, int e) {
//     int mid = s + (e - s) / 2;

//     int len1 = mid - s + 1;
//     int len2 = e - mid;

//     int* left = new int[len1];
//     int* right = new int[len2];

//     // copy values
//     int k = s;
//     for (int i = 0; i < len1; i++) {
//         left[i] = arr[k];
//         k++;
//     }
//     k = mid + 1;
//     for (int i = 0; i < len2; i++) {
//         right[i] = arr[k];
//         k++;
//     }

//     // merge logic
//     int leftIndex = 0;
//     int rightIndex = 0;
//     int mainArrayIndex = s;

//     while (leftIndex < len1 && rightIndex < len2) {
//         if (left[leftIndex] < right[rightIndex]) {
//             arr[mainArrayIndex] = left[leftIndex];
//             mainArrayIndex++;
//             leftIndex++;
//         } else {
//             arr[mainArrayIndex] = right[rightIndex];
//             mainArrayIndex++;
//             rightIndex++; // Increment rightIndex here
//         }
//     }

//     // copy remaining elements from left and right arrays
//     while (leftIndex < len1) {
//         arr[mainArrayIndex++] = left[leftIndex++];
//     }

//     while (rightIndex < len2) {
//         arr[mainArrayIndex++] = right[rightIndex++];
//     }

//     // free memory allocated for left and right arrays
//     delete[] left;
//     delete[] right;
// }


void mergesort(int* arr , int s,int e){
    //base case
 //s==e -> single element
 //s>e ->invalid array

 if(s>=e){
    return;
 }
 int mid = s+(e-s)/2;
 //Left part sort kardo recursion bhaiya

 mergesort(arr,s,mid);

 //right part sort kardo recursion bhaiya

 mergesort(arr,mid+1,e);

 //now, merge two sorted arrays

 merge(arr,s,e);


}



int main(){

//    vector<int>arr{7,6,5,4,3,2,1};
int arr[] = {9,30,5,3,2,1};

int size = 6; //arr.size();
    int start = 0;
    int end = size-1;

  mergesort(arr,start,end);
cout<<"final result"<<endl;
    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    

return 0;

}
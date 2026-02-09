#include<iostream>
#include<vector>
using namespace std;


//CONQUER STEP
/**
 * @brief Merges two sorted subarrays of an array into a single sorted subarray.
 * 
 * This function takes two adjacent sorted subarrays within arr (from index si to mid,
 * and from mid+1 to ei) and merges them into a single sorted subarray in-place.
 * Uses a temporary vector to facilitate the merge operation.
 * 
 * @param arr[] The array containing the two sorted subarrays to be merged.
 * @param si    The start index of the first sorted subarray (inclusive).
 * @param mid   The end index of the first sorted subarray (inclusive).
 * @param ei    The end index of the second sorted subarray (inclusive).
 *              The second subarray starts at mid+1.
 * 
 * @return void
 * 
 * @note Time Complexity: O(ei - si + 1), where the function iterates through all elements once.
 * @note Space Complexity: O(ei - si + 1) for the temporary vector.
 * 
 * @example
 * int arr[] = {1, 3, 5, 2, 4, 6};
 * merge(arr, 0, 2, 5); // Merges [1,3,5] and [2,4,6] into [1,2,3,4,5,6]
 */
void merge( int arr[], int si, int mid, int ei){

    vector<int> temp; //temporaray vector 
    int i = si; 
    int j = mid+1;

    while( i <= mid && j <= ei){

        if( arr[i] < arr[j]){

            temp.push_back(arr[i++]);

        }else{

            temp.push_back(arr[j++]);
        }
    }

    while( i <= mid){
         temp.push_back(arr[i++]);

    }

     while( j <= ei){
         temp.push_back(arr[j++]);

    }

    //copying temp vector values to OG array

    for( int idx = si, x=0;idx <= ei; idx++){  //og array x- temporary array iterator idx og array iterator

      arr[idx] = temp[x++];
    }
}

void printArr( int arr[], int n){

    for( int i =0; i<n; i++){

        cout<<arr[i]<<" ";

    }
    cout<< endl;
}

void mergeSort( int arr[], int si, int ei){  //o(NLOGN)

    if( si >= ei ){

        return;
    }

    //divide step
    int mid = si+(ei-si)/2; //to avoid data overflow  calculating mid (si+ei)/2
 
       mergeSort(arr, si, mid); //left half array
       mergeSort(arr, mid+1, ei); //right half array

       merge( arr, si, mid, ei);  //merge function //   CONQUER STEP
}

int main(){

    int arr[6] = {1,2,5,3,2,4};
    int n=6;

    mergeSort(arr, 0, n-1);
    printArr(arr ,n);

    return 0;
}
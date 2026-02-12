#include<iostream>
using namespace std;

//Search in a Roated Sorted Array imp interview question
int search( int arr[], int si, int ei, int tar){

    int mid = si+(ei-si)/2;
    //Base Case
    if( si>ei){

        return -1;
    }

    if(arr[mid] == tar){

        return mid;
    }

    if( arr[si] < arr[mid]){

        if(arr[si] <= tar && tar <= arr[mid]){ //line 1
        
            //leftSearch
            search(arr, si, mid-1, tar);

        }else{

            //rightSearch
            search(arr, mid+1, ei, tar);
        }
    }else{  //l2
        
        if( arr[mid]<= tar && tar <= arr[ei]){

            //rightSearch
            search(arr, mid+1, ei, tar);
        }else{

            search(arr, si, mid+1, tar);
        }

    }
}


int main(){

    int arr[7] = { 4, 5, 6, 7, 0, 1, 2};
    int n=7;

    cout<<"idx is "<<search(arr, 0, n-1, 0);


}
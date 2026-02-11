#include<iostream>
using namespace std;

//quick sort

//partion function

int partion( int arr[], int si, int ei){
    int i = si-1;
    int pivot = arr[ei];

    for( int j=si; j<ei;j++){

         if( arr[j] <= pivot  ){

             i++;
            swap(arr[i],arr[j]);
          }
         
    }
        i++;
          swap(arr[i], arr[ei]);

          return i;

}

 void printArr( int arr[], int n){

    for( int i =0; i<n; i++){

        cout<<arr[i]<<" ";

    }
    cout<< endl;
}



void quickSort(int arr[], int si, int ei){  //O (nlogn)


     if( si >= ei){  //baseCase

        return;
     }                 
    int pivotIdx  = partion(arr,si,ei);
    quickSort(arr, si, pivotIdx-1);  //left have of pivot
    quickSort(arr, pivotIdx+1, ei);   //right half of pivot

}

int main(){


      /* FD */        /*  */

    //MERGE SORT &&  //QUICK SORT

    int arr[6] = {1,2,5,3,2,4};
    int n=6;

    // mergeSort(arr, 0, n-1);
    quickSort(arr, 0, n-1);
    printArr(arr ,n);
 
   
  
    return 0;
}
   

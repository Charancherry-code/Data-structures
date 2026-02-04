#include <iostream>
#include<vector>
using namespace std;

//fctorial recursive function
int factorial( int n){
    
     if( n == 0){ 
        return 1;  //Base case
     }

    return n * factorial(n-1); 
}

//decreasing order of nos recursive function

void print( int n) {
    if( n == 0){ //base case

        return;
    }

    cout<<n<<" "; //kaam
    print(n-1);   //small problem with known solution
}

int Sum( int n){
   if( n == 0){

    return 0;
   }
  return n + Sum(n - 1);
  
}

//nth fibonaci number

int fibonaci(int n){
    
    if( n == 0 || n==1){

        return n;
    }
     
    return fibonaci(n-1)+fibonaci(n-2);
}

//check if an array is sorted or not 

bool isSorted( int arr[] , int n , int i){
    
    if( i == n-1){

        return true; //single element in array so it will be sorted always
    }

    if( arr[i] > arr[i+1]){  

        return false;
    }

    return isSorted( arr, n, i+1);  //move forward if two side elements are sorted

}

//first occurance of a element in a vector?
int firstOccurance(vector<int> arr, int i , int target){

      if(i == arr.size()){

        return -1;
     }

     if( arr[i] == target){

        return i;
     }
     
     return firstOccurance( arr, i+1,target);
  
}


int main(){
   
    // cout<<factorial(2);
    // print(9);
    //  cout<<Sum(5);
    // cout<<fibonaci(6);

    // int arr1[5] = {1,2,3,4,5};      first occurance
    // int arr2[5] = {1,2,3,5,4};

    // cout<<isSorted(arr1, 5, 0)<<endl;
    // cout<<isSorted(arr2, 5, 0);

    vector<int> arr = { 1,4,5,2,3,5,2,3,6,4,6};
    //   cout<<arr.size();
      cout<<firstOccurance(arr,0,5 );

    return 0;
}
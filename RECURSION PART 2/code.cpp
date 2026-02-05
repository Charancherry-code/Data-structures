#include<iostream>
using namespace std;

//Tiling Problem { amazon and google}

int tilingProblem( int n ) {  // 2xn
 
    if( n== 0 || n ==1){  //base case

        return 1;
    }
    //vertical chocie
    int ans1  = tilingProblem(n-1);  // 2xn-1

    //horizontal choice 
    int ans2 = tilingProblem(n-2); // 2xn-2

    return ans1+ans2;

} 

int main(){

     cout<<tilingProblem(2);
    return 0;
}
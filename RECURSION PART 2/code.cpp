/**
 * @file code.cpp
 * @brief Recursion Advanced Techniques - Part 2
 * @details Complex recursive problems including tiling, string deduplication, and friends pairing
 * @author Developer
 * @version 1.0
 * @date 2026-02-10
 * @note Contains solutions to interview questions from Amazon, Google, Goldman Sachs
 */

#include<iostream>
#include<string>
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

//Remove Duplicates From a string

void removeDuplicate( string str, string ans, int i, int map[]){
    
     if( i == str.size() ){  //Base case

        cout<<ans;
        return;
     }

        char ch = str[i] ;                            // stroing indexes of string in ch variable
        int mapIdx = int(ch-'a');                     // type casting  //converting aschai char to indexs in 0 1 2 ...
 
      if(map[mapIdx]){                                //true map[mapIdx] == true

        //dupicate caae 
        removeDuplicate( str, ans,i+1,map);           // already there move forward
      }else{
        // not duplicate case                        // set the value to true
        map[mapIdx] = true;

        removeDuplicate( str, ans+str[i] , i+1, map);          // add the value to the ans str and move forward
        
      }
}

   //Friends Pairing Problem Goldman Sachs

    int paringFriends(int n){
        if( n == 1 || n == 0){ //base case

            return 1;
        }

        //single choice
        int ans1 = paringFriends(n-1); //we have n-1 choices

        //pairing choice
        int ans2 = (n-1) * paringFriends(n-2); // n-1 because we have n-1 choices to pair with the first friend

        return ans1 + ans2;

    }

    //Binary Strings of size n without consecutive 1's Problem {paytm}

 // Prints all binary strings of length n with no consecutive 1s.
// lastPlace = 0 or 1 tells what we put in the previous position.
    
//    void binaryString( int n, int lastPlace, string ans){
//  // If we have filled all positions, print the answer.
//     if( n==0){

//         cout<<ans<<endl;
//         return;
//     }

//     if( lastPlace != 1){

//          // If last was 0, we can place both 0 and 1.
//         binaryString( n-1, 0, ans+'0');
//         binaryString( n-1, 1 , ans+'1');
//     }else{
//       // If last was 1, we can only place 0.
//         binaryString( n-1, 0, ans+'0');
//     }

//    }
    //same problem without lastdigit

      void binaryString( int n, string ans){
   // If we have filled all positions, print the answer.
    if( n==0){

        cout<<ans<<endl;
        return;
    }

    if( ans[ans.size()-1] != '1'){

         // If last was 0, we can place both 0 and 1.
        binaryString( n-1,  ans+'0');
        binaryString( n-1,  ans+'1');
    }else{
      // If last was 1, we can only place 0.
        binaryString( n-1,  ans+'0');
    }

   }

int main(){

    //  cout<<tilingProblem(2);
      
     // Remove Duplicates 
    
    // string str = "aabbcc";
    // string ans = " ";
    // int map[26] = {false};  // setting array of charcter from a  to z to false 

    // removeDuplicate(str, ans, 0, map );

    //Pairing Friends Problem
    // cout<<paringFriends(3);

    string ans = "";
    binaryString(3 , ans);

    return 0;
}
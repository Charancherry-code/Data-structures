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
        int ans1 = paringFriends(n-1);

        //pairing choice
        int ans2 = (n-1) * paringFriends(n-2); // n-1 because we have n-1 choices to pair with the first friend

        return ans1 + ans2;
    }

int main(){

    //  cout<<tilingProblem(2);
      
     // Remove Duplicates 
    
    // string str = "aabbcc";
    // string ans = " ";
    // int map[26] = {false};  // setting array of charcter from a  to z to false 

    // removeDuplicate(str, ans, 0, map );

    //Pairing Friends Problem
    cout<<paringFriends(3);
   
    return 0;
}
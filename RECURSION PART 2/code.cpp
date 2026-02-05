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

int main(){

    //  cout<<tilingProblem(2);
      
     // Remove Duplicates 
    
    string str = "aabbcc";
    string ans = " ";
    int map[26] = {false};  // setting array of charcter from a  to z to false 

    removeDuplicate(str, ans, 0, map );
   
    return 0;
}
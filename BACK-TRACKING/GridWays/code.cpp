#include<iostream>
#include<string>
#include<vector>
using namespace std;

int uniquePaths(int r, int c, int n, int m, string ans){

    if(r==n-1 && c==m-1){
        cout<<ans<<endl;

        return 1;

    }

    if( c>= m || r>=n){

        return 0;
    }

    //right move
    int way1 = uniquePaths(r, c+1, n, m, ans+'R');

    //down side move
     int way2 = uniquePaths(r+1, c, n, m, ans+'D');

     return way1+ way2;
}

int main(){

    int n =3;
    int m =3;
    string ans ="";

    cout<<uniquePaths(0,0, n, m, ans);
     

    return 0;
}
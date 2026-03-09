#include<iostream>
#include<string>
using namespace std;


void printSubsets( string str, string subSet){

    if(str.size() == 0){

        cout<<subSet<<endl;
        return;
    }

    char ch = str[0];
    //yes choice
    printSubsets(str.substr(1, str.size()-1),subSet+ch );

    //no choice
    printSubsets(str.substr(1, str.size()-1),subSet);
}

int main(){

    string str = "abc";
    string subset = " ";

    printSubsets(str,subset);
    return 0;
}
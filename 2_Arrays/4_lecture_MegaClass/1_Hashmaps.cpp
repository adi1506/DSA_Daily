#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int, int> table; //roll_no, desk_no

    //insertion
    table[1] = 53;
    table[2] = 55;
    table[3] = 57;
    table[4] = 61;

    //iteration - method 1 -> for each
    for(auto it: table){
        int key = it.first;
        int value = it.second;
        cout<<key<<" : "<<value<<endl;
    }

    //method 2 -> for loop
//     unordered_map<int, int>:: iterator it;
//     for(it = table.begin(); it != table.end(); it++){
//         int key = it -> first;
//         int value = it -> second;
//         cout<<key<<" : "<<value<<endl;
//     }

    //accessing an element
    if(table.find(2) != table.end()){
        int value = table[1];
        cout<<value<<endl;
    }
    else{
        cout<<"not found";
    }
}
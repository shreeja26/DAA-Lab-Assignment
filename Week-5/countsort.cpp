// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void freq(char arr[], int s){
    int a[26] = {0};
    int mx = 1;
    int c=0;
    //vector<int> v;
    for(int i=0; i<s; i++){
        a[arr[i]-97]++;
    }
    for(int i=0; i<26; i++){
        if(mx < a[i]){
            mx = a[i];
            c = i;
        }
    }
    char ch = char(c+97);
    if(mx > 1){
        cout << ch<< "-" << mx << "\n";
    }
    else{
        cout << "No Duplicates\n";
    }
}

int main(){
    int n;
    //vector<int> res;
    cin >> n;
    while(n--){
        int s;
        cin >> s;
        char arr[s];
        for(int i=0; i<s; i++)
            cin >> arr[i];
        
        freq(arr, s);
        
    }
    return 0;
}

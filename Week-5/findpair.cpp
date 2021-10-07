// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fpair(int a[], int d, int sum){
    unordered_set<int> s;
    int flag = 0, f=0;;
    for(int i=0; i<d; i++){
        if(s.find(sum-a[i]) != s.end()){
            if(flag!=0){
                cout << "," ;
            }
            cout << sum-a[i] << " " << a[i];
            flag = 1;
            f = 1;
        }
        s.insert(a[i]);
    }
    if(f==0){
        cout << "\nNo such pair exist" <<"\n";
    }
}

int main(){
    int n;
    cin >> n;
    while(n--){
        int s;
        cin >> s;
        int arr[s];
        for(int i=0; i<s; i++)
            cin >> arr[i];
        int sum;
        cin >> sum;
        fpair(arr, s, sum);
    }
    return 0;
}

// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void findcommon(int a[], int n, int b[], int m){
    int i=0, j=0;
    while(i<n && j<m){
        if(a[i]==b[j]){
            cout << a[i] <<" ";
            i++;
            j++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else
            i++;
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    int m;
    cin >> m;
    int b[m];
    for(int i=0; i<m; i++)
        cin >> b[i];
    findcommon(a, n, b, m);
    return 0;
}

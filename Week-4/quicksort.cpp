// Online C++ compiler to run C++ program online
// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int swp=0, cmp=0;
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
    swp++;
}

int partition(int v[], int l, int h){
    int pivot = v[h];
    int i = l-1;
    for(int j=l; j<h; j++){
        if(++cmp && v[j] <= pivot){
            i++;
            swap(&v[i], &v[j]);
        }
    }
    swap(&v[i+1], &v[h]);
    return i+1;
}

void quicksort(int v[], int l, int h){
    if(l<h){
        int pi = partition(v, l, h);
        quicksort(v, l, pi-1);
        quicksort(v, pi+1, h);
    }
}


int main() {
    int n, size,a;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> size;
        int v[size];
        for(int j=0; j<size; j++){
            cin >> v[j];
        }
        quicksort(v, 0, size-1);
        for(int z=0;z<size;z++)
            cout << v[z] << " ";
        cout << "\n";
        cout <<"Comparison: "<< cmp << "\n";
        cout << "Swaps: "<<swp << "\n";
        cmp=0,swp=0;
    }
    return 0;
}

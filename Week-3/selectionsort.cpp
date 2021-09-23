#include <iostream>
using namespace std;

void selectionsort(int arr[], int n){
    int j,k,shifts=0,comp=0,x;
    for(int i=0; i<n-1; i++){
        int x = i;
        for(j=i+1; j<n; j++){
            comp++;
            if(arr[j] < arr[x]){
                x=j;
            }
        }
        int temp;
        temp = arr[i];
        arr[i] = arr[x];
        arr[x] = temp;
        shifts++;
    }
    cout << "comparisons: " << comp << "\n";
    cout << "shifts: " << shifts;
}
int main() {
    int t,n;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        int arr[n];
        for(int j=0; j<n; j++){
            cin >> arr[j];
        }
        selectionsort(arr, n);
    }
    return 0;
}

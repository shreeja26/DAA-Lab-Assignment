// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void insertionsort(int arr[], int n){
    int j,shifts=0,comp=0,x,flag=0;
    for(int i=1; i<n; i++){
        j = i-1;
        x = arr[i];
        while(j>-1 && arr[j] > x){
            arr[j+1] = arr[j];
            j--;
            shifts++;
            comp++;
            flag = 1;
        }
        arr[j+1] = x;
        if(j!=-1)
            comp++;
        if(flag==1)
            shifts++;
        flag = 0;
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
        insertionsort(arr, n);
    }

    return 0;
}

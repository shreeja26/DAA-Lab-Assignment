#include <iostream>
#include <vector>
using namespace std;

void binary_search(vector<int> v,int i, int h, int key){
    int mid = (0+h)/2;
    int c=1,flag = 0;
    while(h>=0 && i<v.size()-1){
        if(key > v[mid]){
            i = mid+1;
            mid = (i+h)/2;
            c++;
        }
        else if(key < v[mid]){
            h = mid-1;
            mid = (i+h)/2;
            c++;
        }
        else{
            cout << "\nPresent: " <<  c+1;
            flag = 1;
            break;
        }
    }
    if(flag!=1){
        cout << "\nNot Present: " << c+1;
    }
    flag=0;
}


int main() {
    int n,size,ele,a,key;
    cin >> n;
    vector<vector<int>> v;
    for(int i=0; i<n; i++){
        cin >> size;
        vector<int> v1;
        for(int j=0; j<size; j++){
            cin >> ele;
            v1.push_back(ele);
        }
        v.push_back(v1);
        cin >> key;
        binary_search(v[i], 0, size , key);
    }
    return 0;
}

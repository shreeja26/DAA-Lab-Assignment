// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int binary(vector<int> v, int l, int h, int f){
    if(h<l)
        return -1;
    int mid = l+(h-l)/2;
    if(v[mid] == f){
        return mid;
    }
    else if(v[mid] < f){
        return binary(v, mid+1, h, f);
    }
    else{
        return binary(v, l, mid-1, f);
    }
}

int count(vector<int> v, int s, int f){
    int ind = binary(v, 0, s-1, f);
    if(ind == -1)
        return 0;
    int count = 1;
    int left = ind-1;
    while(left >=0 && v[left] == f){
        count++;
        left--;
    }
    int right = ind+1;
    while(right < s && v[right] == f){
        count++;
        right++;
    }
    return count;
}


int main() {
    int t, s, ele, res=0, f;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> s;
        vector<int> v;
        for(int j=0; j<s; j++){
            cin >> ele;
            v.push_back(ele);
        }
        cin >> f;
        int res = count(v, s, f);
        cout << "Number of times " << f << " appear is: " << res << "\n";
    }

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int BS(vector<int> &v, int key) {
    int l= 0;
    int h=v.size()- 1;

    while (l<= h) {
        int mid = (l+h)/2;
        if (v[mid] == key) return mid;
        if (v[mid] < key) l= mid+1;
        else h= mid-1;
    }
return -1;
}

int main() {
    vector<int> v={2,4,5,6,7,9};
    int key;
    cin >> key;
    int x= BS(v,key);

    if (x==-1) cout << "Element not found" << endl;
    else cout << "Element found at index:" << x << endl;
    return 0;
}
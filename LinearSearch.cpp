#include <iostream>
#include <vector>
using namespace std;

int LS(vector<int> &v, int key) {
    for(int i = 0; i<v.size(); i++) {
        if (v[i] == key) {
            return i;
        }
    }
    return -1; 
}

int main() {
    vector<int> v={1,2,3,4,5};
    int key;
    cin >> key;
    int x=LS(v, key);
    if (x==-1) cout <<  "Element not found." << endl;
    else cout << "Element found at index: " << x << endl;
    return 0;
}
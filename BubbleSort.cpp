#include <iostream>
using namespace std;

void Bsort(int a[], int n) {
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main() {
    int a[]={7,4,2,3,1,6};
    int temp=0;
    int n= sizeof(a)/sizeof(a[0]);

    Bsort(a,n);
    for(int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
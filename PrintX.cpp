#include <iostream>
using namespace std;

void printX(int n) {
    if (n == 2) {
        cout<<"XX"<<endl;
        cout<<"XX"<<endl;
    } else {
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (j == i || j == n-i-1) {
                    cout<<"X";
                } else {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    cout<<endl;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++) {
        printX(arr[i]);
    }
    return 0;
}

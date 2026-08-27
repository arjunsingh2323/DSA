#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int num;
    cin >> num;
    
    int result = -1;
    for(int i = 0; i<n; i++){
        if(arr[i] == num){
            result = i;
            break;
        }
    }
    cout << result;
    return 0;
}
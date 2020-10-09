#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int N;
    cin>>N;
    if(1<= N <= 1000){
    int arr[N];
    for(int i = 0; i < N; i++){
        cin>>arr[i];
    }
    for(int j = N - 1 ; j >= 0; j--){
        cout<<arr[j]<<" "
        ;
    }
}

    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int findMedian(vector<int>& A) {
    int N = A.size();
    int B = (1 << N) - 1; 
    int medianIndex = (B + 1) / 2;
    
    sort(A.begin(), A.end()); 
    
    int currentSum = 0;
    int count = 0;
    
    for (int i = 0; i < N; i++) {
        currentSum += A[i] * ((1 << i) - 1);
        count += (1 << i) - 1;
        if (count >= medianIndex)break;
    }
    
    int median = currentSum - (count - medianIndex) * A[N - 1];
    return median;
}

int main() {
    int size;
    cin>>size;
    
    if(size==1){
        int temp;
        cin>>temp;
        cout<<temp;
        return 0;
    }
    
    vector<int>arr(size);
    
    for(int i = 0 ; i<size ; i++){
        cin>>arr[i];
    }
    
    cout<<findMedian(arr);
	return 0;
}
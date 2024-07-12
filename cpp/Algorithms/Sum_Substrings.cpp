#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    vector<int>arr = {-1,2,4,-3,5,2,-5,2};
    int n=arr.size();
    //O(n^3) karmaşıklığı
/*   
    int best=0;
    for(int i=0 ; i<n ; i++){
        for(int j=i ; j<=n ; j++){
            int sum = 0;
            for(int k=i ; k<=j ; k++){
                sum+=arr[k];
            }
            best = max(best,sum);
        }
    }
    cout<<best;
*/
    //O(n^2) karmaşıklığı
/*
    int best=0;
    for(int i=0 ; i<n ; i++){
        int sum=0;
        for(int j=i ; j<n ; j++){
            sum+=arr[j];
            best = max(best,sum);
        }
    }
    cout<<best;
*/
    //O(n) karmaşıklığı
    int best=0,sum=0;
    for(int i=0 ; i<n ; i++){
        sum = max(arr[i],sum+arr[i]);
        best = max(best,sum);
    }
    return 0;
}

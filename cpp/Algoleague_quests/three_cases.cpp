#include <bits/stdc++.h>

using namespace std;

string divideByTwo(const string& number) {
    string result;
    int remainder = 0;
//15
    for (char digit : number) {
        int currentDigit = digit - '0';
        
        int temp = remainder * 10 + currentDigit;
        int quotient = temp / 2;
        remainder = temp % 2;

        result.push_back(quotient + '0');
        
    }
    if (!result.empty() && number[0] == '1') {
        result = result.substr(1);
    }
    vector<int> arr;
    arr.
    return result;
}

int main() {
    string target;
    cin>>target;
    cout<<divideByTwo(target);
	return 0;
}

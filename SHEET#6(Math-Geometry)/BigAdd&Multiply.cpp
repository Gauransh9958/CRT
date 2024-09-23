#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string addLargeNumbers(string num1, string num2) {
    string result = "";
    int carry = 0;
    int len1 = num1.size();
    int len2 = num2.size();
    
    if (len1 < len2) {
        num1 = string(len2 - len1, '0') + num1;
    } else if (len2 < len1) {
        num2 = string(len1 - len2, '0') + num2;
    }

    for (int i = num1.size() - 1; i >= 0; --i) {
        int sum = (num1[i] - '0') + (num2[i] - '0') + carry;
        carry = sum / 10;
        result.push_back(sum % 10 + '0');
    }

    if (carry > 0) {
        result.push_back(carry + '0');
    }

    reverse(result.begin(), result.end());
    return result;
}

string multiplyBy9999(string num) {
    string result = "";
    int carry = 0;
    int multiplier = 9999;
    
    for (int i = num.size() - 1; i >= 0; --i) {
        int product = (num[i] - '0') * multiplier + carry;
        carry = product / 10;
        result.push_back(product % 10 + '0');
    }

    while (carry > 0) {
        result.push_back(carry % 10 + '0');
        carry /= 10;
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string N;
    cin >> N;

    string resultAdd = addLargeNumbers(N, "9999");

    string resultMultiply = multiplyBy9999(N);

    cout << resultAdd << endl;
    cout << resultMultiply << endl;

    return 0;
}

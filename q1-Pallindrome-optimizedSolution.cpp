#include <iostream>
using namespace std;

bool isPalindrome(const string& word) {
    int left = 0, right = word.size() - 1;
    while (left < right) {
        if (word[left] != word[right])
            return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string word;
        cin >> word;
        cout << (isPalindrome(word) ? "True" : "False") << endl;
    }
    return 0;
}
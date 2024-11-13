#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int result = 0;
    string temp = "";
    bool subtract = false;

    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == '+' || s[i] == '-') {
            if (!temp.empty()) {
                int num = stoi(temp);
                result += subtract ? -num : num;
                temp = "";
            }
            if (i < s.size() && s[i] == '-') {
                subtract = true;
            }
        } else {
            temp += s[i];
        }
    }

    cout << result << endl;
    return 0;
}

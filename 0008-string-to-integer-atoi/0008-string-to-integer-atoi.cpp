class Solution {
public:
    int myAtoi(string s) {
        int a = 0;
        int b = 1;
        int i = 0;

        // 1️⃣ skip leading spaces
        while (i < s.size() && s[i] == ' ') {
            i++;
        }

        // 2️⃣ sign check
        if (i < s.size() && (s[i] == '-' || s[i] == '+')) {
            if (s[i] == '-') b = -1;
            i++;
        }

        // 3️⃣ digits
        while (i < s.size() && isdigit(s[i])) {
            int d = s[i] - '0';

            // overflow check
            if (a > INT_MAX / 10 || (a == INT_MAX / 10 && d > 7)) {
                return (b == 1) ? INT_MAX : INT_MIN;
            }

            a = a * 10 + d;
            i++;
        }

        return a * b;
    }
};

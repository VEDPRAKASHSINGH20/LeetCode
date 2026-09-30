class Solution {
public:
    string hex(unsigned int n) {
        string s;
        if (n == 0) return "";

        s = hex(n / 16);

        int rem = n % 16;

        if (rem < 10) {
            s += char('0' + rem);
        }
        else {
            s += char('a' - 10 + rem);
        }

        return s;
    }

    string toHex(int num) {
        if (num == 0) return "0";

        return hex((unsigned int)num);
    }
};
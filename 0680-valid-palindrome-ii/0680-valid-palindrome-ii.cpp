// class Solution {
// public:
//     bool validPalindrome(string s) {
//         int c=1,l=0,r=s.size()-1;
//         while(l<r){
//             if(s[l]==s[r]){
//                 l++;
//                 r--;
//             }else {
//                 if(s[l+1]==s[r]  && c<=1){
//                     l++;
//                     c++;
//                     continue;
//                 }else if(s[l]==s[r-1] &&c<=1){
//                     c++;
//                     r--;
//                     continue;
//                 }
//                 else if(l+1==r) return true;
//                 else return false;
//             }
//         }
//         return true;
        
//     }
// };

class Solution {
public:
    bool check(string &s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int l = 0, r = s.size() - 1;

        while (l < r) {
            if (s[l] == s[r]) {
                l++;
                r--;
            } else {
                return check(s, l + 1, r) || check(s, l, r - 1);
            }
        }

        return true;
    }
};
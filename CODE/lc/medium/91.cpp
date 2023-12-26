// class Solution {
//     bool isValid(int code, int len){
//         if(len==1) return code>=1 && code<=26;
//         return code>=10&&code<=26;
//     }

// public:
// int numDecodings(string s) {
//         int n = s.length();
        
//         if (n == 0) return 0;
        
        
//         int first = 1;
//         int second = (isValid(s[0] - '0', 1)) ? 1 : 0;
        
//         for (int i = 2; i <= n; i++) {
//             int ans=0;
//             if (isValid(s[i - 1] - '0', 1)) {
//                 ans += second;
//             }
            
//             if (isValid((s[i - 2] - '0') * 10 + s[i - 1] - '0', 2)) {
//                 ans += first;
//             }
//             first=second;
//             second=ans;
//         }
        
//         return second;
//     }

// };
// // 
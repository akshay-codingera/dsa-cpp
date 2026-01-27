// // The API isBadVersion is defined for you.
// // bool isBadVersion(int version);


// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     int firstBadVersion(int n) {
//         int left = 1, right = n;
        
//         while (left < right) {
//             int mid = left + (right - left) / 2;
            
//           //  if (isBadVersion(mid)) {
//                 right = mid;      // mid might be the first bad
//          //   } else {
//                 left = mid + 1;   // first bad must be after mid
//             }
//         }
        
//        // return left;
//     }
// };

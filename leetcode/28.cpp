class Solution {
public:
    int strStr(string haystack, string needle) {
        int sizeNeedle=needle.length();
        int ans=-1;

        if(haystack.find(needle)!=string::npos){
            ans=haystack.find(needle);
        }

        return ans;
    }
};




// class Solution {
// public:
//     int strStr(string h, string n) {
//         int sizeNeedle=n.length();
        
//           vector<int> ve;

// // if(h.find(n,0)==string::npos){
// //     return -1;
// // }
// int found=h.find(n);
// if(found!=string::npos){
//     return found;
// }

//         return -1;
//     }
// };
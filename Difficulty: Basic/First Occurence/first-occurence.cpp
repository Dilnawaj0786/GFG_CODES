class Solution {
  public:
    int firstOccurence(string& haystack, string& needle) {
        // code here
        int idx = -1;
        int i = 0, j = 0;
        while (j < (int)haystack.size() && i < (int)needle.size()) {
            if (haystack[j] == needle[i]) {
                if (i == 0) idx = j;
                    i++;
                    j++;
                }else {
                    if (i > 0) {
                        j = idx + 1;  
                    }else{
                        j++;
                    }
                i = 0;
                idx = -1;
            }
        }
        return (i >= (int)needle.size()) ? idx : -1;
        
    }
};
// Accepted: 12/23/20
// Runtime: 4ms (faster than 94.44%)

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string baseprefix;
        string commonprefix = "";
        if (strs.size() == 1) { // if size of vector is only one, return the string in it
            commonprefix = strs[0];
        }
        for (unsigned int i = 0; i < strs.size(); i++) {
            if (i == 0) { // get the base prefix i.e. the first string in the vector
                baseprefix = strs[i];
            }
            else if (i == 1) { // check the second string in the vector for a common prefix
                for (int j = 0; j < baseprefix.length(); j++) {
                    if (strs[i][j] == baseprefix[j]) {
                        commonprefix = commonprefix + baseprefix[j];
                    }
                    else {
                        break;
                    }
                }
            }
            else { // if second and first string have a common prefix, check the rest of the strings
                for (int k = 0; k < commonprefix.length(); k++) {
                    if (strs[i][k] == commonprefix[k]) {
                        continue;
                    }
                    else if (strs[i][k] != commonprefix[k]) {
                        if (k > 0) { // if a letter is different but it is not the first letter
                            commonprefix.erase(k);
                        }
                        else { // if the first letter is different from the common prefix
                            commonprefix = "";
                            break;
                        }
                    }
                }
            }
        }
        return commonprefix;
    }
};
// Accepted: 12/23/20

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        string word;
        vector<string> fizzbuzz;
        for (int i = 1; i <= n; i++) {
            word = "";
            if (i % 3 == 0) {
                word = word + "Fizz";
            }
            if (i % 5 == 0) {
                word = word + "Buzz";
            }
            if (word == "") {
                word = to_string(i);
            }
            fizzbuzz.push_back(word);
        }
        return fizzbuzz;
    }
};
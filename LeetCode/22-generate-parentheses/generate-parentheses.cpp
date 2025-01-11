#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string current = "";
        generate(result, current, 0, 0, n);  // Start with an empty string and 0 open/close counts
        return result;
    }

private:
    // Helper function to generate the parentheses
    void generate(vector<string>& res, string current, int openCount, int closeCount, int n) {
        // Base case: if the current string length is 2 * n, it's a valid combination
        if (current.length() == 2 * n) {
            res.push_back(current);
            return;
        }

        // Add an opening parenthesis if we haven't added all of them
        if (openCount < n) {
            generate(res, current + "(", openCount + 1, closeCount, n);
        }

        // Add a closing parenthesis if there are more openings than closings
        if (closeCount < openCount) {
            generate(res, current + ")", openCount, closeCount + 1, n);
        }
    }
};
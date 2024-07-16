class Solution {
public:
    bool wordPattern(std::string pattern, std::string s) {
        std::unordered_map<char, std::string> mp;
        std::unordered_map<std::string, char> mp_reverse;
        std::stringstream ss(s);
        std::string word;

        int i = 0;
        for (char c : pattern) {
            if (!(ss >> word)) {  // Extract word from stream
                return false;  // If we run out of words before pattern ends
            }

            // Check if the pattern character has already been mapped to a word
            if (mp.find(c) != mp.end()) {
                if (mp[c] != word) {
                    return false;
                }
            } else {
                // Check if the word has already been mapped to a different pattern character
                if (mp_reverse.find(word) != mp_reverse.end() && mp_reverse[word] != c) {
                    return false;
                }
                mp[c] = word;
                mp_reverse[word] = c;
            }
            i++;
        }

        // Check if there are extra words left in the stream
        if (ss >> word) {
            return false;  // There are more words than pattern characters
        }

        return true;
    }
};
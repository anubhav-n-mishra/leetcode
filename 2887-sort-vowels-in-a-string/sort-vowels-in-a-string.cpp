class Solution {
public:
    string sortVowels(string s) {
        string vowels = "aeiouAEIOU";
        unordered_set<char> vowelSet(vowels.begin(), vowels.end());

        vector<char> vowelList;
        for (char c : s) {
            if (vowelSet.count(c)) vowelList.push_back(c);
        }

        sort(vowelList.begin(), vowelList.end());
        int idx = 0;
        for (char &c : s) {
            if (vowelSet.count(c)) {
                c = vowelList[idx++];
            }
        }

        return s;
    }
};

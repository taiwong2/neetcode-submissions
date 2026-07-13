class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s_map;
        unordered_map<char, int> t_map;

        if (s.size() != t.size()) {
            return false;
        }

        for (int n = 0; n < s.size(); n++) {
            s_map[s[n]] += 1;
            t_map[t[n]] += 1;
        }

        for (int n = 0; n < s.size(); n++) {
            if (s_map[s[n]] != t_map[s[n]]) {
                return false;
            }
            
        }


        return true;


    }
};

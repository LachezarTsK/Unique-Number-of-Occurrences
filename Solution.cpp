
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

class Solution {
    
public:
    bool uniqueOccurrences(const vector<int>& input) const {
        unordered_map<int, int> valueToFrequency;
        for (const auto& n : input) {
            ++valueToFrequency[n];
        }
        
        unordered_set<int> uniqueFrequencies;
        for (const auto& [value, frequency] : valueToFrequency) {
            //C++20: uniqueFrequencies.contains(frequency), done the old way for compatibility
            if (uniqueFrequencies.find(frequency) != uniqueFrequencies.end()) {
                return false;
            }
            uniqueFrequencies.insert(frequency);
        }
        return true;
    }
};

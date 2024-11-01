#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;


//ex - 1 -> 2,  2 -> 3, 3 -> 4, 4->1  all counts are unique

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> frequencyMap;
        
        // Step 1: Count occurrences of each element
        for(int num : arr) {
            frequencyMap[num]++;
        }

        unordered_set<int> occurrences;
        
        // Step 2: Check if each occurrence count is unique
        for (auto& entry : frequencyMap) {
            if (occurrences.count(entry.second)) { 
                return false;
            }
            occurrences.insert(entry.second);
        }
        return true;


        for(auto& entry : frequencyMap) {
            if(occurrences.count(entry.second)) {
                return false;
            }
            occurrences.insert(entry.second);
        }
        
        return true;


    for (auto& entry : frequencyMap) {
    if (occurrences.find(entry.second) != occurrences.end()) {
        return false;
    }
    occurrences.insert(entry.second);
    }
    return true;

    }
};

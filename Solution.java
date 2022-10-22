
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

public class Solution {

    public boolean uniqueOccurrences(int[] input) {
        Map<Integer, Integer> valueToFrequency = new HashMap<>();
        for (int n : input) {
            valueToFrequency.put(n, valueToFrequency.getOrDefault(n, 0) + 1);
        }
        
        Set<Integer> uniqueFrequencies = new HashSet<>();
        for (int n : valueToFrequency.values()) {
            if (!uniqueFrequencies.add(n)) {
                return false;
            }
        }
        return true;
    }
}

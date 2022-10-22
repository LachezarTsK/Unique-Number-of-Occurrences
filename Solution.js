
/**
 * @param {number[]} input
 * @return {boolean}
 */
var uniqueOccurrences = function (input) {
    const valueToFrequency = new Map();
    for (let n of input) {
        if (!valueToFrequency.has(n)) {
            valueToFrequency.set(n, 0);
        }
        valueToFrequency.set(n, valueToFrequency.get(n) + 1);
    }
    
    const uniqueFrequencies = new Set();
    for (let n of valueToFrequency.values()) {
        if (uniqueFrequencies.has(n)) {
            return false;
        }
        uniqueFrequencies.add(n);
    }
    return true;
};

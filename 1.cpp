#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<int> findMinLengthSubsequence(const std::vector<int>& arr) {
    std::unordered_set<int> uniqueSet;
    std::vector<int> result;
    int startIndex = 0;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (uniqueSet.count(arr[i])) {
            if (result.size() == 0 || arr[i] != result.back())
                startIndex = i + 1;
            continue;
        }
        
        uniqueSet.insert(arr[i]);
        result.push_back(arr[i]);
    }
    
    if (startIndex >= arr.size())
        return {-1};
    
    for (int i = startIndex; i < arr.size(); ++i) {
        if (!uniqueSet.count(arr[i]))
            result.push_back(arr[i]);
    }
    
    return result;
}

int main() {
    std::vector<int> arr = {1, 1,1,3};
    std::vector<int> result = findMinLengthSubsequence(arr);

    std::cout << "Result: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

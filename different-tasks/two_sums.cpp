#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> hashMap;
    for (size_t i = 0; i < nums.size(); ++i) {
        hashMap[nums[i]] = i;
    }
    for (int i = 0; i < nums.size(); i++){
        int value = target - nums[i];
        if(hashMap.find(value) != hashMap.end() && hashMap[value] != i){
            return {i, hashMap[value]};
        }
    }
    return{};
}

int main() {
    vector<int> nums {2,7,11,10};
    int target = 9;
    twoSum(nums, target);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vectorint& nums, int val) {
       vectorintiterator it;
       it=nums.begin();
    for(int i =0 ; inums.size();i++)
    {
        if(nums[i]==val){
          nums.erase(it);
          it--;
          i--;
        }
        it++;
    }
    return nums.size();
    }
};

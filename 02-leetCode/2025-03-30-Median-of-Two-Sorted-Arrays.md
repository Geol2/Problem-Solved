# Median of Two Sorted Arrays

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

## Example 1:
Input: `nums1 = [1,3], nums2 = [2]`
Output: `2.00000`
Explanation: `merged array = [1,2,3] and median is 2.`

## Example 2:
Input: `nums1 = [1,2], nums2 = [3,4]`
Output: `2.50000`
Explanation: `merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.`

```java
class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        double answer = 0;
        List<Integer> merged = new ArrayList<>();
        
        for(int num : nums1) {
            merged.add(num);
        }
        for(int num : nums2) {
            merged.add(num);
        }
        Collections.sort(merged);
        
        int size = merged.size();
        double median;
        if(size % 2 == 1) {
            answer = merged.get(size / 2);
        } else if(size % 2 == 0) {
            answer = (merged.get(size / 2 - 1) + merged.get(size / 2)) / 2.0;
        }
        System.out.println(answer);
        return answer;
    }
}
```
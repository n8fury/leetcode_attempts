## Solution Explanation


## V1
```
int sum = 0;
for(int i = 0;i<nums.size();i++){
    sum = sum + nums[i];
    nums[i] = sum;
}
return sum;
```

in this solution the logic i used was a `counter`.
a variable named `sum` was used to store the value of current index  `[i]` and next index `[i+1]` 
Then the sum of the value of those indexes are stored in the current index.
The loop ran through the size of array. After exiting the loop, the array was returned.

## V2

```
for(int i = 1;i<nums.size();i++){
        nums[i] += nums[i-1];
}
        return nums;
```
in this solution the loop started at index 1. Because we added current index with previous index.
if the loop had started at index 0, it would provide `runtime error`.

## Complexities
Time Complexity of  V1 and V2 is O(n), as we have iterated through the loop once.
Space Complexity of V1 and V2 is O(1), as no extra space was used.


## Learning Outcome

learned the use of `size()` function.
it returns the size of the list container or the number of elements in the list container


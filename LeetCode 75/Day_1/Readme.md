# Solution Explanation

```
int sum = 0;
for(int i = 0;i<nums.size();i++){
    sum = sum + nums[i];
    nums[i] = sum;
}
return sum;
```

in the V1 the logic i used was a `counter`.
a variable named `sum` was used to store the value of current index  `[i]` and next index `[i+1]` 
Then the sum of the value of those indexes are stored in the current index.
The loop ran through the size of array. After exiting the loop, the array was returned 


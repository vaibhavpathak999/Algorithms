impl Solution {
    pub fn max_sub_array(nums: Vec<i32>) -> i32 {
        // implementing the max function
        fn max(num1: i32, num2: i32) -> i32 {
            if num1 > num2 { return num1 }
            else { return num2 }
        }
        // using kadane's algorithm (O(n) complexity)
        let mut maxSum = -2147483648;
        let mut currentSum = 0;
        for num in nums {
            currentSum = max(num, currentSum + num);
            maxSum = max(currentSum, maxSum);
        }
        return maxSum;
    }


impl Solution {
    pub fn get_concatenation(nums: Vec<i32>) -> Vec<i32> {
        let mut ans: Vec<i32> = Vec::new();
        ans = nums.clone();
        for element in nums {
            ans.push(element);
        }
        return ans;
    }
}

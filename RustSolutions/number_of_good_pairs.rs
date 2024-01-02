impl Solution {
    pub fn num_identical_pairs(nums: Vec<i32>) -> i32 {
        if nums.len() == 1 { return 0 }
        let mut pointer_1 = 0;
        let mut pointer_2 = pointer_1 + 1;
        let mut pair_counter = 0;
        while pointer_1 < nums.len() {
            while pointer_2 < nums.len() {
                if nums[pointer_1] == nums[pointer_2] {
                    pair_counter += 1;
                }
                pointer_2 += 1;
            }
            pointer_1 += 1;
            pointer_2 = pointer_1 + 1;
        }
        return pair_counter;
    }


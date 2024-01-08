impl Solution {
    pub fn count_pairs(nums: Vec<i32>, target: i32) -> i32 {
        if nums.len() == 1 { return 0 }
        let mut pair_counter: i32 = 0;
        let mut pointer_1 = 0;
        let mut pointer_2 = pointer_1 + 1;
        while pointer_1 < nums.len() {
            pointer_2 = pointer_1 + 1;
            while pointer_2 < nums.len() {
                if nums[pointer_1] + nums[pointer_2] < target {
                    pair_counter += 1;
                }
                pointer_2 += 1;
            }
            pointer_1 += 1;
            pointer_2 += pointer_1 + 1;
        }
        return pair_counter;
    }
}

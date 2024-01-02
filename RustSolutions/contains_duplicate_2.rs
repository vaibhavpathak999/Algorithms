impl Solution {
    pub fn contains_nearby_duplicate(nums: Vec<i32>, k: i32) -> bool {
        if nums.len() < k as usize { return false }
        if k == 0 { return true }
        let mut pointer_1: usize = 0;
        let mut pointer_2: usize = k as usize;
        while pointer_2 < nums.len() {
            if nums[pointer_1] == nums[pointer_2] { return true }
            pointer_1 += 1;
            pointer_2 += 1;
        }
        return false;
    }
}

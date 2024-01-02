impl Solution {
    pub fn single_number(nums: Vec<i32>) -> i32 {
        if nums.len() == 1 { return nums[0] }
        let mut sample = nums.clone();
        sample.sort();
        let mut pointer_1 = 0;
        let mut pointer_2 = 1;
        while pointer_1 < sample.len() && pointer_2 < sample.len() {
            if sample[pointer_1] != sample[pointer_2] {
                return sample[pointer_1];
            } else {
                pointer_1 += 2;
                pointer_2 += 2;
            }
        }
        return sample[sample.len() - 1];
    }
}

impl Solution {
    pub fn move_zeroes(nums: &mut Vec<i32>) {
        let mut pointer = 0;
        let mut non_zero_count = 0;
        let mut touch_non_zero = 0;
        for element in nums.clone() {
            if element != 0 {
                non_zero_count += 1;
            }
        }
        while pointer < nums.len() && touch_non_zero != non_zero_count {
            if nums[pointer] == 0 {
                nums.remove(pointer);
                nums.push(0);
            } else {
                pointer += 1;
                touch_non_zero += 1;
            }
        }
    }
}

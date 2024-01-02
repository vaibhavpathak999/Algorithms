impl Solution {
    pub fn shuffle(nums: Vec<i32>, n: i32) -> Vec<i32> {
        let mut solution: Vec<i32> = Vec::new();
        let mut pointer_1: usize = 0;
        let mut pointer_2: usize = n.clone() as usize;
        while pointer_2 < 2 * n as usize {
            solution.push(nums[pointer_1]);
            solution.push(nums[pointer_2]);
            pointer_1 += 1;
            pointer_2 += 1;
        }
        return solution;
    }
}

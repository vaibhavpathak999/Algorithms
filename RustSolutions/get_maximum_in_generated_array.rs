impl Solution {
    pub fn get_maximum_generated(n: i32) -> i32 {
        fn max(vector: Vec<i32>) -> i32 {
            let mut max_num = 0;
            for element in vector { if element > max_num { max_num = element } }
            return max_num;
        }
        if n == 0 { return 0 }
        if n == 1 { return 1 }
        let mut nums: Vec<i32> = Vec::new();
        let mut i = 0;
        nums.push(0);
        nums.push(1);
        for _ in 0..=n { nums.push(0) }
        while 2 * i + 1 <= n {
            nums[2 * i as usize] = nums[i as usize];
            nums[2 * i as usize + 1] = nums[i as usize] + nums[i as usize + 1];
            i += 1;
        } 
        return max(nums);
    }
}

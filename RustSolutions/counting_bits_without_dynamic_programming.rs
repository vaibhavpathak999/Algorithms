impl Solution {
    pub fn count_bits(n: i32) -> Vec<i32> {
        let mut solution: Vec<i32> = Vec::new();
        let mut cache: Vec<i32> = Vec::new();
        for i in 0..=n {
            cache.push(0);
        }
        for i in 0..=n {
            let mut count: i32 = 0;
            let mut num = i.clone();
            while num != 0 {
                if num % 2 == 1 {
                    count += 1;
                } 
                num = num / 2;
            }
            solution.push(count);
        }
        return solution;
    }
}

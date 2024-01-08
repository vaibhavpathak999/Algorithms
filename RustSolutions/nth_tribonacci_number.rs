impl Solution {
    pub fn tribonacci(n: i32) -> i32 {
        fn recursion(num: i32, cache: &mut Vec<i32>) -> i32 {
            if num == 0 { return 0 }
            if num == 1 { return 1 }
            if num == 2 { return 1 }
            if cache[num as usize] != 0 { return cache[num as usize] }
            let mut number = recursion(num - 1, cache) + recursion(num - 2, cache) + recursion(num - 3, cache); 
            cache[num as usize] = number;
            return number;
        }
        let mut cache: Vec<i32> = Vec::new();
        for _ in 0..=n { cache.push(0) }
        return recursion(n, &mut cache)
    }
}

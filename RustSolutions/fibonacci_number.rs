impl Solution {
    pub fn fib(n: i32) -> i32 {
        if n == 0 { return 0 }
        fn fibonacci(number: i32, memory: &mut Vec<i32>) -> i32 {
            if number <= 1 { return 1 }
            else {
                if memory[number as usize] == 0 {
                    memory[number as usize] = fibonacci(number - 1, memory) + fibonacci(number - 2, memory);
                }
            }
            return memory[number as usize]
        }
        let mut memory: Vec<i32> = Vec::new();
        for _ in 0..32 { memory.push(0) }
        return fibonacci(n - 1, &mut memory);
    }
}

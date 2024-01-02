impl Solution {
    pub fn smallest_even_multiple(n: i32) -> i32 {
        if n % 2 == 1 { return n * 2; }
        return n;
    }
}

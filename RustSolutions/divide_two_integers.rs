impl Solution {
    pub fn divide(dividend: i32, divisor: i32) -> i32 {
        if dividend == -2147483648 && divisor == -1 { return 2147483647 }
        if dividend == -2147483648 && divisor == 1 { return -2147483648 }
        return { (dividend / divisor) as i32 }
    }
}

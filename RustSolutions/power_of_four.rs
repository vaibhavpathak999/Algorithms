impl Solution {
    pub fn is_power_of_four(n: i32) -> bool {
        if n == 0 { return false }
        let log_base_4: f64 = f64::ln(n.clone() as f64) / f64::ln(4.0);
        log_base_4.ceil() == log_base_4.floor()
    }


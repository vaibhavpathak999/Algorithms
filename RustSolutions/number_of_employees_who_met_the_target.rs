impl Solution {
    pub fn number_of_employees_who_met_target(hours: Vec<i32>, target: i32) -> i32 {
        let mut achievers: i32 = 0;
        for hour in hours {
            if hour >= target {
                achievers += 1;
            } 
        }
        return achievers;
    }
}

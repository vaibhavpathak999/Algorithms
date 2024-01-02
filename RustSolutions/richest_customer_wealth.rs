impl Solution {
    pub fn maximum_wealth(accounts: Vec<Vec<i32>>) -> i32 {
        let mut max_wealth: i32 = 0;
        for balance in accounts {
            let mut wealth: i32 = 0;
            for cash in balance {
                wealth += cash;
            }
            if wealth > max_wealth {
                max_wealth = wealth;
            }
        }
        return max_wealth;
    }
}

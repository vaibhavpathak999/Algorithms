impl Solution {
    pub fn climb_stairs(n: i32) -> i32 {
        let mut memo = std::collections::HashMap::new();
        fn climber(n: i32, memo: &mut std::collections::HashMap<i32, i32>) -> i32 {
            match n {
                1 => { return 1 },
                2 => { return 2 },
                _ => {
                    match memo.get(&n) {
                        Some(value) => return *value,
                        None => {
                            let value = climber(n.clone() - 1, memo) + climber(n.clone() - 2, memo);
                            memo.insert(n, value);
                            return value;
                        }
                    }
                }
            }
        }
        return climber(n, &mut memo);
    }
}

use std::collections::HashMap;
impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut solution: Vec<i32> = Vec::new();
        let mut hash_table: HashMap<i32, usize> = HashMap::new();
        // load vector into the hashmap
        for pointer in 0..nums.len() {
            hash_table.insert(nums[pointer], pointer);
        }
        // for every terms -> find the key for sub
        for pointer in 0..nums.len() {
            let find_element = target - nums[pointer];
            match hash_table.get(&find_element) {
                Some(value) => {
                    if *value != pointer {
                        solution.push(pointer as i32);
                        solution.push(*value as i32);
                        break;
                    } else {
                        continue;
                    }
                }
                None => continue,
            }
        }
        // return the value for the key
        return solution;
    }
}

impl Solution {
    pub fn rotate_string(s: String, goal: String) -> bool {
        fn rotate_once(string: String) -> String {
            let mut pointer: usize = 1;
            let mut output: String = String::new();
            let string_vec: Vec<char> = string.chars().collect();
            while pointer < string.len() {
                output.push(string_vec[pointer]);
                pointer += 1;
            }
            output.push(string_vec[0]);
            return output;
        }

        let mut compare_clone = s.clone();
        for _ in 0..compare_clone.len() {
            if compare_clone == goal { return true }
            else { compare_clone = rotate_once(compare_clone) }
        }
        return false;
    }
}

impl Solution {
    pub fn reverse_string(s: &mut Vec<char>) {
        for i in 0..s.len() {
            s.insert(s.len() - 1 - i, s[0]);
            s.remove(0);
        }
        s.insert(0, s[s.len() - 1]);
        s.remove(s.len() - 1);
    }
}

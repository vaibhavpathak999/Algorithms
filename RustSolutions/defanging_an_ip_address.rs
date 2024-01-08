impl Solution {
    pub fn defang_i_paddr(address: String) -> String {
        let mut ip_str: String = String::new();
        for element in address.chars() {
            if element == '.' {
                ip_str.push('[');
                ip_str.push('.');
                ip_str.push(']');
            } else {
                ip_str.push(element);
            }
        }        
        return ip_str;
    }
}

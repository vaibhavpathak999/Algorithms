impl Solution {
    pub fn is_palindrome(s: String) -> bool {
        // initialised new vector for chars 
        let mut packed_chars: Vec<char> = Vec::new();

        // String modification to only allow alphabets
        let new_string: String = s.chars().filter(|c| c.is_alphanumeric()).collect();

        // moving all chars to a packed_chars vector
        for k in new_string.chars() {
            // k is a char data type 
            packed_chars.push(k.to_lowercase().next().unwrap());
        }

        // Handling a edge case 
        if packed_chars.len() == 0 {
            return true;
        }

        // defining counters
        let mut counter_1 = 0;
        let mut counter_2 = packed_chars.len() - 1;

        // Running a compare loop
        while (counter_1 < counter_2) {
            if packed_chars[counter_1 as usize] != packed_chars[counter_2 as usize] {

                // return false when the terms are different
                return false;
            }
            counter_1 = counter_1 + 1;
            counter_2 = counter_2 - 1;
        }

        // if all comparison goes well, return true
        return true;

    }
}

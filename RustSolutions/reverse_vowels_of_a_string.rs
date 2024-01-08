impl Solution {
    pub fn reverse_vowels(s: String) -> String {
        let mut vowel_collector: Vec<char> = Vec::new();
        let mut input_vector: Vec<char> = s.chars().collect();
        for element in input_vector.clone() {
            if element == 'a' || element == 'e' || element == 'i' || element == 'o' || element == 'u' || element == 'A' || element == 'E' || element == 'I' || element == 'O' || element == 'U' {
                vowel_collector.push(element);
            } 
        }
        let mut inverted_vowels: Vec<char> = Vec::new();
        for element in vowel_collector {
            inverted_vowels.insert(0, element);
        }
        let mut vowel_index = 0;
        for i in 0..input_vector.clone().len() {
            let element = input_vector[i];
            if element == 'a' || element == 'e' || element == 'i' || element == 'o' || element == 'u' || element == 'A' || element == 'E' || element == 'I' || element == 'O' || element == 'U' {
                input_vector.insert(i, inverted_vowels[vowel_index]);
                input_vector.remove(i + 1);
                vowel_index += 1;    
            }
        }
        let mut output: String = String::from("");
        for character in input_vector {
            output.push(character);
        }
        return output;
    }
}

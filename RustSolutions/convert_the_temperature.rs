impl Solution {
    pub fn convert_temperature(celsius: f64) -> Vec<f64> {
        let mut solution: Vec<f64> = Vec::new();
        solution.push(celsius.clone() + 273.15);
        solution.push(celsius.clone() * 1.80 + 32.00);
        return solution;
    }
}

impl Solution {
    pub fn generate(num_rows: i32) -> Vec<Vec<i32>> {
        let mut solution: Vec<Vec<i32>> = Vec::new();

        // Pushing initial head to the solution vector
        let mut head: Vec<i32> = Vec::new();
        head.push(1);
        solution.push(head);

        // Handling the edge case
        if num_rows == 1 {
            return solution;                // [[1]]
        }

        // Pushing second layer to the solution vector
        let mut layer_2: Vec<i32> = Vec::new();
        layer_2.push(1);
        layer_2.push(1);
        solution.push(layer_2);

        // Handling the edge case 
        if num_rows == 2 {
            return solution;                // [[1], [1, 1]]
        }

        // The Loop begins
        let mut current_depth: usize = 2;

        // While loop for the construction
        while current_depth != num_rows as usize {
            let mut buffer: Vec<i32> = Vec::new();

            // Construction of the Solution
            buffer.push(1);                 // append 1 by defination 
            let mut i: usize = 1;
            while (i < solution[current_depth - 1].len()) {
                buffer.push(solution[current_depth - 1][i] + solution[current_depth - 1][i - 1]);
                i += 1;                     // Move the pointer
            } 
            buffer.push(1);

            // pushing the buffer to the solution vector
            solution.push(buffer);
            current_depth += 1;
        }
        return solution;
    }
}

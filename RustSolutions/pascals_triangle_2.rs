impl Solution {
    pub fn get_row(row_index: i32) -> Vec<i32> {
        let mut pascal_triangle: Vec<Vec<i32>> = Vec::new();

        // Pushing initial head to the solution vector
        let mut head: Vec<i32> = Vec::new();
        head.push(1);
        pascal_triangle.push(head);

        // Handling the edge case
        if row_index == 0 {
            let solution_vec = pascal_triangle[0].clone();
            return solution_vec;                // [[1]]
        }

        // Pushing second layer to the solution vector
        let mut layer_2: Vec<i32> = Vec::new();
        layer_2.push(1);
        layer_2.push(1);
        pascal_triangle.push(layer_2);

        // Handling the edge case 
        if row_index == 1 {
            return pascal_triangle[1].clone();                // [[1], [1, 1]]
        }

        // The Loop begins
        let mut current_depth: usize = 2;

        // While loop for the construction
        while current_depth != (row_index + 1) as usize {
            let mut buffer: Vec<i32> = Vec::new();

            // Construction of the Solution
            buffer.push(1);                 // append 1 by defination 
            let mut i: usize = 1;
            while (i < pascal_triangle[current_depth - 1].len()) {
                buffer.push(pascal_triangle[current_depth - 1][i] + pascal_triangle[current_depth - 1][i - 1]);
                i += 1;                     // Move the pointer
            } 
            buffer.push(1);

            // pushing the buffer to the solution vector
            pascal_triangle.push(buffer);
            current_depth += 1;
        }
        return pascal_triangle[row_index as usize].clone();
    }
}

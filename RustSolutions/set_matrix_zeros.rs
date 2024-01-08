impl Solution {
    pub fn set_zeroes(matrix: &mut Vec<Vec<i32>>) {
        let n = matrix.len();
        let m = matrix[0].len();
        fn horizontal_zero(array: &mut Vec<Vec<i32>>, m: usize, k: usize) {
            for i in 0..m {
                array[k][i] = 0;
            }
        }
        fn vertical_zero(array: &mut Vec<Vec<i32>>, n: usize, k: usize) {
            for i in 0..n {
                array[i][k] = 0;
            }
        }
        let mut pairs: Vec<Vec<usize>> = Vec::new();
        for y in 0..n {
            for x in 0..m {
                if matrix[y][x] == 0 {
                    let mut pair: Vec<usize> = Vec::new();
                    pair.push(y);
                    pair.push(x);
                    pairs.push(pair);
                } 
            } 
        }
        for pair in pairs {
            horizontal_zero(matrix, m, pair[0]);
            vertical_zero(matrix, n, pair[1]);
        }
    }
}

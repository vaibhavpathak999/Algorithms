impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut solution: Vec<i32> = Vec::new();
        if nums.len() == 2 {
          solution.push(0);
          solution.push(1);
          return solution;
        }

        for (i, val1) in nums.iter().enumerate() {
          for (j, val2) in nums.iter().enumerate() {
            if i != j {
              if val1 + val2 == target {
                solution.push(i as i32);
                solution.push(j as i32);
                return solution;
              }
            }
          }
        }
        solution.push(-1);
        solution.push(-1);
        return solution;
    }
}

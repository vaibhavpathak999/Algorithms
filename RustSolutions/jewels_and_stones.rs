impl Solution {
    pub fn num_jewels_in_stones(jewels: String, stones: String) -> i32 {
        let mut stone_count: i32 = 0;
        for jewel_type in jewels.chars() {
            for stone in stones.chars() {
                if stone == jewel_type { stone_count += 1 }
            }
        }
        return stone_count;
    }
}

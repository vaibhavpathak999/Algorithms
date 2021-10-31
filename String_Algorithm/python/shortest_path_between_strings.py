"""
find the length of the shortest way to
get from string A to string B
where the only operations allowed are:
(i) inserting a char
(ii) deleting a char
(iii) replacing a char
"""

def char_replace(word_a, word_b):
    n = len(word_a)
    m = len(word_b)
    dp = [[0]*(m+1) for _ in range(n+1)]
    for i in range(n+1):
        dp[i][0] = i
    for j in range(m+1):
        dp[0][j] = j
    for i in range(n+1):
        for j in range(m+1):
            if word[i-1] == word_b[j-1]:
                dp[i][j] = dp[i-1][j-1]
            else:
                dp[i][j] = min(dp[i-1][j-1], dp[i-1][j], dp[i][j-1])
    return dp[n][m]

Array: [1,2,3]

1. Subarray:
- Contiguous
- Order preserved
- Total = n*(n+1) / 2
- [1], [2], [3], [1,2], [2,3], [1,2,3]

2. Subsequence:
- Not neccesarily contiguous
- Order preserved
- Total = 2ⁿ
- [], [1], [2], [3], [1,2], [2,3], [1,3], [1,2,3]

3. Subset:
- Not neccesarily contiguous
- Not neccesarily in order
- Total = 2ⁿ
- [], [1], [2], [3], 
[1,2] = [2,1], 
[2,3] = [3,2], 
[1,3] = [3,1], 
[1,2,3]
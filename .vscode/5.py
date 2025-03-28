def longest_unique_substring(s):
    start = 0
    max_length = 0
    char_index = {}
    
    for i, char in enumerate(s):
        if char in char_index and char_index[char] >= start:
            start = char_index[char] + 1
        char_index[char] = i
        max_length = max(max_length, i - start + 1)
    
    return max_length

# Example
string = "abcabcbb"
print(f"Longest substring length: {longest_unique_substring(string)}")
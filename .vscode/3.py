file_name = "example.txt"

try:
    with open(file_name, 'r') as file:
        lines = file.readlines()
        num_lines = len(lines)
        num_words = sum(len(line.split()) for line in lines)
        num_chars = sum(len(line) for line in lines)

    print(f"Lines: {num_lines}, Words: {num_words}, Characters: {num_chars}")
except FileNotFoundError:
    print("Error: File not found.")
except Exception as e:
    print(f"An error occurred: {e}")

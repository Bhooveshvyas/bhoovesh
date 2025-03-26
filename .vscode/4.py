file1 = "file1.txt"
file2 = "file2.txt"
merged_file = "merged.txt"

try:
    with open(file1, 'r') as f1, open(file2, 'r') as f2, open(merged_file, 'w') as mf:
        mf.write(f1.read())
        mf.write("\n")
        mf.write(f2.read())
    print(f"Files {file1} and {file2} merged into {merged_file}.")
except FileNotFoundError:
    print("Error: One of the source files not found.")
except Exception as e:
    print(f"An error occurred: {e}")

file_name = "example.txt"  # Replace with your file name

try:
    with open(file_name, 'r') as file:
        contents = file.read()
        print("File Contents:")
        print(contents)
except FileNotFoundError:
    print("Error: File not found.")
except Exception as e:
    print(f"An error occurred: {e}")

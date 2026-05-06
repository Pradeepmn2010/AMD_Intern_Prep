import os

if os.path.exists("hw_check.c"):
    print("Source found. Telling the Guard to compile...")
    # This command asks the Kernel to turn your C text into a Program
    os.system("gcc hw_check.c -o hw_check")
    print("Build Successful!")
    print("Running the check:")
    os.system("./hw_check")
else:
    print("Error: hw_check.c is missing!")

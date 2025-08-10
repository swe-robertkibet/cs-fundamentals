s = input("Do you agree? ").strip().lower()

if s in ["y", "yes"]:
    print("Agreed")
elif s in ["n", "no"]:
    print("Not Agreed")

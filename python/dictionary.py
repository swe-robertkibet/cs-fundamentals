words = set()

def check(word):
    return word.lower() in words

def load(dictionary):
    with open(dictionary, "r") as file:
        for line in file:
            words.add(line.strip().lower())  # store lowercase words
    return True

def size():
    return len(words)

def unload():
    words.clear()  # free memory
    return True

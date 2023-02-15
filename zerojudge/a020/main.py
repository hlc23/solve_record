from math import floor 

table = {
    'A': 10,
    'B': 11,
    'C': 12,
    'D': 13,
    'E': 14,
    'F': 15,
    'G': 16,
    'H': 17,
    'I': 34,
    'J': 18,
    'K': 19,
    'L': 20,
    'M': 21,
    'N': 22,
    'O': 35,
    'P': 23,
    'Q': 24,
    'R': 25,
    'S': 26,
    'T': 27,
    'U': 28,
    'V': 29,
    'W': 32,
    'X': 30,
    'Y': 31,
    'Z': 33
}

text = input()
n1 = table[text[0]]
n2 = n1%10*9+floor(n1/10)
n3 = n2 + sum([int(text[i])*(9-i) for i in range(1, 9)]) + int(text[9])
print("real" if n3%10 == 0 else "fake")

word = input()

upper = sum(1 for c in word if c.isupper())
lower = sum(1 for c in word if c.islower())

if upper > lower:
    print(word.upper())
else:
    print(word.lower())


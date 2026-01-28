"""#name = input("What is your name: ").strip().title()
#print("Hello", name + "!")
sentence = "the quick brown fox jumps over the lazy dog."
start = sentence.find("brown fox")
word = input("Tell me a word from the sentence: ")
new_word = input("Give me a mew word: ")
length = len(word)
print(sentence[start:start+length])

print(sentence.replace(word, new_word))"""

numb_one = int(input("Tell me a number: "))
numb_two = int(input("Tell me a number: "))
print(numb_one*numb_two)
# For a given sentence, return the average word length.
# Note: Remember to remove punctuation first.

sentence1 = "The secret code they created made no sense, even to them."

def solution(sentence):
    for p in "!?',;.":
        sentence = sentence.replace(p, '')
    words = sentence.split()
    return round(sum(len(word) for word in words)/len(words),2)

print(solution(sentence1))

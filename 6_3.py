def first(word):
    return word[0]

def last(word):
    return word[-1]

def middle(word):
    return word[1:-1]


def is_palindrome(word):
    if word == " " or word == "":
        return "Enter a word please"

    if len(word) <= 1:
        return True

    if word[0] == word[-1]:
        return is_palindrome(middle(word))

    return False






print(is_palindrome('malayalam'))

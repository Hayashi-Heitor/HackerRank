def swap_case(s):
    swapped = []
    for i in s:
        if i.isupper():
            swapped.append(i.lower())
        elif i.islower():
            swapped.append(i.upper())
        else:
            swapped.append(i)
    return  ''.join(swapped)

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)

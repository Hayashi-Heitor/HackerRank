#!/bin/python3

if __name__ == '__main__':
    n = int(input())
    if n % 2 == 0 and ((n > 1 and n < 6) or n > 20):
        print("Not Weird")
    elif n % 2 == 0 and (n > 5 and n < 21):
        print("Weird")
    else:
        print("Weird");

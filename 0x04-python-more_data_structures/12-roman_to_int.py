#!/usr/bin/python3
def roman_to_int(roman_string):
    if (type(roman_string) != str) or roman_string is None:
        return 0
    c, t = 0, 0
    dict = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    for i in roman_string:
        if t >= int(dict.get(i)) and t != 0:
            c += int(dict.get(i))
        elif t < int(dict.get(i)) and t != 0:
            c = c + ((int(dict.get(i)) - t) - t)
        elif t == 0:
            c += int(dict.get(i))
        t = int(dict.get(i))
    return (c)

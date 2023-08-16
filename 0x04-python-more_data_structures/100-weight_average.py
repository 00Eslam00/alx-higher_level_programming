#!/usr/bin/python3
def weight_average(my_list=[]):
    num, div = 0, 0
    if my_list:
        for i in my_list:
            num += i[0] * i[1]
            div += i[1]
        average = num / div
        return average
    else:
        return 0

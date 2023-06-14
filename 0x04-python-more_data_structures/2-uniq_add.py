#!/usr/bin/python3
def uniq_add(my_list=[]):
    num = 0
    new_list = sorted(my_list)
    for i in range(len(new_list)):
        if i == len(new_list) - 1 or new_list[i] != new_list[i + 1]:
            num += new_list[i]
    return (num)

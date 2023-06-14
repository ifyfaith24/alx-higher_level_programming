#!/usr/bin/python3
def simple_delete(a_dictionary, key=""):
    c = False
    for i in a_dictionary:
        if i == key:
            c = True
    if c:
        del a_dictionary[key]
    return(a_dictionary)

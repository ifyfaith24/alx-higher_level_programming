#!/usr/bin/python3
if __name__ == '__main__':
    import sys
    total = 0
    argument_list = sys.argv[1:]
    for argument in argument_list:
       total += int(argument)
    print("{}".format(total))

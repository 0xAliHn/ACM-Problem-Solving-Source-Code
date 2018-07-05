# Given an array of distinct elements and a number x, find if there is a pair with product equal to x.
# O(n)

def isProduct(arr, x):
    length = len(arr)
    if length == 0 and x == 0:
        return True
    s = set()
    for i in range(length):
        print(i)
        if (x % arr[i] == 0):
            if (x/arr[i] in s):
                return True
            else:
                s.add(arr[i])

    return False



arr = [10, 20, 9, 40]
x = 400
print(isProduct(arr, x))
# Binary Search Algorithms;
# Binary Search is an algorithm used for searching for an element in an array
# the array must be a sorted one
# if the element existed, the function will return the index of stuff in the collection, else will return None

lis1 = [1, 2, 4, 5, 6, 7, 8, 9]


def binarySearch(lis, item):
    low = 0
    high = len(lis)-1
    while low <= high:
        mid = (low+high)/2
        mid = int(mid)
        guess = lis[mid]
        if guess == item:
            return mid
        if guess > item:
            high = mid-1
        else:
            low = mid+1
    return None


print(binarySearch(lis1, 5))

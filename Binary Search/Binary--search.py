# Binary Search Algorithms;
#  Binary Search is an algorithm used for sarching for an element in an array
# if the element existed, function will retuen the index of element in the array, else will return None

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

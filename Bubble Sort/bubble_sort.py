#  Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements
#  if they are in the wrong order.
#


#  Bubble Sort Function

def bubble_sort(list):
    n = len(list)
    swapped = False

    for i in range(n-1):

        for j in range(n-1-i):

            #   Swap if the element found is greater
            # than the next element
            if list[j] > list[j+1]:
                swapped = True
                (list[j], list[j+1]) = (list[j+1], list[j])

        if not swapped:
            # if we haven't needed to make a single swap, we
            # can just exit the main loop.
            return


if __name__ == "__main__":

    arr = [64, 34, 25, 12, 22, 11, 90]
    bubble_sort(arr)
    print(arr)

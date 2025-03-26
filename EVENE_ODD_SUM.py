def sum(lst):
    evensum=0
    oddsum=0
    for i in lst:
        if i%2==1:
            oddsum = oddsum + i
        else:
            evensum = evensum + i
    return evensum,oddsum

lst = [1, 2, 3, 4, 5, 61]
even_sum, odd_sum = sum(lst)
print(even_sum)
print(odd_sum)

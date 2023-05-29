# print('BYE WORLD')
# a=10
# b=20
# c=a+b
# print(c)
# for i in range(5):
#     ...
# i=1
# for i in range(6):
#     print(i)
#     i=i+1
# import math
# print(math.gcd(-5, -15))


# def gcd(x, y):
#     if y == 0:
#         return x
#     else:
#         return gcd(y, x % y)


# a = int(input("ENTER FIRST VALUE "))
# b = int(input("ENETR SECOND VALUE "))
# num = gcd(a, b)
# print("GCD OF TWO NUMBER IS ", num)


# i = 1
# while i <= 3:
#     j = 1
#     while j <= 3:
#         k = 1
#         while k <= 3:
#            # if i == j or j == k or k == i:
#             if i == j == k:
#                 k=k+1
#                 continue
#             else:
#                 print(i, j, k)
#             k = k+1
#         j = j+1
#     i = i+1


# list1=[2,3][4,5]
# list2=[5,8,1][6,7,3]
# list3=[0,0,0][0,0,0]
# for i in range(len(list1)):
#     for j in range(len(list2[0])):
#         for k in range(len(list2)):
#             list3[i][j]=list3[i][j] + list1[i][k] * list2[k][j]
#             for i in range(len(list3)):
#                 print()
# List = [10, 20, 14]
# print("\nList of numbers: ")
# print(List)

# List = ["Geeks", "For", "Geeks"]
# print("\nList Items: ")
# print(List[0])
# print(List[2])


def selsort(L):
    suffixstart = 0
    while suffixstart != len(L):
        for i in range(suffixstart, len(L)):
            if (L[i] < L[suffixstart]):
                L[suffixstart], L[i] = L[i], L[suffixstart]
        suffixstart += 1
L = [6, 1, 9, 4]
selsort(L)
print(L)

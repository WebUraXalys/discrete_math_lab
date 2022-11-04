# Сортування Бульбашкою
def bubble_sort(array):
   for i in range(N-1):
      for j in range(N-i-1):
         if b[j] > b[j+1]:
               b[j], b[j+1] = b[j+1], b[j]

# Сортування вибору
def sel_sort(array):
    for i in range(len(array) - 1):
        m = i
        j = i + 1
        while j < len(array):
            if array[j] < array[m]:
                m = j
            j = j + 1
        array[i], array[m] = array[m], array[i]

#сортування вставкою
def inser_sort(array, i):
    for i in range(len(array)):
        cursor = array[i]
        pos = i

        while pos > 0 and array[pos - 1] > cursor:
            array[pos] = array[pos - 1]
            pos = pos - 1
        array[pos] = cursor


N = 11
b = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0]
print("Задаємо масив")
print(b)
print("1 - Бульбашка, 2 - Вибірки, 3 - Виставки ")
a = int(input("Введіть яким типом хоете сортувати масив: "))
if a == 1:
    bubble_sort(b)
    print(b)
elif a == 2:
    sel_sort(b)
    print(b)
else:
    print(b)
    inser_sort(b)
    print(b)

























# print("Задаємо масив")
# print(b)
# sel_sort(b)
# print("Сортування методом Бульбашки")
# print(b)
# print("Сортування методом Вибірки")
# bubble_sort(b)
# print(b)
# print("Сортування методом Виставки")
# inser_sort(b)
# print(b)


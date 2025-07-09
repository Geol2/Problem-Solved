isbn = input()

total = 0
starIndex = 0
for number in range(13):
  if isbn[number] == '*':
    starIndex = int(number)
    continue
  if number % 2 == 0:
    total += int(isbn[number])
  else:
    total += int(isbn[number]) * 3

for unknown in range(10):
  if starIndex % 2 == 0:
    if (total + unknown) % 10 == 0:
      print(unknown)
      break
  else:
    if (total + unknown * 3) % 10 == 0:
      print(unknown)
      break
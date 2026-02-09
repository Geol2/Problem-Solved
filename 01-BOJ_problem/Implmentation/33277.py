N, M = map(int, input().split())


percent = M / N * 100
result = 1440 * (percent / 100)

time = int(result / 60)
minute = int(result % 60)

print("{:02d}:{:02d}".format(time, minute))
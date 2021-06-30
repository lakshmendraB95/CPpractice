n = int(input())
s = [ord(x) - ord('0') for x in input()]
cnt = [s.count(x) for x in [0, 1, 2]]
def forw(x):
	for i in range(n):
		if (cnt[x] < n // 3 and s[i] > x and cnt[s[i]] > n // 3):
			cnt[x] += 1
			cnt[s[i]] -= 1
			s[i] = x
def back(x):
	for i in range(n - 1, -1, -1):
		if (cnt[x] < n // 3 and s[i] < x and cnt[s[i]] > n // 3):
			cnt[x] += 1
			cnt[s[i]] -= 1
			s[i] = x
forw(0)
forw(1)
back(2)
back(1)
print(''.join([str(x) for x in s]))
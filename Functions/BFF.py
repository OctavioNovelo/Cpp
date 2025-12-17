D = 9
N = 5
K = 3

answer = 0

if D < K: return 0
else:
    answer += 1
    D -= N

left = right = K
while D:
    answer += 1
    D -= (right - left + 1)
    left -= 1
    if left < 0: left = 0
    right += 1
    if right > N: right = N - 1
return answer

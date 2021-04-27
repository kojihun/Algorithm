# N개의 데이터의 합을 계산하는 프로그램 예제
array = [3, 5, 1, 2, 4] # 5개의 데이터 (N = 5)
sum = 0 # 합계를 저장할 변수

for i in array:
  sum += i

print(sum)

# 수행시간은 데이터의 개수 N에 비례함으로 시간복잡도는 O(N)

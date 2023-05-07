# 합병 정렬

### 문제 정의
- [X] 문제이름: 합병 정렬
- [X] 문제설명: 배열을 반으로 나누어 정렬하고 정렬된 두 배열을 합병하여 전체 배열을 정렬하는 알고리즘
- [X] 문제예시: data에 랜덤한 수를 저장 후 MergeSort함수를 이용해 정렬

### 알고리즘
1. k <- (left + right) / 2
2. MergeSort(arr, left, k)
3. MergeSort(arr, k+1, right)
4. crr[ci] <- arr[ai] + arr[bi]
5. arr[ai++] <- crr[ci++]

### C코드 설계
1. 자료 구조 정의
- 배열 맨 왼쪽 인덱스: left – 정수
- 배열 맨 오른쪽 인덱스: right - 정수
- 숫자 목록 : int arr[] - 정수 배열
2. 함수 정의
- 기능: 합병 정렬을 수행하는 함수
- 프로토타입: void MergeSort(int arr[], int left, int right)

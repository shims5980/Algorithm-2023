# 선택 문제

### 문데 정의
- [X] 문제이름: 선택 문제
- [X] 문제설명: 정렬된 배열 중 k번째 작은 수를 찾는다.
- [X] 문제예시: 퀵정렬을 이용해 정렬된 배열이 저장된 result파일에서 k번째 작은 수를 찾는다.

### 알고리즘
- [X] 명칭: 선택 문제(Selecion)
- [X] 입력: 정렬된 배열, k
- [X] 출력: k번째 작은 수
1 ~ 5. p <- dividePivot
6. s <- (p-1) - left + 1
7. IF (k<=s) Selection(arr, left, p-1, k)
8. ELSE IF (k = s+1) return arr[p]
9. ELSE Selection(arr, p+1, right, k)

### C코드 설계
1. 자료 구조 정의
- 배열 맨 왼쪽 인덱스: left – 정수
- 배열 맨 오른쪽 인덱스: right - 정수
- 숫자 목록 : int arr[] - 정수 배열
- k번째 작은 수: k - 정수

2. 함수 정의
- 기능: 정렬된 배열 중 k번째 작은 수를 리턴하는 함수
- 프로토타입: void QuickSort(int arr[], int left, int right)
- 기능: 배열 범위 안에 피봇을 선정하고 피봇을 기준으로 배열 정렬하는 함수
- 프로토타입: int Selection(int arr[], int left, int right, int k)

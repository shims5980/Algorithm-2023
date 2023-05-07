# 퀵정렬

### 문제 정의
- [X] 문제이름: 퀵정렬
- [X] 문제설명: 정렬되지 않은 배열을 피봇을 이용하여 정렬 시킨다.
- [X] 문제예시: data파일에 정렬되지 않은 정수들이 있고 이를 퀵 정렬을 이용해 result파일에 정렬된 배열을 저장한다.

### 알고리즘
- [X] 명칭: 퀵정렬 (QuickSort)
- [X] 입력: 정렬되지않은 배열
- [X] 출력: 정렬된 배열
1. PI <- rand() % (right - left + 1) + left; 
2. SWAP(arr[left], arr[PI])
3. INT I <- left+1
   INT j <- right
   WHILE(arr[i] <= pivot) I++
   WHILE(arr[j] > pivot) j--
4. IF(i<j) swap(arr[i], arr[j])
5. swap(arr[left], arr[j])
   PI <- j
6. QuickSort(arr, left, p-1)
7. QuickSort(arr, right, p+1)

### C 코드 설계
1. 자료 구조 정의
- 배열 맨 왼쪽 인덱스: left – 정수
- 배열 맨 오른쪽 인덱스: right - 정수
- 숫자 목록 : int arr[] - 정수 배열

2. 함수 정의
- 기능: 피봇을 기준으로 정렬된 배열과 피봇을 이용하여 재귀호출해 정렬하는 함수
- 프로토타입: void QuickSort(int arr[], int left, int right)
- 기능: 배열 범위 안에 피봇을 선정하고 피봇을 기준으로 배열 정렬하는 함수
- 프로토타입: int dividePivot(int arr[], int left, int right)

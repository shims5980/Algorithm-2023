# 최근접 점의 쌍의 거리

### 문제 정의
- [X] 문제이름 : 최근접 점의 쌍 찾기
- [X] 문제설명 : 2차원 평면상의 n개의 점이 입력으로 주어질 때, 거리가 가장 가까운 한 쌍의 점을 찾는 문제

### 알고리즘
- [X] 명칭 : ClosestPair(S, int n)
- [X] 입력 : 배열 S와 점의 개수 n
- [X] 출력 : S에 있는 점들 중 최근접 점의 쌍의 거리
1. IF (점의 개수 <= 3) RETURN (2~3개 점들 사이의 최근접 점의 쌍)
2. INT mid <- (n / 2)
3. dl <- ClosestPair(points, mid)
   dr <- ClosestPair(points + mid, n – mid)
4. d <- fmin(dl, dr);
5. RETURN min(d, dist)

### C 코드 설계
1. 자료 구조 정의
- 텍스트 파일 : (x, y)점의 집합
- 구조체 Points points[100] : double x와 double y를 멤버 변수로 가지는 구조체 배열
- double min_dist : 최근접 점의 쌍의 거리

2. 함수 정의
- 기능 : n개의 점을 x좌표를 기준삼아 오름차순으로 정렬해주는 함수
- 프로토타입 : int CompareX(const void* a, const void* b) 

- 기능 : 파일에 저장되어있는 점의 x, y좌표를 읽어와 구조체 배열 Points points[100]에 저장하고 ClosestPair(Points* points, int n)을 실행하는 함수
- 프로토타입 : int testClosetPair_File()

- 기능 : 구조체 배열 points를 사용해 n개의 점들 중 최단거리를 반환해주는 함수
- 프로토타입 : double ClosestPair(Points* points, int n)

- 기능 : 점 p1과 점 p2의 거리를 구해 반환해주는 함수
- 프로토타입 : double Distance(Points p1, Points p2)

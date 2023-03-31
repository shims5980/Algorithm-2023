#include <stdio.h>

int main() {
    int cards[] = { 45, 20, 60, 35, 10, 90, 85, 75, 25 };
    int target = 85;
    int i, index = -1;

    // 배열을 처음부터 끝까지 탐색하며 target 값이 있는 인덱스를 찾음
    for (i = 0; i < 9; i++) {
        if (cards[i] == target) {
            index = i;
            break;
        }
    }

    // target 값이 있는 인덱스를 출력
    if (index == -1) {
        printf("찾는 값이 85가 배열에 없습니다.");
    }
    else {
        printf("85는 %d번째에 있습니다", index);
    }

    return 0;
}

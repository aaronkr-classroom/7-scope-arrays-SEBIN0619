//array.c
#include <stdio.h>
#include "array_funcs.h"

#define NUM_STUDENTS 5

void printf_grades(int grades[]) {
	for (int i = 0; i < NUM_STUDENTS; i++) {
		printf("Studrnt %d: %d\n", i + 1, grades[i]);
	}
}

	int main(void) {
		int std_grades[NUM_STUDENTS] = { 85, 92, 78, 90, 88 };

		printf("Initial grades:\n");
		printf_grades(std_grades);
		
		//사용자가 성적 바꾸기
		int idx1, idx2;
		printf("\nSwap two grades (1-%d:\n", NUM_STUDENTS);
		scanf_s("%d %d", &idx1, &idx2);

		//0-기반 인덱스 때문에 감소하기
		idx1--;
		idx2--;

		// 맞는 인덱스 확인하고 성적 바꾸기
		if (idx1 >= 0 && idx1 < NUM_STUDENTS &&
			idx2 >= 0 && idx2 < NUM_STUDENTS) {
			swap_grades(std_grades, idx1, idx2);






		}
			return 0;
		}
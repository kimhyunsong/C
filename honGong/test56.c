/* 
 구조체: 다양한 자료형을 하나로 묶을 수 있는 복합 자료형 (사용자 정의 자료형)
 main 함수 이전 선언시 프로그램 전체(전역)에서 사용 가능
 함수 내부 선언시 함수 내부에서만 사용 가능
 각 멤버의 공간이 메모리에 연속으로 할당됨
 구조체는 변수 선언 전에 꼭 구조체 선언을 해야함
 바이트 얼라인먼트 : 가장 큰 멤버의 타입을 기준으로 패딩 바이트를 넣어 정렬한다.

 */


#pragma pack(1) // 바이트 얼라인먼트를 1로 설정하면 패딩 바이트가 필요 없음
#include <stdio.h>
struct student {			// 구조체 선언
	int num;
	double grade;
};

int test57(void) {
	struct student s1;
	s1.num = 2;
	s1.grade = 2.7;

	printf("학번 : %d\n", s1.num);
	printf("학점 : %.1lf\n", s1.grade);
	return 0;
}
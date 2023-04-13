#include <stdio.h>

#define MAX 30

int main(void)

{   printf("%d \n", 2021049002);
    printf("박지수");
	int i, j; // 루프를 수행하기 위한 변수 선언
	int n = 0; // 행렬의 행 변수 값
	int m = 0; // 행렬의 열 변수 값
	int vMatrixA[MAX][MAX] = { 0, };
	int vMatrixB[MAX][MAX] = { 0, };
	int vResult[MAX][MAX] = { 0, };

	// 행렬의 행과 열 개수 입력 (행렬의 덧셈은 두 행렬이 같아야 하기 때문에 한 번만 입력한다.)
	printf(" 덧셈하려는 행렬의 크기를 입력하세요\n");
	printf(" 행렬의 행 크기 입력: ");
	scanf("%d", &n);
	printf(" 행렬의 열 크기 입력: ");
	scanf("%d", &m);

	// 첫 번째 행렬 값 입력(A 행렬)
	printf("\n");
	printf(" 첫번째 행렬의 값을 입력하세요.\n");

	// 입력받은 값을 A 행렬 배열에 넣는다.
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf(" %d X %d 행렬의 값을 입력하세요.: ", i + 1, j + 1);
			scanf("%d", &vMatrixA[i][j]);
		}
	}

	// 두 번째 행렬 값 입력(B 행렬)
	printf("\n");
	printf(" 두번째 행렬의 값을 입력하세요. \n");

	// 입력받은 값을 B 행렬 배열에 삽입한다.
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf(" %d X %d 행렬의 값을 입력하세요: ", i + 1, j + 1);
			scanf("%d", &vMatrixB[i][j]);
		}
	}

	// 행렬 A + B 연산
	// 행렬의 덧셈은 두 행렬의 크기가 같아야 하므로 행렬 크기에 변화가 없다. (입력 받은 n과 m의 크기 즉 n x m 형태의 행렬 결과 값)

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			vResult[i][j] += vMatrixA[i][j] + vMatrixB[i][j];
		}
	}

	// A + B의 결과 값을 출력한다.
	printf("\n");
	printf(" 두 행렬 덧셈의 결과값\n");

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%4d", vResult[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}

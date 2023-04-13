#include <stdio.h>
#define MAX 30
int main(void)
{	int i, j, k; // 루프를 수행하기 위한 변수 선언
	int An = 0; // A행렬의 행 변수 값
	int Am = 0; // A행렬의 열 변수 값
	int Bn = 0; // B행렬의 행 변수 값
	int Bm = 0; // B행렬의 열 변수 값
	int vMatrixA[MAX][MAX] = { 0, };
	int vMatrixB[MAX][MAX] = { 0, };
	int vResult[MAX][MAX] = { 0, };
	// 첫 번째 행렬을 입력한다(A 행렬)
	printf(" 첫번째 행렬을 입력하세요\n");
	printf(" 첫번째 행렬의 행 크기 입력: ");
	scanf("%d", &An);
	printf(" 첫번째 행렬의 열 크기 입력: ");
	scanf("%d", &Am);
	// 첫 번째 행렬 값 입력(A 행렬)
	printf("\n");
	printf(" 첫번째 행렬의 값을 입력하세요.\n");
	// 입력받은 값을 A 행렬 배열에 넣는다.
	for (i = 0; i < An; i++)
	{
		for (j = 0; j < Am; j++)
		{
			printf(" %d X %d 행렬의 값을 입력하세요.: ", i + 1, j + 1);
			scanf("%d", &vMatrixA[i][j]);
		}
	}
	// 두 번째 행렬 값 입력(B 행렬)
	printf("\n");
	printf(" 두번째 행렬을 입력하세요. \n");
	printf(" 두번째 행렬의 행 크기 입력: ");
	scanf("%d", &Bn);
	printf(" 두번째 행렬의 열 크기 입력: ");
	scanf("%d", &Bm);
	printf("\n");
	printf(" 두번째 행렬의 값을 입력하세요. \n");
	// 입력받은 값을 B 행렬 배열에 삽입한다.
	for (i = 0; i < Bn; i++)
	{
		for (j = 0; j < Bm; j++)
		{
			printf(" %d X %d 행렬의 값을 입력하세요: ", i + 1, j + 1);
			scanf("%d", &vMatrixB[i][j]);
		}
	}
	// 행렬의 곱 A X B 연산
	// 행렬의 곱 연산 결과는 행렬의 형태가 (A 행렬의 행 X B 행렬의 열)의 형태로 나타난다. (An X Bm의 행렬 형태)
	for (i = 0; i < An; i++)
	{
		for (j = 0; j < Bm; j++)
		{
			vResult[i][j] = 0; // 결과 값 행렬을 초기화한다.
			for (k = 0; k < Am; k++)
			{
				vResult[i][j] += vMatrixA[i][k] * vMatrixB[k][j];
			}
		}
	}
	// A X B의 결과 값을 출력한다.
	printf("\n");
	printf(" 두 행렬 곱의 결과값\n");
	for (i = 0; i < An; i++)
	{
		for (j = 0; j < Bm; j++)
		{
			printf("%4d", vResult[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
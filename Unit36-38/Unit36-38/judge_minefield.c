// 행렬의 크기 m,n(3~10) & 문자 행렬 입력
// 행렬 안에서 *은 지뢰고, .은 지뢰가 아님.
// 지뢰가 아닌 요소에는 인접한 지뢰의 개수를 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// matrix[i][j] 위치에 지뢰가 있으면 mineCount에 1을 더하는 함수
void CheckMine(int i, int j, char** matrix, int* mineCount)
{
	if (matrix[i][j] == '*')
	{
		*mineCount += 1;
	}
}

int main(void)
{
	int m = 0, n = 0; // m: 세로, n: 가로
	int i = 0, j = 0;
	int mineCount = 0; // 주변에 인접한 지뢰의 개수

	// 불리언
	bool isInArea_row;
	bool isInArea_col;

	// 행렬 선언
	printf("행렬의 크기 입력 (가로 세로) (범위 : 3~10) : ");
	scanf("%d %d", &n, &m);
	
	char** matrix = (char**)malloc(sizeof(char*) * m);

	for (i = 0; i < m; i++)
	{
		// 널 문자를 고려해 n+1만큼 할당
		matrix[i] = (char*)malloc(sizeof(char) * (n + 1));
	}

	printf("문자 행렬 %d줄 입력\n", m);

	// 행렬 입력
	for (i = 0; i < m; i++)
	{
		scanf("%s", matrix[i]);
	}

	printf("\n");

	// 지뢰면 * 출력하고, 아니면 요소에 인접한 지뢰개수 출력
	// i가 세로, j가 가로
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			// 지뢰 갯수 초기화
			mineCount = 0;

			// 지뢰
			if (matrix[i][j] == '*')
			{
				printf("*");
			}
			else
			{
				// 대각선 판별을 위한 불리언 값
				isInArea_row = (j >= 1) && (j <= n - 2); // 요소의 가로 값이 1 ~ (n-2) 안에 있는지 확인 
				isInArea_col = (i >= 1) && (i <= m - 2); // 요소의 세로 값이 1 ~ (m-2) 안에 있는지 확인

				// 대각선 판별이 가능한 범위 => 가로가 1~n-2, 세로가 1~m-2 사이에 있는 요소만
				if (isInArea_row && isInArea_col)
				{
					// 대각선 & 위아래 왼쪽 오른쪽 판별
					CheckMine(i - 1, j - 1, matrix, &mineCount); // 왼쪽 위
					CheckMine(i - 1, j, matrix, &mineCount); // 위
					CheckMine(i - 1, j + 1, matrix, &mineCount); // 오른쪽 위
					CheckMine(i, j - 1, matrix, &mineCount); // 왼쪽
					CheckMine(i, j + 1, matrix, &mineCount); // 오른쪽
					CheckMine(i + 1, j - 1, matrix, &mineCount); // 왼쪽 아래
					CheckMine(i + 1, j, matrix, &mineCount); // 아래
					CheckMine(i + 1, j + 1, matrix, &mineCount); // 오른쪽 아래
				}
				else
				{
					// 맨 윗줄일 때
					if (i == 0)
					{
						// 맨 왼쪽 위 모서리
						if (j == 0)
						{
							CheckMine(i, j + 1, matrix, &mineCount); // 오른쪽
							CheckMine(i + 1, j, matrix, &mineCount); // 아래
							CheckMine(i + 1, j + 1, matrix, &mineCount); // 오른쪽 아래
						}
						// 맨 오른쪽 위 모서리
						else if (j == n - 1)
						{
							CheckMine(i, j - 1, matrix, &mineCount); // 왼쪽
							CheckMine(i + 1, j, matrix, &mineCount); // 아래
							CheckMine(i + 1, j - 1, matrix, &mineCount); // 왼쪽 아래
						}
						// 그 사이일 때
						else if ((j > 0) && (j < n - 1))
						{
							CheckMine(i, j - 1, matrix, &mineCount); // 좌
							CheckMine(i, j + 1, matrix, &mineCount); // 우
							CheckMine(i + 1, j, matrix, &mineCount); // 아래
							CheckMine(i + 1, j - 1, matrix, &mineCount); // 왼쪽 아래
							CheckMine(i + 1, j + 1, matrix, &mineCount); // 오른쪽 아래
						}
					}
					// 맨 아랫줄일 때
					else if (i == m - 1)
					{
						// 맨 왼쪽 아래 모서리
						if (j == 0)
						{
							CheckMine(i - 1, j, matrix, &mineCount); // 위
							CheckMine(i, j + 1, matrix, &mineCount); // 오른쪽
							CheckMine(i - 1, j + 1, matrix, &mineCount); // 오른쪽 위
						}
						// 맨 오른쪽 아래 모서리
						else if (j == n - 1)
						{
							CheckMine(i - 1, j, matrix, &mineCount); // 위
							CheckMine(i, j - 1, matrix, &mineCount); // 왼쪽
							CheckMine(i - 1, j - 1, matrix, &mineCount); // 왼쪽 위
						}
						// 그 사이일 때
						else if ((j > 0) && (j < n - 1))
						{
							CheckMine(i, j - 1, matrix, &mineCount); // 좌
							CheckMine(i, j + 1, matrix, &mineCount); // 우
							CheckMine(i - 1, j, matrix, &mineCount); // 위
							CheckMine(i - 1, j - 1, matrix, &mineCount); // 왼쪽 위
							CheckMine(i - 1, j + 1, matrix, &mineCount); // 오른쪽 위
						}
					}
					else if((i > 0) && (i < m - 1))
					{
						// 모서리 제외한 판정
						// 맨 왼쪽 세로줄
						if (j == 0)
						{
							CheckMine(i - 1, j, matrix, &mineCount); // 위
							CheckMine(i + 1, j, matrix, &mineCount); // 아래
							CheckMine(i, j + 1, matrix, &mineCount); // 오른쪽
							CheckMine(i - 1, j + 1, matrix, &mineCount); // 오른쪽 위
							CheckMine(i + 1, j + 1, matrix, &mineCount); // 오른쪽 아래
						}
						// 맨 오른쪽 세로줄
						else if (j == n - 1)
						{
							CheckMine(i - 1, j, matrix, &mineCount); // 위
							CheckMine(i + 1, j, matrix, &mineCount); // 아래
							CheckMine(i, j - 1, matrix, &mineCount); // 왼쪽
							CheckMine(i - 1, j - 1, matrix, &mineCount); // 왼쪽 위
							CheckMine(i + 1, j - 1, matrix, &mineCount); // 왼쪽 아래
						}
					}
				}

				// 지뢰 갯수 출력
				printf("%d", mineCount);
			}
		}
		printf("\n");
	}

	// 메모리 해제
	for (i = 0; i < m; i++)
	{
		free(matrix[i]);
	}

	free(matrix);

	return 0;
}
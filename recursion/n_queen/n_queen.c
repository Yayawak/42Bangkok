#include <stdbool.h>
#include <stdio.h>
#define N 4

void	print_solution(int board[N][N])
{
		int	i;
		int j;

		i = 0;
		j = 0;
		while (i < N)
		{
				while (j < N)
				{
						printf(" %d ", board[i][j]);
						j++;
				}
				printf("\n");
				i++;
		}
		printf("\n===================\n");
}

bool	is_safe(int board[N][N], int row, int col)
{
		int col_i;
		int row_i;	

		col_i = 0;
		// check this row on left side
		while (col_i < col)
		{
				if (board[row][col_i])
						return (false);
				col_i++;
		}
		// check upper diagonal on left side
		col_i = row;
		row_i = col;
		while ((col_i >= 0) && (row_i >= 0))
		{
				if (board[col_i][row_i])
						return (false);
				col_i--;
				row_i--;
		}
		// check lower diagonal on left side
		col_i = row;
		row_i = col;
		while ((row_i >= 0) && (col_i < N))
		{
				if (board[col_i][row_i])
						return (false);
				col_i++;
				row--;
		}
		return (true);
}

bool	solve_nq_util(int board[N][N], int col)
{
		int	row;
		/* base case : if all queens are placed*/
		row = 0;
		if (col >= N)
		{
				print_solution(board);
				return (true);
		}
		while (row < N)
		{
				if (is_safe(board, row, col))
				{
						board[row][col] = 1;
						// recur to place rest of the queens
						if (solve_nq_util(board, (col + 1)))
						{
								print_solution(board);
								return (true);
						}
						else
								// back track
								board[row][col] = 0;
				}
				row++;
		}
		// can place a queen in any row in this column
		print_solution(board);
		return (false);

		
}

bool	solve_nq()
{
		int	board[N][N] = {
				{0, 0, 0, 0},
				{0, 0, 0, 0},
				{0, 0, 0, 0},
				{0, 0, 0, 0}
		};

		if (solve_nq_util(board, 0) == false)
		{
				printf("Solution does not exist");
				return (false);
		}
		
		print_solution(board);
		return (true);
}

int	main(void)
{
		solve_nq();
		return (0);
}

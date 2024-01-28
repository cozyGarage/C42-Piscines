#include <unistd.h>

void print_board(int *board) {
    int i = 0;
    while (i < 10) {
        char c = board[i++] + '0';
        write(1, &c, 1);
    }
    write(1, "\n", 1);
}

int check_diag(int a, int b) {
    if (a >= b)
        return a - b;
    else
        return b - a;
}

int check_safe(int nqueen, int *board) {
    int i = 0;
    while (i < nqueen) {
        if ((board[nqueen] == board[i])
                || (check_diag(board[nqueen], board[i]) == (nqueen - i)))
            return 0;
        ++i;
    }
    return 1;
}

void place_queens(int nqueen, int *board, int *count) {
    board[nqueen] = 0;
    while (board[nqueen] < 10) {
        if (check_safe(nqueen, board)) {
            if (nqueen == 10 - 1) {
                print_board(board);
                ++(*count);
            } else {
                place_queens(nqueen + 1, board, count);
            }
        }
        ++board[nqueen];
    }
}

int ten_queens_puzzle(void) {
    int board[10];
    int nqueen = 0;
    int count = 0;

    place_queens(nqueen, board, &count);
    return count;
}
/*
int main() {
    ten_queens_puzzle();
    return 0;
}*/
/* ************************************************************************** */
/* ************************************************************************** */
/*
#include <unistd.h>

char	g_seq[11];
int		g_row[10];
int		g_diag1[19];
int		g_diag2[19];
int		g_cnt;

void	set_chk_var(int r, int c, int val)
{
	g_row[r] = val;
	g_diag1[c - r + 9] = val;
	g_diag2[r + c] = val;
}

void	rec(int c)
{
	int r;

	if (c == 10)
	{
		write(1, g_seq, 11);
		++g_cnt;
	}
	r = 0;
	while (r < 10)
	{
		if (!g_row[r] && !g_diag1[c - r + 9] && !g_diag2[r + c])
		{
			set_chk_var(r, c, 1);
			g_seq[c] = '0' + r;
			rec(c + 1);
			set_chk_var(r, c, 0);
		}
		++r;
	}
}

void	init(void)
{
	int i;

	g_seq[10] = '\n';
	g_cnt = 0;
	i = 0;
	while (i < 10)
	{
		g_row[i] = 0;
		g_diag1[i] = 0;
		g_diag2[i] = 0;
		++i;
	}
	while (i < 19)
	{
		g_diag1[i] = 0;
		g_diag2[i] = 0;
		++i;
	}
}

int		ft_ten_queens_puzzle(void)
{
	init();
	rec(0);
	return (g_cnt);
}
*/
/* ************************************************************************** */
/* ************************************************************************** */
/*
#include <unistd.h>

void	ft_putout(int *board)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = board[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int		checkdiag(int a, int b)
{
	if (a >= b)
		return (a - b);
	else
		return (b - a);
}

int		checksafe(int nqueen, int *board)
{
	int i;

	i = 0;
	while (i < nqueen)
	{
		if ((board[nqueen] == board[i]) ||
				(checkdiag(board[nqueen], board[i]) == (nqueen - i)))
			return (0);
		i++;
	}
	return (1);
}

void	start(int nqueen, int *board, int *conta)
{
	board[nqueen] = 0;
	while (board[nqueen] < 10)
	{
		if (checksafe(nqueen, board))
		{
			if (nqueen == 9)
			{
				ft_putout(board);
				*conta = *conta + 1;
			}
			else
				start(nqueen + 1, board, conta);
		}
		board[nqueen]++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int board[10];
	int nqueen;
	int conta;

	conta = 0;
	nqueen = 0;
	start(nqueen, board, &conta);
	return (conta);
}

int        main(void)
{
    ft_ten_queens_puzzle();
    return (0);
}
*/
/* ************************************************************************** */
/* ************************************************************************** */
/*
#include <unistd.h>

char	g_seq[11];
int		g_row[10];
int		g_diag1[19];
int		g_diag2[19];
int		g_cnt;

void	set_chk_var(int r, int c, int val)
{
	g_row[r] = val;
	g_diag1[c - r + 9] = val;
	g_diag2[r + c] = val;
}

void	rec(int c)
{
	int r;

	if (c == 10)
	{
		write(1, g_seq, 11);
		++g_cnt;
	}
	r = 0;
	while (r < 10)
	{
		if (!g_row[r] && !g_diag1[c - r + 9] && !g_diag2[r + c])
		{
			set_chk_var(r, c, 1);
			g_seq[c] = '0' + r;
			rec(c + 1);
			set_chk_var(r, c, 0);
		}
		++r;
	}
}

void	init(void)
{
	int i;

	g_seq[10] = '\n';
	g_cnt = 0;
	i = 0;
	while (i < 10)
	{
		g_row[i] = 0;
		g_diag1[i] = 0;
		g_diag2[i] = 0;
		++i;
	}
	while (i < 19)
	{
		g_diag1[i] = 0;
		g_diag2[i] = 0;
		++i;
	}
}

int		ft_ten_queens_puzzle(void)
{
	init();
	rec(0);
	return (g_cnt);
}
*/
/* ************************************************************************** */
/* ************************************************************************** */
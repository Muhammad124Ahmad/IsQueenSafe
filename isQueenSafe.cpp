#include<iostream>
using namespace std;
void queenPlacement(int a[][8], int rowOfQueen, int colOfQueen)
{
	a[rowOfQueen][colOfQueen] = 1;
}
bool rowCheck(int a[][8], int row1, int COL)
{
	int counter = 0;
	for (int i = row1; i < row1 + 1; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (a[i][j] == 1)
			{
				counter++;
			}
		}
	}
	if (counter != 1)
	{
		return false;
	}
	return true;
}
bool colCheck(int a[][8], int ROW, int col1)
{
	int counter = 0;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = col1; j < col1+1; j++)
		{
			if (a[i][j] == 1)
			{
				counter++;
			}
		}
	}
	if (counter != 1)
	{
		return false;
	}
	return true;
}
bool uRightDiagonal(int a[][8], int row1, int col1)
{
	int counter = 0;
	while (row1 >= 0 || col1 < 8)
	{
		if (a[row1][col1] == 1)
		{
			counter=counter+1;
		}
		row1--;
		col1++;


	}
	if (counter != 1)
	{
		return false;
	}
	return true;

}
bool lLeftDiagonal(int a[][8], int row1, int col1)
{
	int counter = 0;
	while (row1 <8 || col1 >= 0)
	{
		if (a[row1][col1] == 1)
		{
			counter = counter + 1;
		}
		row1++;
		col1--;


	}
	if (counter != 1)
	{
		return false;
	}
	return true;

}
bool lRightDiagonal(int a[][8], int row1, int col1)
{
	
	int counter = 0;
	while (row1 < 8 || col1 < 8)
	{
		if (a[row1][col1] == 1)
		{
			counter = counter + 1;
		}
		row1++;
		col1++;


	}
	if (counter != 1)
	{
		return false;
	}
	return true;

}
bool uLeftDiagonal(int a[][8], int row1, int col1)
{
	int counter = 0;
	
	while (row1 >=0|| col1 >= 0)
	{
		if (a[row1][col1] == 1)
		{
			counter = counter + 1;
		}
		row1--;
		col1--;


	}
	if (counter != 1)
	{
		return false;
	}
	return true;

}
int main()
{
	const int ROW = 8;
	const int COL = 8;
	int a[ROW][COL];
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			a[i][j] = 0;
		}
	}
	int row1 = 3;
	int col1 = 3;
	int row2 = 4;
	int col2 = 5;
	queenPlacement(a, row1, col1);
	queenPlacement(a, row2, col2);
	if (rowCheck(a, row1, COL) == false || colCheck(a, ROW, col1) == false || uRightDiagonal(a, row1, col1) == false
		|| lLeftDiagonal(a, row1, col1) == false || lRightDiagonal(a, ROW, col1) == false || uLeftDiagonal(a, ROW, col1) == false)
	{
		cout << "NOT SAFE";
	}
	else
	{
		cout << "SAFE";
	}
	cout << '\n';
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout<<a[i][j]<<' ';
		}
		cout << '\n';

	}


}
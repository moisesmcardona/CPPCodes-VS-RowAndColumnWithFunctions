#include <iostream>
using namespace std;
const int row = 3;
const int col = 3;
void datainput(double grid[row][col]);
void datadisplay(double grid[row][col]);

int main()
{

	double grid[row][col];
	double math = 0.0;
	datainput(grid);
	datadisplay(grid);
	system("pause");
	return 0;
}
void datainput(double grid[row][col])
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "Enter a number for row " << i + 1 << " column " << j + 1 << ": ";
			cin >> grid[i][j];
			
		}
	}
}
void datadisplay(double grid[row][col])
{
	double math = 0.0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "Value for row " << i + 1 << " column " << j + 1 << ": " << grid[i][j] << endl;
			math = math + grid[i][j];
		}
		cout << "The sum for row: " << i + 1 << " of the entered values is: " << math << endl;
		cout << "diagonal " << i + 1 << " is " << grid[i][i] << endl;
		math = 0;
	}
}
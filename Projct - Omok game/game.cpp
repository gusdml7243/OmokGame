#include <iostream>
#include<iomanip>
#include<string>
using namespace std;
void locationStr(string arr[19][19]);
int main()
{
	char colorChange = 'B';
	int x, y;
	string location[19][19];
	locationStr(location);
	while (true)
	{
		cout << " ====== Let's Play Omok ======\n" << endl << " ";
		for (int i = 1; i <= 19; i++)
			cout << setw(2) << i;
		for (int i = 0; i < 19; i++)
		{
			cout << endl;
			cout << setw(2) << i + 1;
			for (int j = 0; j < 19; j++)
			{
				cout << location[i][j];
			}
		}
		if (colorChange == 'B')
			cout << endl << "○'s X,Y:";
		else
			cout << endl << "●'s X,Y:";
		cin >> x >> y;;
		if (x != 99 && y != 99) //99 99 입력 시 종료
		{
			if (colorChange == 'B')
			{
				location[x - 1][y - 1] = "○";
				colorChange = 'W';
			}
			else
			{
				location[x - 1][y - 1] = "●";
				colorChange = 'B';
			}
			system("cls");
			continue;
		}
		else
			break;
	}
	return 0;
}
void locationStr(string arr[19][19])
{
	arr[0][0] = "┌ ";
	arr[0][18] = "┐";
	arr[18][0] = "└ ";
	arr[18][18] = "┘";
	for (int i = 1; i < 18; i++)
	{
		arr[0][i] = "┬ ";
		arr[18][i] = "┴ ";
		arr[i][0] = "├ ";
		arr[i][18] = "┤";
	}
	for (int i = 1; i < 18; i++)
	{
		for (int j = 1; j < 18; j++)
			arr[i][j] = "┼ ";
	}
}
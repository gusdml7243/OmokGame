#include <iostream>
#include<iomanip>
using namespace std;
void topLine(int num);
void middleLine(int num);
void bottomLine(int num);
int main()
{
	int const COUNT = 19;
	cout << " ====== Let's Play Omok ======\n" << endl << " ";
	for (int i = 1; i <= COUNT; i++)
		cout << setw(2) << i;
	cout << endl;
	topLine(COUNT);
	for (int i = 2; i < COUNT; i++)
	{
		cout << setw(2) << i;
		middleLine(COUNT);
	}
	bottomLine(COUNT);
	cout << endl << "●'s X,Y:";
}
void topLine(int num) //위쪽
{
	cout << setw(2) << "1" << "┌" << "─";
	for (int i = 0; i < num - 2; i++)
	{
		cout << "┬" << "─";
	}
	cout << "┐" << endl;
}
void middleLine(int num) //중간
{
	cout << "├" << "─";
	for (int i = 0; i < num - 2; i++)
	{
		cout << "┼" << "─";
	}
	cout << "┤" << endl;
}
void bottomLine(int num) // 아래쪽
{
	cout << setw(2) << num << "└" << "─";
	for (int i = 0; i < num - 2; i++)
	{
		cout << "┴" << "─";
	}
	cout << "┘" << endl;
} 
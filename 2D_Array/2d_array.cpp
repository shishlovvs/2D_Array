#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	const int ROW = 3;
	const int COL = 4;
	const int SIZE = ROW * COL;
	int arr[ROW][COL] = {};

	cout << "��������� ������, ����������� ���������� �������: " << endl;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			arr[i][j] = rand() % SIZE;
		}
	}
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout << arr[i][j] << '\t';
		}cout << endl;
	}cout << endl;

	double sum = 0;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			sum += arr[i][j];
		}
	}
	cout << "����� �������� ��������� �������: " << sum << endl;
	cout << "������� �������������� �������� ��������� �������: " << (double)sum / SIZE << endl;

	int max = arr[0][0];
	int min = arr[0][0];
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	cout << "������������ �������� = " << max << endl;
	cout << "����������� �������� = " << min << endl;

	int iterations = 0;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			for (int k = 0; k < ROW; k++)
			{
				for (int l = 0; l < COL; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}iterations++;
			}
		}
	}
cout << "���������� ��������� �� " << iterations << endl;
	//����� ������� �� �����
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout << arr[i][j] << '\t';
		}cout << endl;
	}
}
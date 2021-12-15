#include <iostream>

using namespace std;

const int nMatr = 5;

int main()
{
	long int bMatr[nMatr][nMatr] = { {0} };
	long int i = 0, j = 2;
	long int iVar1, iVar2, iVar3;

	bMatr[0][0] = 1;
	bMatr[0][1] = 1;
	iVar1 = iVar2 = 1;

	while ((i <= nMatr) && (j <= nMatr))
	{
		iVar3 = iVar1;
		bMatr[i][j] = iVar1 + iVar2;
		iVar1 = bMatr[i][j];
		iVar2 = iVar3;

		if (j == nMatr)
		{
			j = 1;
			i++;
		}
		else
		{
			j++;
		}
	}

	for (int i = 0; i < nMatr; i++)
	{
		for (int j = 0; j < nMatr; j++)
		{
			cout << "\t" << bMatr[i][j] << "        ";
		}
		cout << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}
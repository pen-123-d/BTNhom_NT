#include <iostream>

using namespace std;
void Bai1(int a[100][100], int dong, int cot)
{
	
	for (int i = 0; i < cot; i++)
	{
		bool tmp = true;
		for (int j = 0; j < dong; j++)
		{
			if (a[j][i] % 2 == 0)
			{
				tmp = false;
				break;
			}
		
		}
		if (tmp)
		{
			cout << "Xuat cac cot chua so le " << endl;
			for (int j = 0; j < dong; j++)
			{
				cout << a[j][i] << " ";
			}
			cout << endl;

		}
	
	}
}

void Bai2(int a[100][100], int dong, int cot)
{
	int tmp=0;
	for (int i = 0; i < cot; i++)
	{
		if (tmp<a[0][i] )
		{
			tmp = a[0][i];
		}
	}
	for (int i =0;i<cot ;i++)
	{
		if (tmp<a[dong - 1][i] )
		{
			tmp = a[dong - 1][i];
		}
	}
	for (int i = 0; i < dong; i++)
	{
		if (tmp < a[0][i])
		{
			tmp = a[0][i];
		}
	}
	for (int i = 0; i < dong; i++)
	{
		if (tmp < a[cot - 1][i])
		{
			tmp = a[cot - 1][i];
		}
	}
	cout << tmp << endl;
}
void Bai3(int a[100][100], int dong ,int cot)
{
	int dem = 0;
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			int tmp = a[i][j];
			while (tmp != 0)
			{
				
				if (tmp % 10 == 2)
				{
					dem++;
					break;
				}
				tmp /= 10;

			}
		}
	}
	cout << "Co " << dem << " Phan tu co chu so hai trong chu so cua no " << endl;
}
void Bai4(int a[100][100], int dong ,int cot)
{
	for (int i = 0; i < dong; i++) 
	{
		for (int j = 0; j < cot; j++)
		{
			bool isCucTieu = true;
			
			if (i > 0 && a[i][j] >= a[i - 1][j]) isCucTieu = false;
			if (i < dong - 1 && a[i][j] >= a[i + 1][j]) isCucTieu = false;
			if (j > 0 && a[i][j] >= a[i][j - 1]) isCucTieu = false;
			if (j < cot - 1 && a[i][j] >= a[i][j + 1]) isCucTieu = false;
			
			if (isCucTieu) cout << a[i][j] << " ";
		}
	}
	cout << endl;
}
void menu()
{
	cout << "-----------------" << endl;
	cout << "1.Xuat cac cot chua so le " << endl;
	cout << "2.Tim phan tu lon nhat tren bien ma tran" << endl;
	cout << "3.Bao nhieu pt co chu so hai xuat hien trong chu so cua no" << endl;
	cout << "4.Xuat cac phan tu cuc tieu cua ma tran " << endl;
	cout << "-----------------" << endl;
}

int main()
{
	int a[100][100], n,dong,cot;
	cout << "Vui long nhap so luong dong " << endl;
	cin >> dong;
	cout << "Vui long nhap so luong cot " << endl;
	cin >> cot;
	cout << "Vui long nhap cac pt mang " << endl;

	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			cin >> a[i][j];
		}
	}
	do
	{
		menu();
		cout << "Vui long chon bai " << endl;
		cin >> n;
		switch (n)
		{
		case 1:
			 Bai1(a, dong, cot);
			break;
		case 2:
			Bai2(a, dong, cot);
			break;
		case 3:
			Bai3(a, dong, cot);
			break;
		case 4:
			Bai4(a, dong, cot);
			break;

		}

	} while (n != 0);
}
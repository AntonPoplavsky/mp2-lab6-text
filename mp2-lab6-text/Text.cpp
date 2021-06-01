#include "Text.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

TMem TTextLink::mem;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	TTextLink::InitMem();
	TText t;
	char NameofFile[80], s[80];
	int Num = 1;

	while (Num != 0)
	{
		Num = -1;
		cout << "����:\n";

		cout << "1. ������� �� �����\n";
		cout << "2. �����\n";
		cout << "3. ��������� ����\n";

		cout << "����������� ���������:\n";
		cout << "4. ToNext\n";
		cout << "5. ToDown\n";
		cout << "6. ToPrev\n";
		cout << "7. ToFirst\n";

		cout << "��������:\n";
		cout << "8. InsNextLine\n";
		cout << "9. InsNextSection\n";
		cout << "10. InsDownLine\n";
		cout << "11. InsDownSection\n";
		cout << "12. DelNext\n";
		cout << "13. DelDown\n";

		cout << "������ � �������:\n";
		cout << "14. ������ ������\n";
		cout << "15. ����� ������ �������\n\n";

		cout << "0. �����\n";

		cin >> Num;

		switch (Num)
		{
		case 1:
		{
			system("cls");

			cout << "������� �������� ����� ��� ������" << endl;
			cin >> NameofFile;

			t.Read(NameofFile);

			break;
		}
		case 2:
		{
			system("cls");

			t.Print();
			break;
		}
		case 3:
		{
			system("cls");

			cout << "������� �������� ����� ��� ������" << endl;
			cin >> NameofFile;

			t.PointerDelete();
			t.Print();
			break;
		}
		case 4:
		{
			system("cls");

			t.PointerDelete();
			t.ToNext();

			t.PointerCreate();
			t.Print();

			break;
		}
		case 5:
		{
			system("cls");

			t.PointerDelete();
			t.ToDown();

			t.PointerCreate();
			t.Print();

			break;
		}
		case 6:
		{
			system("cls");

			t.PointerDelete();
			t.ToPrev();

			t.PointerCreate();
			t.Print();

			break;
		}
		case 7:
		{
			t.PointerDelete();
			t.ToFirst();

			t.PointerCreate();
			t.Print();

			break;
		}
		case 8:
		{
			system("cls");

			cout << "������� ����� ������" << endl;
			cin >> s;
			t.InsNextLine(s);

			t.Print();

			break;
		}
		case 9:
		{
			system("cls");

			cout << "������� ����� ������" << endl;
			cin >> s;
			t.InsNextSections(s);

			t.Print();

			break;
		}
		case 10:
		{
			system("cls");

			cout << "������� ����� ������" << endl;
			cin >> s;
			t.InsDownLine(s);

			t.Print();

			break;
		}
		case 11:
		{
			system("cls");

			cout << "������� ����� ������" << endl;
			cin >> s;
			t.InsDownSections(s);

			t.Print();

			break;
		}
		case 12:
		{
			system("cls");

			t.DelNextLine();

			t.Print();

			break;
		}
		case 13:
		{
			system("cls");

			t.DelDownLine();

			t.Print();

			break;
		}
		case 14:
		{
			system("cls");

			TTextLink::clean(t);

			break;
		}
		case 15:
		{
			system("cls");

			TTextLink::PrintFree();

			break;
		}
		default: continue;
		}
	}
}
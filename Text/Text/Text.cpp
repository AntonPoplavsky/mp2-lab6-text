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
		cout << "Меню:\n";

		cout << "1. Считать из файла\n";
		cout << "2. Вывод\n";
		cout << "3. Сохранить файл\n";

		cout << "Перемещение указателя:\n";
		cout << "4. ToNext\n";
		cout << "5. ToDown\n";
		cout << "6. ToPrev\n";
		cout << "7. ToFirst\n";

		cout << "Операции:\n";
		cout << "8. InsNextLine\n";
		cout << "9. InsNextSection\n";
		cout << "10. InsDownLine\n";
		cout << "11. InsDownSection\n";
		cout << "12. DelNext\n";
		cout << "13. DelDown\n";

		cout << "Работа с памятью:\n";
		cout << "14. Сборка мусора\n";
		cout << "15. Вывод пустых звеньев\n\n";

		cout << "0. Выход\n" << endl;

		cin >> Num;

		switch (Num)
		{
		case 1:
		{
			system("cls");

			cout << "Введите название файла для чтения" << endl;
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

			cout << "Введите название файла для записи" << endl;
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

			cout << "Введите новую строку" << endl;
			cin >> s;
			t.InsNextLine(s);

			t.Print();

			break;
		}
		case 9:
		{
			system("cls");

			cout << "Введите новую строку" << endl;
			cin >> s;
			t.InsNextSections(s);

			t.Print();

			break;
		}
		case 10:
		{
			system("cls");

			cout << "Введите новую строку" << endl;
			cin >> s;
			t.InsDownLine(s);

			t.Print();

			break;
		}
		case 11:
		{
			system("cls");

			cout << "Введите новую строку" << endl;
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
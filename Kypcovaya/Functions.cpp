#include "Header1.h"

void flowerDrawing()
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((13)));
	cout << "\n\n\n\t\t\t\t__________$$$$$$\t\t\t\t\t\t\t\t" <<										"__________$$$$$$" << endl
		<< "\t\t\t\t_________$________$________$$$$$$\t\t\t\t\t\t" <<								"_________$________$________$$$$$$" << endl
		<< "\t\t\t\t________$___________$_____$_________$\t\t\t\t\t\t" <<							"________$___________$_____$_________$" << endl
		<< "\t\t\t\t________$_____________$$$________$\t\t\t\t\t\t" <<								"________$_____________$$$________$" << endl
		<< "\t\t\t\t_________$___________________________$\t\t\t\t\t\t" <<							"_________$___________________________$" << endl
		<< "\t\t\t\t__________$_______$$$$$___________$\t\t\t\t\t\t" <<								"__________$_______$$$$$___________$" << endl
		<< "\t\t\t\t___$$$$$$_______$$$$$$$_________$\t\t\t\t\t\t" <<								"___$$$$$$_______$$$$$$$_________$" << endl
		<< "\t\t\t\t__$_____________$$$$$$$_________$\t\t\t\t\t\t" <<								"__$_____________$$$$$$$_________$" << endl
		<< "\t\t\t\t_$_____________$$$$$$$$_______$\t\t\t\t\t\t\t" <<								"_$_____________$$$$$$$$_______$" << endl
		<< "\t\t\t\t_$_____________$$$$$$$$_____$\t\t\t\t\t\t\t" <<									"_$_____________$$$$$$$$_____$" << endl
		<< "\t\t\t\t_$_____________$$$$$$$______$\t\t\t\t\t\t\t" <<									"_$_____________$$$$$$$______$" << endl
		<< "\t\t\t\t___$____________$$$$$_________$\t\t\t\t\t\t\t" <<								"___$____________$$$$$_________$" << endl
		<< "\t\t\t\t_____$$$$$_______________________$";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((Yellow)));
		cout << "\t\tВЕРХОВНА РАДА УКРАЇНИ\t\t";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((13)));
		cout <<			"_____$$$$$_______________________$" << endl
		<< "\t\t\t\t_________$$_________________________$\t\t\t\t\t\t" <<							"_________$$_________________________$" << endl
		<< "\t\t\t\t_________$___________$$___________$\t\t\t\t\t\t" <<								"_________$___________$$___________$" << endl
		<< "\t\t\t\t__________$________$$__$$$$$$$\t\t\t\t\t\t\t" <<								"__________$________$$__$$$$$$$" << endl
		<< "\t\t\t\t___________$_____$$";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
		cout << "$\t\t\t\t\t\t\t\t";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((13)));
		cout <<	"___________$_____$$";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
		cout << "$" << endl;
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((13)));
		cout << "\t\t\t\t____________$$$$_$ ";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
		cout << "$\t\t\t\t\t\t\t\t";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((13)));
		cout <<	"____________$$$$_$ ";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
		cout << "$" << endl;
		cout << "\t\t\t\t___________________$\t\t\t\t\t\t\t\t" <<									"___________________$" << endl
		<< "\t\t\t\t___________________$\t\t\t\t\t\t\t\t" <<										"___________________$" << endl
		<< "\t\t\t\t___________________$\t\t\t\t\t\t\t\t" <<										"___________________$" << endl
		<< "\t\t\t\t___________________$\t\t\t\t\t\t\t\t" <<										"___________________$" << endl
		<< "\t\t\t\t___________________$\t\t\t\t\t\t\t\t" <<										"___________________$" << endl
		<< "\t\t\t\t___________________$____$$$\t\t\t\t\t\t\t" <<									"___________________$____$$$" << endl
		<< "\t\t\t\t_________$$$$__$__$_____$\t\t\t\t\t\t\t" <<										"_________$$$$__$__$_____$" << endl
		<< "\t\t\t\t_________$_______$$$___$$\t\t\t\t\t\t\t" <<										"_________$_______$$$___$$" << endl
		<< "\t\t\t\t__________$$$____$__$$\t\t\t\t\t\t\t\t" <<										"__________$$$____$__$$" << endl
		<< "\t\t\t\t___________________$\t\t\t\t\t\t\t\t" <<										"___________________$" << endl
		<< "\t\t\t\t___________________$\t\t\t\t\t\t\t\t" <<										"___________________$" << endl
		<< "\t\t\t\t___________________$\t\t\t\t\t\t\t\t" <<										"___________________$" << endl
		<< "\t\t\t\t___________________$\t\t\t\t\t\t\t\t" <<										"___________________$" << endl << endl << endl;
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
}

void chairmanOfTheVerkhovnaRada()
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
	cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t\tРазумков Дмитро Олександрович\n\n";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((Yellow)));
		cout << "\t\t\t\t\t\t\tОБРАНИЙ ПО:\t\t\t\t";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		cout << "Загальнодержавному багатомандатному округу\n";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "\t\t\t\t\t\t\tПАРТІЯ:\t\t\t\t\t";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "ПОЛІТИЧНА ПАРТІЯ  'СЛУГА НАРОДУ'\n";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
		cout << "\t\t\t\t\t\t\tНОМЕР У СПИСКУ:\t\t\t\t";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		cout << "1\n";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "\t\t\t\t\t\t\tНАБУТТЯ ДЕПУТАТСЬКИХ ПОВНОВАЖЕНЬ:\t";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "29 серпня 2019р.\n";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
		cout << "\t\t\t\t\t\t\tПартійність:\t\t\t\t";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		cout << "член ПОЛІТИЧНОЇ ПАРТІЇ 'СЛУГА НАРОДУ'\n";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "\t\t\t\t\t\t\tДата народження:\t\t\t";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "8 жовтня 1983 року\n";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
		cout << "\t\t\t\t\t\t\tМісце народження:\t\t\t";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		cout << "м. Бердичів Житомирської області\n";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "\t\t\t\t\t\t\tОсвіта:\t\t\t\t\t";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "вища\n";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
		cout << "\t\t\t\t\t\t\tІноземна(і) мова(и):\t\t\t";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		cout << "Володіє англійською мовою\n";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "\t\t\t\t\t\t\tСімейний стан:\t\t\t\t";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "одружений, має двох синів\n\n\n";

	SetConsoleTextAttribute(hConsoleHandle, (WORD)((13)));
	cout << "\t\t\t\t\t\t\t\tГолова Верховної Ради України (обраний 29.08.2019 року)\n\n";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
}

void theLeadershipOfTheVerkhovnaRada()
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
	cout << "\n\n\n\n\t\t\t\tСтефанчук Руслан Олексійович \t\t\t\t\t\t\t\tКондратюк Олена Костянтинівна\n\n";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "\tОБРАНИЙ ПО:\t\t\t";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "Загальнодержавному багатомандатному округу";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "\t\tОБРАНА ПО:\t\t\t";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "Загальнодержавному багатомандатному округу\n";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "\tПАРТІЯ:\t\t\t\t";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "ПОЛІТИЧНА ПАРТІЯ  'СЛУГА НАРОДУ'";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "\t\t\tПАРТІЯ:\t\t\t\t";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "політична партія 'Батьківщина'\n";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "\tНОМЕР У СПИСКУ:\t\t\t";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "2";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "\t\t\t\t\t\t\tНОМЕР У СПИСКУ:\t\t\t";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "5\n";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "\tНАБУТТЯ ДЕП. ПОВНОВАЖЕНЬ:\t";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "29 серпня 2019р.";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "\t\t\t\t\tНАБУТТЯ ДЕП. ПОВНОВАЖЕНЬ:\t";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "29 серпня 2019р.\n";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "\tПартійність:\t\t\t";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "безпартійний";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "\t\t\t\t\t\tПартійність:\t\t\t";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "член політичної партії 'Батьківщина'";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "\t\t\t\t\t\tДата народження:\t\t";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "29 жовтня 1975 року";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "\t\t\t\t\tДата народження:\t\t";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "17 листопада 1970 року\n";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "\tМісце народження:\t\t";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "м. Тернопіль";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "\t\t\t\t\t\tМісце народження:\t\t";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "м. Тернопіль\n";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "\tОсвіта:\t\t\t\t";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "вища";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "\t\t\t\t\t\t\tОсвіта:\t\t\t\t";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "вища\n";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "\tІноземна мова:\t\t\t";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "Володіє польською, латинською, німецькою";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "\t\tІноземна мова:\t\t\t";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "Володіє англійською, польською мовами\n";
	
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "\tСімейний стан:\t\t\t";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "одружений, має сина, доньку";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "\t\t\t\tСімейний стан:\t\t\t";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "одружена, має доньку\n\n";

	SetConsoleTextAttribute(hConsoleHandle, (WORD)((13)));
	cout << "\tПерший заступник Голови Верховної Ради України (обраний 29.08.2019 року)\t\t";
	cout << "Заступник Голови Верховної Ради України (обраний 29.08.2019 року)\n\n";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
}

void showTheMainMenu()
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	system("cls");

	cout << "\n\n\t\t\t\t\t\t\t ____________________________МЕНЮ_______________________________" << endl;
	cout << "\t\t\t\t\t\t\t |*                                                           *|" << endl;
	cout << "\t\t\t\t\t\t\t |* 1. Інформація про Голову Верховної Ради України           *|" << endl;
	cout << "\t\t\t\t\t\t\t |* 2. Інформація про керівництво Верховної Ради України      *|" << endl;
	cout << "\t\t\t\t\t\t\t |* 3. Комісії Верховної Ради України                         *|" << endl;
	cout << "\t\t\t\t\t\t\t |* 4. Народні депутати України                               *|" << endl;
	cout << "\t\t\t\t\t\t\t |* 5. Засідання комісій Верховної Ради України               *|" << endl;
	cout << "\t\t\t\t\t\t\t |* 6. Загальна кількість присутніх депутатів на засіданнях   *|" << endl;
	cout << "\t\t\t\t\t\t\t |* 0. Зберегти та вийти з системи                            *|" << endl;
	cout << "\t\t\t\t\t\t\t |*___________________________________________________________*|" << endl;

	SetConsoleTextAttribute(hConsoleHandle, (WORD)((13)));
	cout << "\n\t\t\t\t\t\t\tЗробіть свій вибір >>> ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
}

void showCommissionsMenu()
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	system("cls");

	cout << "\n\n\t\t\t\t\t\t\t __________________________МЕНЮ___________________________" << endl;
	cout << "\t\t\t\t\t\t\t |*                                                     *|" << endl;
	cout << "\t\t\t\t\t\t\t |* 1. Вивести всі комісії                              *|" << endl;
	cout << "\t\t\t\t\t\t\t |* 2. Додати комісію                                   *|" << endl;
	cout << "\t\t\t\t\t\t\t |* 3. Пошук інформації про комісію за номером          *|" << endl;
	cout << "\t\t\t\t\t\t\t |* 4. Видалити комісію                                 *|" << endl;
	cout << "\t\t\t\t\t\t\t |* 5. Повернутися в головне меню                       *|" << endl;
	cout << "\t\t\t\t\t\t\t |* 0. Зберегти та вийти з системи                      *|" << endl;
	cout << "\t\t\t\t\t\t\t |*_____________________________________________________*|" << endl;

	SetConsoleTextAttribute(hConsoleHandle, (WORD)((13)));
	cout << "\n\t\t\t\t\t\t\tЗробіть свій вибір >>> ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
}

void showTheMenuOfDeputies()
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	system("cls");

	cout << "\n\n\t\t\t\t\t\t\t __________________________МЕНЮ___________________________" << endl;
	cout << "\t\t\t\t\t\t\t |*                                                     *|" << endl;
	cout << "\t\t\t\t\t\t\t |* 1. Вивести всіх депутатів на екран                  *|" << endl;
	cout << "\t\t\t\t\t\t\t |* 2. Додати депутата                                  *|" << endl;
	cout << "\t\t\t\t\t\t\t |* 3. Пошук інформації про депутата за номером         *|" << endl;
	cout << "\t\t\t\t\t\t\t |* 4. Видалити депутата                                *|" << endl;
	cout << "\t\t\t\t\t\t\t |* 5. Повернутися в головне меню                       *|" << endl;
	cout << "\t\t\t\t\t\t\t |* 0. Зберегти та вийти з системи                      *|" << endl;
	cout << "\t\t\t\t\t\t\t |*_____________________________________________________*|" << endl;

	SetConsoleTextAttribute(hConsoleHandle, (WORD)((13)));
	cout << "\n\t\t\t\t\t\t\tЗробіть свій вибір >>> ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
}

void showMeetingMenu()
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	system("cls");

	cout << "\n\n\t\t\t\t\t\t\t __________________________МЕНЮ___________________________" << endl;
	cout << "\t\t\t\t\t\t\t |*                                                     *|" << endl;
	cout << "\t\t\t\t\t\t\t |* 1. Вивести всі засідання комісій                    *|" << endl;
	cout << "\t\t\t\t\t\t\t |* 2. Додати засідання                                 *|" << endl;
	cout << "\t\t\t\t\t\t\t |* 3. Пошук інформації про засідання за номером        *|" << endl;
	cout << "\t\t\t\t\t\t\t |* 4. Повернутися в головне меню                       *|" << endl;
	cout << "\t\t\t\t\t\t\t |* 0. Зберегти та вийти з системи                      *|" << endl;
	cout << "\t\t\t\t\t\t\t |*_____________________________________________________*|" << endl;

	SetConsoleTextAttribute(hConsoleHandle, (WORD)((13)));
	cout << "\n\t\t\t\t\t\t\tЗробіть свій вибір >>> ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
}

Commission getItemFromStrCom(string line2)
{
	Commission item2;
	int index1, index2, index3, index4;

	index1 = line2.find("|");
	index2 = line2.find("|", index1 + 1);
	index3 = line2.find("|", index2 + 1);
	index4 = line2.rfind("|");

	item2.id2 = stoi(line2.substr(0, index1));
	item2.nameProfCom = line2.substr(index1 + 1, index2 - index1 - 1);
	item2.fullNameCom = line2.substr(index2 + 1, index3 - index2 - 1);
	item2.dateOfCreation = line2.substr(index3 + 1, index4 - index3 - 1);

	return item2;
}

int getItemsFromFileCom(string path2, Commission mas[])
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	int m = 0;                          // повертає кількість рядків
	string line2;                       // рядок комісій
	ifstream fin2(path2);

	if (!fin2)                          // якщо не вдалося відкрити файл
	{
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
		cout << "Помилка. Не вдалося відкрити файл 'Комісії.txt'." << endl;
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		system("pause");
		return -2;
	}

	while (getline(fin2, line2))         // поки читання відбулося, виконувати
	{
		mas[m] = getItemFromStrCom(line2);
		m++;
	}

	fin2.close();
	return m;
}

void saveItemsToFileCom(Commission mass[], int m, string path2)
{
	ofstream fiout(path2, ios::app);         // ios::app -  для дозапису

	for (int i = 0; i < m; i++)
	{
		fiout << mass[i].id2 << "|" << mass[i].nameProfCom << "|" << mass[i].fullNameCom << "|" << mass[i].dateOfCreation << "\n";
	}

	fiout.close();
}

void addCom(Commission mass[], int m)
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

	string name, fullname;
	int index1, index2;
	string nameProfCom, fullNameCom, dateOfCreation;
	string number, month, year;
	int indexDate, indexDate2, rik = 2021;
	int proverka;                                         // перевірка на введення символів для дати народження

	bool x = true;                                        // перевірка на цифри для профіля комісії
	bool y = true;                                        // перевірка на цифри для профіля комісії
	
	cin.ignore(32767, '\n');
	do
	{
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
		cout << "Введіть профіль комісії: ";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		getline(cin, nameProfCom);

		for (int i = 0; i < nameProfCom.size(); i++)
		{
			if ((nameProfCom[i] >= '0' && nameProfCom[i] <= '9'))
			{
				SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
				cout << endl << "Для профіля комісії не можна використовувати цифри! Спробуйте ще раз." << endl;
				SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
				break;
			}
			else if (nameProfCom[i] == ' ')
			{
				SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
				cout << endl << "В профілі комісії нічого не записано! Спробуйте ще раз." << endl;
				SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
				break;
			}
			else
			{
				x = false;
				break;
			}
		}
	} while (x);

	do
	{
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
		cout << "Введіть прізвище, ім'я та по батькові голови комісії: ";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		getline(cin, fullNameCom);

		for (int i = 0; i < fullNameCom.size(); i++)
		{
			if ((fullNameCom[i] >= '0' && fullNameCom[i] <= '9'))
			{
				SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
				cout << endl << "Для прізвища, ім'я та по батькові не можна використовувати цифри! Спробуйте ще раз." << endl;
				SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
				break;
			}
			else if (fullNameCom[i] == ' ')
			{
				SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
				cout << endl << "В полі нічого не записано! Спробуйте ще раз." << endl;
				SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
				break;
			}
			else
			{
				y = false;
				break;
			}
		}
	} while (y);

	do
	{
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
		cout << "Введіть дату створення комісії (ДД.ММ.РРРР): ";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		getline(cin, dateOfCreation);
		
		indexDate = dateOfCreation.find(".");
		indexDate2 = dateOfCreation.find(".", indexDate + 1);

		number = dateOfCreation.substr(0, indexDate);
		month = dateOfCreation.substr(indexDate + 1, indexDate2 - indexDate - 1);
		year = dateOfCreation.substr(indexDate2 + 1, dateOfCreation.size() - indexDate2 - 1);
		proverka = dateOfCreation.find_first_of("₴!№;%:?*()_-+=^@~[]{}'|/<>,.");

		if (proverka == -1)
		{
			for (int i = 0; i < dateOfCreation.size(); i++)
			{
				if ((dateOfCreation[i] >= 'A' && dateOfCreation[i] <= 'Z' ||
					dateOfCreation[i] >= 'A' && dateOfCreation[i] <= 'Я' ||
					dateOfCreation[i] == 'ё' && dateOfCreation[i] == 'Ё' ||
					dateOfCreation[i] == 'ъ' && dateOfCreation[i] == 'Ъ' ||
					dateOfCreation[i] == 'і' && dateOfCreation[i] == 'І' ||
					dateOfCreation[i] == 'ы' && dateOfCreation[i] == 'Ы' ||
					dateOfCreation[i] == 'ї' && dateOfCreation[i] == 'Ї' ||
					dateOfCreation[i] >= '0' || dateOfCreation[i] <= '9'))
				{
					SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
					cout << endl << "Дата народження не відповідає формату ДД.ММ.РРРР! Спробуйте ще раз." << endl;
					SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
					break;
				}
			}
		}
		else if (stoi(number) <= 31 && stoi(month) <= 12 && stoi(year) <= rik)
		{
			break;
		}
		else if (stoi(number) > 31)
		{
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
			cout << endl << "Більше 31-го числа не існує! Спробуйте ще раз." << endl;
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		}
		else if (stoi(month) > 12)
		{
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
			cout << endl << "Більше 12-ти місяців не існує! Спробуйте ще раз." << endl;
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		}
		else if (stoi(year) > rik)
		{
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
			cout << endl << "Рік народження не може бути більше поточного! Спробуйте ще раз." << endl;
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		}
		else
		{
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
			cout << endl << "Ви ввели неправильні символи! Спробуйте ще раз." << endl;
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		}
	} while (1);

	mass[m].id2 = m + 1;
	mass[m].nameProfCom = nameProfCom;
	mass[m].fullNameCom = fullNameCom;
	mass[m].dateOfCreation = dateOfCreation;
}

int addItemsCom(Commission mass[], int m)
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	char choice2;

	do
	{
		addCom(mass, m);

		m++;

		SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
		cout << endl << "Дані збережено! Бажаєте додати ще комісію? (y/n)  ";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		cin >> choice2;
		cout << endl;

	} while (choice2 != 'n');

	return m;
}

void printItemsCom(Commission mass[], int m)
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "\n\n\t|------------------------------------------------------------------------------------------------------------------|\n";

	cout << "\t|";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "  №  ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "|";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "               Назва комісії                 ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "|";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "          ПІБ голови комісії          ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "|";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "     Дата створення    ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "|" << endl;

	cout << "\t|------------------------------------------------------------------------------------------------------------------|\n";

	for (int i = 0; i < m; i++)
	{
		cout << "\t|";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((11)));
		cout << setw(3) << mass[i].id2;
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		cout << setw(3) << "  |  ";
		cout << setw(41) << mass[i].nameProfCom;
		cout << setw(4) << "  | ";
		cout << setw(35) << mass[i].fullNameCom;
		cout << setw(3) << " |";
		cout << setw(17) << mass[i].dateOfCreation;
		cout << setw(8) << "|\n";
	}
	cout << "\t|------------------------------------------------------------------------------------------------------------------|\n\n";
}

void registerCom(Commission mass[], int m)
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << endl << "Всього зареєстрованих комісій: ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << m << "\n\n";

	for (int i = 0; i < m; i++)
	{
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((11)));
		cout << "\t" << i + 1 << ". \t";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		cout << mass[i].nameProfCom << endl;
	}
	cout << endl;
}

Deputies getItemFromStrDep(string line)
{
	Deputies item;
	int delim1, delim2, delim3, delim4, delim5, delim6;

	delim1 = line.find("|");
	delim2 = line.find("|", delim1 + 1);
	delim3 = line.find("|", delim2 + 1);
	delim4 = line.find("|", delim3 + 1);
	delim5 = line.find("|", delim4 + 1);
	delim6 = line.rfind("|");

	item.id = stoi(line.substr(0, delim1));
	item.fullName = line.substr(delim1 + 1, delim2 - delim1 - 1);
	item.dateOfBirth = line.substr(delim2 + 1, delim3 - delim2 - 1);
	item.address = line.substr(delim3 + 1, delim4 - delim3 - 1);
	item.telephone = stoi(line.substr(delim4 + 1, delim5 - delim4 - 1));
	item.idOfComInDep = stoi(line.substr(delim5 + 1, delim6 - delim5 - 1));

	return item;
}

int getItemsFromFileDep(string path, Deputies mas[])
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	int n = 0;                         // повертає кількість рядків
	string line;                       // рядок депутата
	ifstream fin(path);

	if (!fin)                          // якщо не вдалося відкрити файл
	{
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
		cout << "Помилка. Не вдалося відкрити файл 'Народні депутати України.txt'." << endl;
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		system("pause");
		return -1;
	}

	while (getline(fin, line))         // поки читання відбулося, виконувати
	{
		mas[n] = getItemFromStrDep(line);
		n++;
	}

	fin.close();
	return n;
}

void saveItemsToFileDep(Deputies mas[], int n, string path)
{
	ofstream fout(path, ios::app);

	for (int i = 0; i < n; i++)
	{
		fout << mas[i].id << "|" << mas[i].fullName << "|" << mas[i].dateOfBirth << "|" << mas[i].address << "|" << mas[i].telephone << "|" << mas[i].idOfComInDep << "\n";
	}

	fout.close();
}

void addDeputies(Deputies mas[], int n, Commission mass[], int m)
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	string fullName, dateOfBirth, address;
	int telephone, idOfComInDep;

	cin.ignore(32767, '\n');
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "Введіть прізвище, ім'я та по батькові депутата: ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	getline(cin, fullName);

	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "Введіть дату народження (ДД.ММ.РРРР): ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	getline(cin, dateOfBirth);

	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "Введіть адресу депутата: ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	getline(cin, address);

	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "Введіть телефон депутата:";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << " +380";
	cin >> telephone;

	registerCom(mass, m);

	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "Введіть номер комісії в якій знаходиться депутат: ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cin >> idOfComInDep;

	mas[n].id = n + 1;
	mas[n].fullName = fullName;
	mas[n].dateOfBirth = dateOfBirth;
	mas[n].address = address;
	mas[n].telephone = telephone;
	mas[n].idOfComInDep = idOfComInDep;
}

int addItemsDep(Deputies mas[], int n, Commission mass[], int m)
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	char choice;

	do
	{
		addDeputies(mas, n, mass, m);

		n++;

		SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
		cout << endl << "Дані збережено! Бажаєте додати ще депутата? (y/n)  ";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		cin >> choice;
		cout << endl;

	} while (choice != 'n');

	return n;
}

void printItemsDep(Deputies mas[], int n)
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "\n\n\t|----------------------------------------------------------------------------------------------------------------------------------------|\n";

	cout << "\t|";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "   №   ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "|";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "             ПІБ депутата             ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "|";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "   Дата народження  ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "|";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "           Адреса            ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "|";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "      Телефон     ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "|";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "   Номер комісії   ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "|" << endl;

	cout << "\t|----------------------------------------------------------------------------------------------------------------------------------------|\n";

	for (int i = 0; i < n; i++)
	{
		cout << "\t|  ";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((11)));
		cout << setw(3) << mas[i].id;
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		cout << setw(3) << "  | ";
		cout << setw(35) << mas[i].fullName;
		cout << setw(3) << "  | ";
		cout << setw(14) << mas[i].dateOfBirth;
		cout << setw(6) << " |";
		cout << setw(27) << mas[i].address;
		cout << setw(3) << "  |  +380";
		cout << setw(10) << mas[i].telephone;
		cout << setw(5) << "  |  ";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((11)));
		cout << setw(8) << mas[i].idOfComInDep;
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		cout << setw(11) << "|\n";
	}
	cout << "\t|----------------------------------------------------------------------------------------------------------------------------------------|\n\n";
}

Meeting getItemFromStrMeeting(string line3)
{
	Meeting item3;
	int ind1, ind2, ind3, ind4;

	ind1 = line3.find("|");
	ind2 = line3.find("|", ind1 + 1);
	ind3 = line3.find("|", ind2 + 1);
	ind4 = line3.rfind("|");

	item3.id3 = stoi(line3.substr(0, ind1));
	item3.location = line3.substr(ind1 + 1, ind2 - ind1 - 1);
	item3.idCom = stoi(line3.substr(ind2 + 1, ind3 - ind2 - 1));
	item3.themeOfThe = line3.substr(ind3 + 1, ind4 - ind3 - 1);

	return item3;
}

int getItemsFromFileMeeting(string path3, Meeting mas[])
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	int h = 0;                          // повертає кількість рядків
	string line3;                       // рядок засідань
	ifstream fin3(path3);

	if (!fin3)                          // якщо не вдалося відкрити файл
	{
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
		cout << "Помилка. Не вдалося відкрити файл 'Засідання.txt'." << endl;
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		system("pause");
		return -3;
	}

	while (getline(fin3, line3))         // поки читання відбулося, виконувати
	{
		mas[h] = getItemFromStrMeeting(line3);
		h++;
	}

	fin3.close();
	return h;
}

void saveItemsToFileMeeting(Meeting masss[], int h, string path3)
{
	ofstream fimout(path3, ios::app);

	for (int i = 0; i < h; i++)
	{
		fimout << masss[i].id3 << "|" << masss[i].location << "|" << masss[i].idCom << "|" << masss[i].themeOfThe << "\n";
	}

	fimout.close();
}

void numberAndNameOfTheCommission(Commission mass[], int m)
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "\n\t\t|---------------------------------------------------|\n";

	cout << "\t\t|";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "  №  ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "|";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "               Назва комісії                 ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "|";
	cout << "\n\t\t|---------------------------------------------------|\n";

	for (int i = 0; i < m; i++)
	{
		cout << "\t\t|";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((11)));
		cout << setw(3) << mass[i].id2;
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		cout << setw(3) << "  |  ";
		cout << setw(41) << mass[i].nameProfCom;
		cout << setw(4) << "  | \n";
	}
	cout << "\t\t|---------------------------------------------------|\n\n";
}

int addItemsMeeting(string path4, Meeting masss[], int h, Commission mass[], int m, Deputies mas[], int n)
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

	string location, themeOFThe;
	int idCom;

	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "Введіть номер засідання: ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cin >> path4;
	ofstream fileout(path4, ios::app);

	cin.ignore(32767, '\n');
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "Введіть місце проведення: ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	getline(cin, location);

	numberAndNameOfTheCommission(mass, m);

	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "Введіть номер комісії: ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cin >> idCom;

	cin.ignore(32767, '\n');
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "Введіть тему проведення: ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	getline(cin, themeOFThe);

	for (int i = 0; i < n; i++)
	{
		if (idCom == mas[i].idOfComInDep)
		{
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
			cout << endl << "Депутат ";
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((13)));
			cout << mas[i].fullName;
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
			cout << " був на засіданні? (1/0)  ";
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
			cin >> masss[i].sign;
		}
	}

	SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
	cout << endl << "Дані збережено!\n\n";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	system("pause");

	masss[h].id3 = stoi(path4);
	masss[h].location = location;
	masss[h].idCom = idCom;
	masss[h].themeOfThe = themeOFThe;

	h++;

	fileout << "Місце проведення засідання - " << location << endl
		<< "Номер комісії - " << idCom << endl
		<< "Тема проведення засідання - " << themeOFThe << endl;
	for (int i = 0; i < n; i++)
	{
		if (idCom == mas[i].idOfComInDep)
		{
			fileout << "Депутат " << mas[i].fullName << " - " << masss[i].sign << "\n";
		}
	}

	fileout.close();
	return h;
}

void printItemsFromFileName(string path4, Meeting masss[], int h, Deputies mas[], int n)
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

	ifstream fileout(path4);

	for (int j = 0; j < h; j++)
	{
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((11)));
		cout << "\n\tМісце проведення засідання - \t\t\t";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		cout << masss[j].location << endl;
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((11)));
		cout << "\tНомер комісії - \t\t\t\t";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		cout << masss[j].idCom << endl;
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((11)));
		cout << "\tТема проведення засідання - \t\t\t";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		cout << masss[j].themeOfThe << endl;
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((11)));
		for (int i = 0; i < n; i++)
		{
			if (masss[j].idCom == mas[i].idOfComInDep)
			{
				SetConsoleTextAttribute(hConsoleHandle, (WORD)((11)));
				cout << "\tДепутат ";
				SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
				cout << mas[i].fullName;
				SetConsoleTextAttribute(hConsoleHandle, (WORD)((11)));
				cout << " - \t";
				SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
				if (masss[i].sign == stoi("1"))
				{
					cout << "присутній\n";
				}
				else
				{
					cout << "відсутній\n";
				}
			}
		}
	}
	fileout.close();
}

void printItemsMeeting(Meeting masss[], int h)
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "\n\n\t|----------------------------------------------------------------------------------------------------------------------|\n";

	cout << "\t|";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "  №  ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "|";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "           Місце проведення            ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "|";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "  Номер комісії   ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "|";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "                    Тема проведення                  ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "|" << endl;

	cout << "\t|----------------------------------------------------------------------------------------------------------------------|\n";

	for (int i = 0; i < h; i++)
	{
		cout << "\t|";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((11)));
		cout << setw(3) << masss[i].id3;
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		cout << setw(3) << "  |   ";
		cout << setw(27) << masss[i].location;
		cout << setw(11) << "  | ";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((11)));
		cout << setw(9) << masss[i].idCom;
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		cout << setw(15) << " |      ";
		cout << setw(41) << masss[i].themeOfThe;
		cout << setw(8) << "|\n";
	}

	cout << "\t|----------------------------------------------------------------------------------------------------------------------|\n\n";
}

bool printIdCom(Commission mass[], int m, int b)
{
	bool flag2 = 0;

	for (int i = 0; i < m; i++)
	{
		if (mass[i].id2 == b)
		{
			flag2 = 1;
		}
	}
	return flag2;
}

void informAboutTheComByNumber(Commission mass[], int m, int b)
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

	for (int i = 0; i < m; i++)
	{
		if (mass[i].id2 == b)
		{
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((13)));
			cout << endl << "\tКомісія - ";
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
			cout << "\t\t" << "'" << mass[i].nameProfCom << "'" << endl;
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((13)));
			cout << "\tЗареєстрована - ";
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
			cout << "\t" << mass[i].dateOfCreation << endl;
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((13)));
			cout << "\tГолова комісії - ";
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
			cout << "\t" << mass[i].fullNameCom << endl << endl;
		}
	}
}

int removalOfCom(Commission mass[], int m, int delC)
{
	for (int i = delC - 1; i < m - 1; i++)
	{
		mass[i] = mass[i + 1];
		mass[i].id2--;
	}

	return m - 1;
}

bool printIdDep(Deputies mas[], int n, int a)
{
	bool flag = 0;

	for (int i = 0; i < n; i++)
	{
		if (mas[i].id == a)
		{
			flag = 1;
		}
	}
	return flag;
}

void registerDep(Deputies mas[], int n)
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << endl << "Всього зареєстрованих депутатів: ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << n << "\n\n";

	for (int i = 0; i <= n - 1; i++)
	{
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((11)));
		cout << "\t" << i + 1 << ". \t";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		cout << mas[i].fullName << endl;
	}
	cout << endl;
}

void informAboutTheDepByNumber(Deputies mas[], int n, int a)
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

	for (int i = 0; i < n; i++)
	{
		if (mas[i].id == a)
		{
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((13)));
			cout << endl << "\tПІБ депутата - ";
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
			cout << "\t\t\t" << "'" << mas[i].fullName << "'" << endl;
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((13)));
			cout << "\tДата народження - ";
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
			cout << "\t\t" << mas[i].dateOfBirth << endl;
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((13)));
			cout << "\tАдреса - ";
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
			cout << "\t\t\t" << mas[i].address << endl;
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((13)));
			cout << "\tТелефон - ";
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
			cout << "\t\t\t" << "+380 ";
			cout << mas[i].telephone << endl;
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((13)));
			cout << "\tНомер комісії - ";
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
			cout << "\t\t" << mas[i].idOfComInDep << endl << endl;
		}
	}
}

int removalOfDep(Deputies mas[], int n, int delD)
{
	for (int i = delD - 1; i < n - 1; i++)
	{
		mas[i] = mas[i + 1];
		mas[i].id--;
	}

	return n - 1;
}

bool printIdMeeting(Meeting masss[], int h, int fileName)
{
	bool flag3 = 0;

	for (int i = 0; i < h; i++)
	{
		if (masss[i].id3 == fileName)
		{
			flag3 = 1;
		}
	}
	return flag3;
}

void registerMeeting(Meeting masss[], int h)
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << endl << "Всього зареєстрованих засідань: ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << h << "\n\n";

	for (int i = 0; i < h; i++)
	{
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((11)));
		cout << "\t" << i + 1 << ". \t";
		SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
		cout << masss[i].themeOfThe << endl;
	}
	cout << endl;
}

void informAboutTheMeetingByNumber(Meeting masss[], int h, int c)
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

	for (int i = 0; i < h; i++)
	{
		if (masss[i].id3 == c)
		{
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((13)));
			cout << endl << "\tМісце проведення - ";
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
			cout << "\t\t" << "'" << masss[i].location << "'" << endl;
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((13)));
			cout << "\tНомер комісії - ";
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
			cout << "\t\t" << masss[i].id3 << endl;
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((13)));
			cout << "\tТема проведення - ";
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
			cout << "\t\t" << masss[i].themeOfThe << endl << endl;
		}
	}
}

int removalOfMeeting(Meeting masss[], int h, int delM)
{
	for (int i = delM - 1; i < h - 1; i++)
	{
		masss[i] = masss[i + 1];
		masss[i].id3--;
	}

	return h - 1;
}

void numberOfDeputiesPresentDtMeetings(Meeting masss[], int n)
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		if (masss[i].sign == stoi("1"))
		{
			sum++;
		}
	}

	cout << "\n\n\n\n\n\t\t\t\t\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
	cout << "\t\t\t\t\t\t\t|  ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
	cout << "Кількість присутніх депутатів на засіданнях";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "  |  ";
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((11)));
	cout << setw(3) << sum;
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
	cout << "  |\n";
	cout << "\t\t\t\t\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n\n";
}
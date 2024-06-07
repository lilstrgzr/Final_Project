#include "PersonsAndCharacteristics.hpp"



int main() {
	setlocale(LC_ALL, "russian");

	Person p1{ "Майк Джонс", "Частный детектив",};
	Person p2{ "Карен Картер", "Врач" };
	Person P3{ "Джек Хартли", "Администратор" };
	Person p4{"Сьюзен Смит","Управляющая кафе"};
	Person p5{"Габриэлла Медина","Домработница"};
	Person p6{"Мигель Медина","Садовник"};
	Person p7{"Хулен Альварес","Главврач"};
	Person p8{"Пол Сандерс","Ассистен врача"};
	Person p9{ "Эдвард Шарк","Ректор медицинского университета" };
	Person p10{"Лесли Маршал", "Студент"};
	Person p11{"Тина Смит","Медсестра"};
	evidence e1 = { "Чек", "Чек из строительного магазина на покупку скотча, веревок, и прочего оборудованя для связывания" };
	evidence e2 = { "Следы шин", "Следы шин, не известного происхождения, возможно на этой машине похитили Карен" };
	evidence e3{ "История болезни","История болезни женщины, которая погибла из-за врачебной ошибки" };
	evidence e4{ "Ежедневник Карен","Ежедневник Карен, на последней странице был написан распорядок дня, в который она пропала" };
	std::cout << "Перед началом игры разверните пожалуйста консоль на весь экран!!!";
	std::cout << "\n\n";
	std::cout << R"(Майк Джонс сидел в своем кабинете. Он был отличным частным детективом, получившим хорошую репутацию в штате.
На календаре была среда, за окном светило солнце, Майк читал материалы очередного дела. 
Неожиданно тишину прервал стук в дверь.
"Войдите"- спокойным голосом сказал Майк.
За дверью показался молодой человек лет 25, высокий, худощавый, слегка сгорбленный.
"Джейдон Картер" - представился незнакомец.
"Мне нужна ваша помощь, моя сестра Карен не выходит на связь уже три дня, я переживаю, не могло ли случится чего-то плохого." - с волнением в голосе начал Джейдон.
Выснив все детали, Майк решил ознакомиться с локациями, где Карен видели в последний день, и решил начать с кафе,
 где пропавшая была частым гостем, тем более, что офис Майка был совсем не подалеку. )";
	std::cout << "\n\n";
	
	int Act1;
	do {
		std::cout << "Выберите действие:\n";
		std::cout << "1.Пойти в кафе.\n";
		std::cout << "2.Ознакомиться с уликами\n";
		std::cout << "3.Показатели Майка\n";
		std::cin >> Act1;

		switch (Act1) {
		case 1: {
			cafe();
			break;
		}
		case 2: {
			std::cout << "К сожалению улик сейчас нет.\n\n";
			break;
		}
		case 3: {
			Print_pers(p1);
			Print_Char();
			std::cout << '\n';
			break;
		}
		default:

			break;
		}

	} while (Act1 != 1);


	std::cout << "\n\n";
	random_event1();
	std::cout << "\n\n";


	int Act2;
	do {
		std::cout << "Выберите действие:\n";
		std::cout << "1.Поехать в дом Карен.\n";
		std::cout << "2.Ознакомиться с уликами\n";
		std::cout << "3.Показатели Майка\n";
		std::cin >> Act2;

		switch (Act2) {
		case 1: {
			house();
			break;
		}
		case 2: {
		std::cout << "Улика №1 - ";
		Print_evi(e1);
			break;
		}
		case 3: {
			Print_pers(p1);
			Print_Char();
			std::cout << '\n';
			break;
		}
		default:

			break;
		}

	} while (Act2 != 1);

	std::cout << "\n\n";
	fight();
	std::cout << "\n\n";

	int Act3;
	do {
		std::cout << "Выберите действие:\n";
		std::cout << "1.Посетить больницу, где работает Карен.\n";
		std::cout << "2.Ознакомиться с уликами\n";
		std::cout << "3.Показатели Майка\n";
		std::cin >> Act3;

		switch (Act3) {
		case 1: {
			hospital();
			break;
		}
		case 2: {
			std::cout << "Улика №1 - ";
			Print_evi(e1);
			std::cout << "Улика №2 - ";
			Print_evi(e2);
			break;
		}
		case 3: {
			Print_pers(p1);
			Print_Char();
			std::cout << '\n';
			break;
		}
		default:

			break;
		}

	} while (Act3 != 1);

	std::cout << "\n\n";
	random_event2();
	std::cout << "\n\n";

	std::cout << "\n\n";
	random_event3();
	std::cout << "\n\n";

	int Act4;
	do {
		std::cout << "Выберите действие:\n";
		std::cout << "1.Посетить университет в котором Карен вела лекции.\n";
		std::cout << "2.Ознакомиться с уликами\n";
		std::cout << "3.Показатели Майка\n";
		std::cin >> Act4;

		switch (Act4) {
		case 1: {
			university();
			break;
		}
		case 2: {
			std::cout << "Улика №1 - ";
			Print_evi(e1);
			std::cout << "Улика №2 - ";
			Print_evi(e2);
			std::cout << "Улика №3 - ";
			Print_evi(e3);
			break;
		}
		case 3: {
			Print_pers(p1);
			Print_Char();
			std::cout << '\n';
			break;
		}
		default:

			break;
		}

	} while (Act4 != 1);

	std::cout << "\n\n";
	fight2();
	std::cout << "\n\n";

	int Act5;
	do {
		std::cout << "Выберите действие:\n";
		std::cout << "1.Продолжить историю.\n";
		std::cout << "2.Ознакомиться с уликами\n";
		std::cout << "3.Показатели Майка\n";
		std::cin >> Act5;

		switch (Act5) {
		case 1: {
			endings();
			break;
		}
		case 2: {
			std::cout << "Улика №1 - ";
			Print_evi(e1);
			std::cout << "Улика №2 - ";
			Print_evi(e2);
			std::cout << "Улика №3 - ";
			Print_evi(e3);
			std::cout << "Улика №4 - ";
			Print_evi(e4);
			std::cout << '\n';
			break;
		}
		case 3: {
			Print_pers(p1);
			Print_Char();
			std::cout << '\n';
			break;
		}
		default:
			break;
		}

	} while (Act5 != 1);

	std::cout << "\n";
	std::cout << "Большое спасибо, что прошли небольшую историю детектива Майка Джонса, надеюсь, это небольшое расследование вызвало у вас интерес и эмоции. Спасибо за уделенное время!";
	std::cout << "\n";

	return 0;
}

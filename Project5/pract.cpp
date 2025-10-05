#include <iostream>
using namespace std;

int main()
{
	//task1
	/*Користувач вводить з клавіатури дві межі
		діапазону і число.Якщо число не потрапляє в діапазон,
		програма просить користувача повторно ввести число,
		і так доти, доки він не введе число правильно.*/

	/*int start;
	cout << "enter first number :: ";
	cin >> start;
	int end;
	cout << "enter second number :: ";
	cin >> end;

	int number;
	cout << "your number --> ";
	cin >> number;

	while (number < start || number > end) {
		cout << "Wrong answer!! Try again" << endl;
		cout << "Your number --> ";
		cin >> number;
	}

	cout << "Good!! That's all" << endl;*/


	//task2
	//Написати імітацію касового апарату для
	//	крамниці, яка торгує новорічними товарами.Касир має
	//	вибрати товар зі списку, ввести його кількість, потім вибрати наступний товар.Після 
	//	завершення введення вивести на екран всю суму покупки.Передбачити наявність
	//	знижки.У списку товарів має бути не менше ніж 4 товари,
	//	має відображатися їхня ціна.Передбачити неправильно
	//	введені дані.
	//	  ■ Реалізувати можливість обслуговування декількох
	//	клієнтів поспіль;
	//    ■ Зберігання загальної виручки крамниці;
	//    ■ Обмежити кількість товару в крамниці.

	cout << "	SHOP	" << endl;
	cout << "	1. Christmas tree;	" << endl;
	cout << "	2. Sweets;	" << endl;
	cout << "	3. Toys for children;	" << endl;
	cout << "	4. Tea;	" << endl;
	cout << "	5. Tangerines and oranges;	" << endl;
	cout << "	6. Hot cocao;	" << endl;
	cout << "	7. Cookie.	" << endl;

	int item1;
	cout << "Enter the number next to your product --> ";
	cin >> item1;
	int count1;
	cout << "Enter number of priducts --> ";
	cin >> count1;

	int item2;
	cout << "Enter the number next to your product --> ";
	cin >> item2;
	int count2;
	cout << "Enter number of priducts --> ";
	cin >> count2;

	int item3;
	cout << "Enter the number next to your product --> ";
	cin >> item3;
	int count3;
	cout << "Enter number of priducts --> ";
	cin >> count3;

	int item4;
	cout << "Enter the number next to your product --> ";
	cin >> item4;
	int count4;
	cout << "Enter number of priducts --> ";
	cin >> count4;

	int dis;
	cout << "do you have some discount?(yes - 1 or no 2)";
	cin >> dis;

	if (dis == 1) {
		int dis1;
		cout << "What discount? ";
		cin >> dis1;
		
	}
	else
	{
		cout << "OK";
	}

}
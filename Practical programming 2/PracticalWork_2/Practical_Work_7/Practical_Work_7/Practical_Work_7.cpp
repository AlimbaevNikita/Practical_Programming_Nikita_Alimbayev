#include <iostream>
#include <string>
#include <memory> 
using namespace std;

	//Задание_1
	template<typename T, typename U>
	auto sub(T a, U b) -> decltype(a - b)
	{
		return a - b;
	}
	//Задание_1

	//Задание_2
	template<typename T>
	class Pair
	{
	private:
		T m_first;
		T m_second;

	public:
		Pair(const T& first, const T& second)
			: m_first(first), m_second(second)
		{
		}

		const T& first() const { return m_first; }
		const T& second() const { return m_second; }
	};
	//Задание_2

	//Задание_3
	template<typename T>
	T find_min(T arr[], int size)
	{
		T min_val = arr[0];
		for (int i = 1; i < size; ++i)
		{
			if (arr[i] < min_val)
			{
				min_val = arr[i];
			}
		}
		return min_val;
	}
	//Задание_3

	//Задание_4
	class Person {
	public:
		virtual double GetAvgIncome() = 0;
		virtual double GetAvgExpenses() = 0;
		virtual void Print() = 0;
		virtual void Read() = 0;
	protected:
		string name;
		int age;
		char gender;
	};

	class Preschooler : public Person {
	public:
		double GetAvgIncome() override { return 0; }
		double GetAvgExpenses() override { return 500; }
		void Print() override { cout << "Preschooler\n"; }
		void Read() override {}
	};

	class Schoolchild : public Person {
	public:
		double GetAvgIncome() override { return 100; }
		double GetAvgExpenses() override { return 1000; }
		void Print() override { cout << "Schoolchild\n"; }
		void Read() override {}
	};

	class Student : public Person {
	public:
		double GetAvgIncome() override { return 500; }
		double GetAvgExpenses() override { return 2000; }
		void Print() override { cout << "Student\n"; }
		void Read() override {}
	};

	class WorkingPerson : public Person {
	public:
		double GetAvgIncome() override { return 5000; }
		double GetAvgExpenses() override { return 3000; }
		void Print() override { cout << "Working Person\n"; }
		void Read() override {}
	};

	template<class T>
	class Array {
	public:
		Array(int size) : size(size) { arr = new T * [size]; }
		T* operator[](int index) { return arr[index]; }
		~Array() { for (int i = 0; i < size; ++i) delete arr[i]; delete[] arr; }
	private:
		T** arr;
		int size;
	};
	//Задание_4

int main()
{
	//Задание_1
	std::cout << endl << sub(3, 2) << '\n';
	std::cout << sub(3.5, 2) << '\n';
	std::cout << sub(4, 1.5) << '\n';
	//Задание_1

		//Задание_2
		Pair<int> p1{ 5, 8 };
		std::cout << endl << "Pair: " << p1.first() << ' ' << p1.second() << '\n';
		const Pair<double> p2{ 2.3, 4.5 };
		std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
		//Задание_2

			//Задание_3
			int int_arr[] = { 10, 20, 5, 15, 30, 25, 35, 45, 40, 50 };
			double double_arr[] = { 3.5, 4.6, 1.2, 6.8, 2.3, 5.1, 7.9, 8.2, 9.0, 0.5 };

			std::cout << endl << "Minimum integer value: " << find_min(int_arr, 10) << '\n';
			std::cout << "Minimum double value: " << find_min(double_arr, 10) << '\n';
			//Задание_3

				//Задание_4
				cout << endl <<"Class hierarchy: Person -> Preschooler, Schoolchild, Student, WorkingPerson\n";
				Person** people = new Person * [4];
				people[0] = new Preschooler();
				people[1] = new Schoolchild();
				people[2] = new Student();
				people[3] = new WorkingPerson();
					for (int i = 0; i < 4; ++i) {
						people[i]->Print();
						cout << "Average Income: " << people[i]->GetAvgIncome() << endl;
						cout << "Average Expenses: " << people[i]->GetAvgExpenses() << endl;
					}
				//Задание_4

				return 0;
}
			

#include <iostream>
#include <map>
#include <string>
#include <vector>



using namespace std;

enum class MLPSkill {
    Magic,
    Singing,
    Flying,
    AnimalCare,
    Fashion,
    Farming,
    Diplomacy,
    Astronomy,
    ChaosMagic,
    FireBreath
};

enum class CandyBox {
    Unknown,
    MilkChocolates,
    DarkChocolates,
    AssortedChocolates,
    Gummies,
    JellyBeans,
    SourCandies
};

struct CandyBoxInfo {
    string name;
    double weight;
    double price;
};

struct Person {
    string firstName;
    string lastName;
};

enum class RaceOrigin {
    Unicorn,
    Pegasus,
    EarthPony,
    Alicorn,
    CrystalPony
};

struct RacialTrait {
    string name;
    string description;
};

struct MyPonyRace {
    string name;
    string description;
    RaceOrigin origin;
    RacialTrait trait;
    string traitDescription;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    map<MLPSkill, string> skillNames = {
    { MLPSkill::Magic, "Магия" },
    { MLPSkill::Singing, "Пение" },
    { MLPSkill::Flying, "Полет" },
    { MLPSkill::AnimalCare, "Уход за животными" },
    { MLPSkill::Fashion, "Модельный бизнес" },
    { MLPSkill::Farming, "Фермерство" },
    { MLPSkill::Diplomacy, "Дипломатия" },
    { MLPSkill::Astronomy, "Астрономия" },
    { MLPSkill::ChaosMagic, "Магия хаоса" },
    { MLPSkill::FireBreath, "Огненное дыхание" }
    };

    MLPSkill characterSkill = MLPSkill::Magic;

    cout << "Навык персонажа: " << skillNames[characterSkill] << endl;


        CandyBoxInfo box1, box2;

        cout << "Введите название, вес и цену первой коробки конфет через пробел: ";
        cin >> box1.name >> box1.weight >> box1.price;

        cout << "Введите название, вес и цену второй коробки конфет через пробел: ";
        cin >> box2.name >> box2.weight >> box2.price;

        double totalPrice = box1.price + box2.price; 

        cout << "Общая стоимость двух коробок конфет: " << totalPrice << " битсов." << endl;

            Person person;
            cout << "Введите имя: ";
            cin >> person.firstName;

            cout << "Введите фамилию: ";
            cin >> person.lastName;

            cout << "Полное имя: " << person.firstName << person.lastName << endl;

                int n;
                cout << "Введите количество учеников: ";
                cin >> n;

                vector<string> names(n);
                vector<int> grades(n * 4);

                for (int i = 0; i < n; i++) {
                    cout << "Введите фамилию ученика #" << i + 1 << ": ";
                    cin >> names[i];
                    cout << "Введите оценки для " << names[i] << " по четырем предметам (по пятибалльной шкале): ";
                    for (int j = 0; j < 4; j++) {
                        cin >> grades[i * 4 + j];
                    }
                }

                cout << "Ученики с средним баллом 4 и выше: ";

                for (int i = 0; i < n; i++) {
                    int sum = 0;
                    for (int j = 0; j < 4; j++) {
                        sum += grades[i * 4 + j];
                    }
                    double average = sum / 4.0;
                    if (average >= 4.0) {
                        cout << names[i] << " ";
                    }
                }

                cout << endl;

                    int numStudents;
                    cout << "Введите количество учеников: ";
                    cin >> numStudents;

                    string studentName;
                    int grade1, grade2, grade3, grade4;
                    double avgGrade, totalGrade = 0;

                    cout << "Введите фамилии учеников и их оценки по 10-балльной шкале:" << endl;
                    for (int i = 0; i < numStudents; i++) {
                        cout << "Ученик " << i + 1 << ": ";
                        cin >> studentName >> grade1 >> grade2 >> grade3 >> grade4;
                        totalGrade = grade1 + grade2 + grade3 + grade4;
                        avgGrade = totalGrade / 4.0;

                        if (avgGrade > 5.0) {
                            cout << studentName << endl;
                        }
                    }

                        MyPonyRace race;
                        race.name = "Аликорн";
                        race.description = "Сильнейшие существа";
                        race.origin = RaceOrigin::Unicorn;
                        race.trait = { "Крылорог", "have dick" };
                        race.traitDescription = "Это редкая магическая особенность, которая наделяет пони как рогом единорога, так и крыльями пегаса.";

                        cout << "Раса: " << race.name << endl;
                        cout << "Описание расы: " << race.description << endl;
                        cout << "Происхождение расы: ";

                        switch (race.origin) {
                        case RaceOrigin::Unicorn:
                            cout << "Единорог";
                            break;
                        case RaceOrigin::Pegasus:
                            cout << "Пегас";
                            break;
                        case RaceOrigin::EarthPony:
                            cout << "Земной пони";
                            break;
                        case RaceOrigin::Alicorn:
                            cout << "Аликорн";
                            break;
                        case RaceOrigin::CrystalPony:
                            cout << "Кристальный пони";
                            break;
                        }

                        cout << endl;
                        cout << "Расовая особенность: " << race.trait.name << endl;
                        cout << "Описание расовой особенности: " << race.traitDescription << endl;


    return 0;

}

#include <iostream>
#include <vector>
#include <sstream>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;

class Observation {
private:
	string name;
	double kg;
	double gr;
	int firstDay;
	int firstMonth;
	int firstYear;
	int day;
	int month;
	int year;
public:
	Observation();
	~Observation();

	string getName();
	int getKg();
	int getGr();
	int getDay();
	int getMonth();
	int getYear();
	void setName(string name);
	void randKg();
	void randGr();
	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);
	int startDay();
	int startMonth();
	int startYear();
};

Observation::Observation() {
	firstDay = 1;
	firstMonth = 1;
	firstYear = 2022;
}

Observation::~Observation() {

}

string Observation::getName() {
	return name;
}

int Observation::getKg() {
	return kg;
}

int Observation::getGr() {
	return gr;
}

int Observation::getDay() {
	return day;
}

int Observation::getMonth() {
	return month;
}

int Observation::getYear() {
	return year;
}

void Observation::setName(string newName) {
	name = newName;
}

void Observation::randKg() {
	kg = 50 + rand() % 110;
}

void Observation::randGr() {
	gr = 1 + rand() % 50;
}

void Observation::setDay(int newDay) {
	day = newDay;
}

void Observation::setMonth(int newMonth) {
	month = newMonth;
}

void Observation::setYear(int newYear) {
	year = newYear;
}

int Observation::startDay() {
	return firstDay;
}

int Observation::startMonth() {
	return firstMonth;
}

int Observation::startYear() {
	return firstYear;
}


class FloorScales {
private:
	vector<Observation> observations;
	string name;
	int day;
	int month;
	int year;
	int kg;
	int gr;
public:
	FloorScales();
	~FloorScales();
	void startDate();
	void addObservation();
	void findWeight();
	void MinWeightMonth();
	void MaxWeightMonth();
	void MidWeightMonth();
};

FloorScales::FloorScales() {

}

FloorScales::~FloorScales() {

}

void FloorScales::startDate() {
	Observation temp;
	cout << "��������� ���� ����������: " << temp.startDay() << "." << temp.startMonth() << "." << temp.startYear() << endl;
}

void FloorScales::addObservation() {
	Observation observation = Observation();
	Observation temp;
	bool flag = true;

	cout << "������� ��� ������������: ";
	cin >> this->name;
	cout << "������� ���� ������: ";
	cin >> this->day;
	cout << "������� ����� ������: ";
	cin >> this->month;
	cout << "������� ��� ������: ";
	cin >> this->year;

	observation.setName(this->name);

	for (int i = 0; i <= observations.size(); i++) {
		temp = observations.at(i);
		if (temp.getName() == name || temp.getDay() == day || temp.getMonth() == month || temp.getYear() == year) {
			temp.randKg();
			temp.randGr();
			cout << "��� ����� ���: " << temp.getKg() << "�� " << temp.getGr() << "��" << endl;
			flag = false;
		}
	}
	if (flag) {
		observation.setDay(this->day);
		observation.setMonth(this->month);
		observation.setYear(this->year);
		observation.randKg();
		observation.randGr();
		cout << "��� ���: " << observation.getKg() << "�� " << observation.getGr() << "��" << endl;
	}
	observations.push_back(observation);
}

void FloorScales::findWeight() {
	cout << "������� ���: ";
	cin >> this->name;
}

void FloorScales::MinWeightMonth() {

}

void FloorScales::MidWeightMonth() {

}

void FloorScales::MaxWeightMonth() {

}




int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));


	return 0;
}
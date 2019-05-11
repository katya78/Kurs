#include "Hasky.hpp"
#include "HuaHua.hpp"
#include "Labrador.hpp"
#include "Pudel.hpp"
#include "Sgnaucer.hpp"
#include "Spaniel.hpp"
#include <fstream>

using namespace std;

DogBase* getDog(const std::string& name) {
	if (name == "Pudel") {
		return new Pudel;
	}
	else if (name == "Spaniel") {
		return new Spaniel;
	}
	else if (name == "HuaHua") {
		return new HuaHua;
	}
	else if (name == "Labrador") {
		return new Labrador;
	}
	else if (name == "Sgnaucer") {
		return new Sgnaucer;
	}
	else if (name == "Hasky") {
		return new Hasky;
	}
	else {
		return nullptr;
	}
}

string ReadType() {
	cout << "\n1. ��������\n2. ������\n3. ��������\n4. �������\n5. �����\n6. ��������\n";
	int a;
	cin >> a;
	switch (a) {
	case 1:
		return "Spaniel";
	case 2:
		return "Pudel";
	case 3:
		return "HuaHua";
	case 4:
		return "Sgnaucer";
	case 5:
		return "Hasky";
	case 6:
		return "Labrador";
	}
}
int main() {
	setlocale(LC_ALL, "");
	const int maxElements = 100; //������������ ���-�� ��������� � �������
	string temp;
	int realSize = 0;
	DogBase* dogs[maxElements];
	while (true) {
		system("cls");
		cout << "1. ������� �� �������\n2. ������� �� �����\n3. ��������\n4. ������� ��\n5. �������� � ����\n";
		int a;
		cin >> a;
		if (a == 1) {
			dogs[realSize] = getDog(ReadType());
			dogs[realSize]->read(cin);
			realSize++;
		}
		else if (a == 2) {
			cout << "������� ��� �����: ";
			cin >> temp;
			ifstream in(temp);
			in >> temp;
			dogs[realSize] = getDog(temp);
			dogs[realSize]->fread(in);
			realSize++;
		}
		else if (a == 3) {
			for (int i = 0; i < realSize; ++i) {
				delete dogs[i];
			}
			realSize = 0;
		}
		else if (a == 4) {
			for (int i = 0; i < realSize; ++i) {
				dogs[i]->print(cout);
			}
		}
		else if (a == 5) {
			cout << "������� ������: ";
			int a;
			cin >> a;
			cout << "������� �������� �����: ";
			cin >> temp;
			dogs[a]->fprint(ofstream(temp));

		}
		cout << "\n"; system("pause");
	}
}
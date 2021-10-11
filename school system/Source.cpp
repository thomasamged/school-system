#include <iostream>
#include <cmath>

using namespace std;
struct student {
	string name;
	double age;
	double marks[5];
	int roll;
};
void input(student f[], int n) {
	for (int j = 0; j < n; j++) {
		cin >> f[j].name >> f[j].age >> f[j].roll;
		for (int i = 0; i < 5; i++) {
			cin >> f[j].marks[i];
		}
	}

}
void output(student f[], int n) {
	for (int j = 0; j < n; j++) {
		cout << f[j].name << endl << f[j].age << endl << f[j].roll;
		for (int i = 0; i < 5; i++) {
			cout << f[j].marks[i] << endl;
		}
	}
}
void print(student f[], int n) {
	for (int i = 0; i < n; i++) {
		if (f[i].age == 14) {
			cout << f[i].name << endl;
		}
	}
}

void evenroll(student f[], int n) {
	for (int i = 0; i < n; i++) {
		if (f[i].roll % 2 == 0) {
			cout << f[i].name << endl;
		}
	}
}
void print_details(student f[], int n, int r) {
	for (int i = 0; i < n; i++) {

		if (f[i].roll == r) {
			cout << f[i].name << f[i].age << f[i].roll;
		}
		for (int j = 0; j < 5; j++) {
			cout << f[i].marks[j] << endl;
		}
	}
}
void first(student f[], int n) {
	int max = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5; j++) {
			if (f[i].marks[j] > f[max].marks[j]) {
				max = i;

			}
			cout << f[max].name << endl;
		}
	}

}


int main()
{
	int number;
	student f[2];
	input(f, 2);
	output(f, 2);
	print(f, 2);
	evenroll(f, 2);
	cin >> number;
	print_details(f, 2, number);
	first(f, 2);
	system("pause");
	return 0;

}
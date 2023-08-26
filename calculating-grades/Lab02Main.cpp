#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string name;
	float homeworkScore;
	float testScore;
	float quizScore;
	float attendanceScore;
	float totalScore = 89.9;

	cout << "Please enter the students name >>> ";
	cin >> name;
	cout << endl;

	cout << "Please enter the homework score >>> ";
	cin >> homeworkScore;	// 20%
	cout << endl;

	cout << "Please enter the test score >>> ";
	cin >> testScore;		// 50%
	cout << endl;

	cout << "Please enter the quiz score >>> ";
	cin >> quizScore;		// 20%
	cout << endl;

	cout << "Please enter the attendance score >>> ";
	cin >> attendanceScore;	// 10%
	cout << endl << endl;

	testScore = (homeworkScore * 0.2) + (testScore * 0.5) + (quizScore * 0.2) + (attendanceScore * 0.1);

	cout << "Grades for " << name << endl;
	cout << "   Homework\t: " << homeworkScore << endl;
	cout << "   Test\t\t: " << testScore << endl;
	cout << "   Quiz\t\t: " << quizScore << endl;
	cout << "   Atendance\t: " << attendanceScore << endl;
	cout << "=====================================" << endl;
	cout << " Total Score\t: " << totalScore << endl;

}
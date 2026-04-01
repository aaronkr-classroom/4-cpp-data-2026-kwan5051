// 중간고사, 기말고사, 그리고 과제 점수 몇개를 받고
//마지막 평균 결과 점수를 계산하기.
#include <algorithm> //sort()
#include <ios>
#include <iostream>
#include <iomanip> // setprecision()
#include <string>
#include <stdexcept> //istream& 위해
#include <vector>

using namespace std;

typedef vector<double> ::size_type vec_sz;

//함수 원형 정의문
istream& read_hw(istream&, vector<double>&);
double grade(double, double, double);
double grade(double, double, const vector<double>&);
double median(vector<double>);

int main() {
	//학생의 이름을 묻고 읽음
	cout << "First name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	//중간고사와 기말고사 점수를 묻고 읽음
	cout << "Mindterm + Final grades: ";
	double midterm, final;
	cin >> midterm >> final;

	//과제 점수를 묻고 읽음
	cout << " Enter all HW grades, then EOF: ";
	vector<double> homework;

	//new 함수 read_hw()
	read_hw(cin, homework); //사실 객체 필요해서 참조로 보냄
	
	//종합 점수를 계산해 생성
	double final_grade = grade(midterm, final, homework); //new 계산하는 함수 grade()
	streamsize prec = cout.precision();
	cout << "Final grade: " << setprecision(3) <<
		final_grade << setprecision(prec) << endl;

	return 0;
}
//입력 스트림에서 과제 점수를 읽어서 vector<double>에 넣음
istream& read_hw(istream& in, vector<double>& hw) {
	if (in) {
		//이전 내용을 제거
		hw.clear();

		//과제 점수를 읽음
		double x;

		while (in >> x) {
			hw.push_back(x);
		}

		//다음 학생의 점수 입력 작업을 고려해 스트림을 지움
		in.clear();
	}
}




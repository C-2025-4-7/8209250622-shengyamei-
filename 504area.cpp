#include <iostream>
using namespace std;
class Student {
public:
	int id;
	int score;
	void input() {
		cin >> id >> score;
	}
};
void max(Student* p, int n) {
	int maxScore = p->score;
	int maxId = p->id;
	for (int i = 1; i < n; i++)
	{
		p++;
		if (p->score > maxScore) {
			maxScore = p->score;
			maxId = p->id;
		}
	}
	cout << "最高成绩为：" << maxScore << endl;
	cout << "对应学号为：" << maxId << endl;
}
int main()
{
	Student studs[5];
	cout << "请输入5个学生的学号和成绩：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "学生" << i + 1 << ":";
		studs[i].input();
		max(studs, 5);
		return 0;
	}

}
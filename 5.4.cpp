#include <iostream>
using namespace std;

class Student
{
private:
    int id;
    double score;

public:

    Student(int id, double score)
    {
        this->id = id;
        this->score = score;
    }

    friend int max(Student students[],int size);
};

int max(Student students[],int size)
{
    int maxid = students->id;
    double maxscore = students->score;
    while (size--)
    {
        if (students->score > maxscore)
        {
            maxid = students->id;
            maxscore = students->score;
        }
        students++;
    }
    return maxid;
}

int main()
{
    int id;
    double score;
    cin >> id >> score;
    Student A = Student(id, score);
    cin >> id >> score;
    Student B = Student(id, score);
    cin >> id >> score;
    Student C = Student(id, score);
    cin >> id >> score;
    Student D = Student(id, score);
    cin >> id >> score;
    Student E = Student(id, score);
    Student students[5] = { A,B,C,D,E };
    cout << max(students,5) << endl;
}

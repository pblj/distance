#include <iostream>
using namespace std;



class Point
{
	int X; //��������� ����� �� ��� �

public:
	Point(int X = 0)
	{
		this->X = X;
	}

	void set_X(int X)
	{
		this->X = X;
	}

	int get_X()
	{
		return X;
	}

	int distance(int X)
	{
		return abs(this->X - X);
	}

};

int distance(Point A, Point B);

void main()
{

	setlocale(0, "");

	Point A = 6;
	cout << "���������� �� ��������� �����: " << A.distance(2);
	cout << endl;

	Point B(9);

	int dist;
	dist = distance(A, B);
	cout << "���������� ����� ����� �������: " << dist << endl;

}

int distance(Point A, Point B)
{
	return abs(A.get_X() - B.get_X());
}
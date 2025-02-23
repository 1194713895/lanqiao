#include<iostream>
using namespace std;
class Matrix
{
	public:
		Matrix()
		{

		}
		Matrix(int rows, int cols);
		Matrix(const Matrix& t) {
			rows = t.rows;
			cols = t.cols;
			data = new double*[rows];
			for (int i = 0; i < rows; i++) {
				data[i] = new double[cols];
				for (int j = 0; j < cols; j++) {
					data[i][j] = t.data[i][j];  // ✅ 复制数据，而不是直接赋值指针
				}
			}
		}
		
		~Matrix()
		{
			for (int i = 0; i < rows; i++)
				delete[]data[i];
			delete[]data;
		}
		Matrix plus(Matrix t1, Matrix t2);
		Matrix minus(Matrix t1, Matrix t2);
		void print();
	private:
		double** data;
		int rows;
		int cols;
};
Matrix::Matrix(int rows, int cols)
{
	this->data = new double* [rows];
	for (int i = 0; i < rows; i++)
	{
		this->data[i] = new double[cols];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> this->data[i][j];
		}
	}
}
Matrix Matrix::plus(Matrix t1, Matrix t2)
{
	Matrix t;
	// data = new double* [rows];
	// for (int i = 0; i < rows; i++)
	// {
	// 	data[i] = new double[cols];
	// }
	// for (int i = 0; i < rows; i++)
	// {
	// 	for (int j = 0; j < cols; j++)
	// 	{
	// 		t.data[i][j] = t1.data[i][j] + t2.data[i][j];
	// 	}
	// }
	return t;
}
Matrix Matrix::minus(Matrix t1, Matrix t2)
{
	Matrix t;
	data = new double* [rows];
	for (int i = 0; i < rows; i++)
	{
		data[i] = new double[cols];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			t.data[i][j] = t1.data[i][j] - t2.data[i][j];
		}
	}
	return t;
}
void Matrix::print()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << this->data[i][j]<<" ";
		}
		cout << endl<<" zlm";
	}
}

int main()
{
	int n, m;
	cin >> n >> m;
	Matrix t1(n,m);
	// Matrix t2(t1);
	Matrix t3;
	// t3.plus(t1, t1);
	// // // Matrix t4;
	// // // t4.minus(t1, t2);
	// // t3.print();
	// t1.print();
	// t4.print();
}

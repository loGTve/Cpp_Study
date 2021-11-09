#include <iostream>
using namespace std;

void ParaArray(int array[]) {
	cout << sizeof(array) << endl;
	*array = 123;
}

struct ArrStruct {
	int array[5] = { 8, 6, 4, 2, 0 };
};

void StructPoint(ArrStruct *Ast) {
	cout << sizeof((*Ast).array) << endl;
}

int main() {
	
	ArrStruct Ast;

	int array[5] = { 9, 7, 5, 3, 1 };
	int *ptr = array;

	cout << Ast.array[3] << endl;
	cout << sizeof(Ast.array) << endl;
	StructPoint(&Ast);

	cout << sizeof(ptr) << endl;
	cout << *array << " " << *(array+1) << " " << *(ptr+2) << endl;

	ParaArray(array);
	cout << array[0] << " " << *array <<endl;

	

	//cout << array[0] << " "  << array[1] << endl;
	//cout << array << endl;
	//cout << &(array[0]) << endl;

	//cout << *array << endl;

	//int *ptr = array;
	//cout << ptr << endl;
	//cout << ptr << endl;
	system("pause");
	return 0;

}
#pragma once

class BaseMatrix {
	int numberOflines;
	int numberOfcolums;
	int** matrix;
public:
	BaseMatrix();
	BaseMatrix(const int numberOflines, const int numberOfcolums, const int * 
		fillingArray, const int sizeOfarray);
	BaseMatrix(const BaseMatrix& source);
	BaseMatrix& operator=(const BaseMatrix& source);
	virtual ~BaseMatrix();

};

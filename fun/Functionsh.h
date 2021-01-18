#include <iostream>
using namespace std;

const int ROWS = 7;
const int COLS = 10;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);

template<typename T>
void Print(T arr[], const int n);

template<typename T>
void Sort(T arr[], const int n);

template<typename T>
void Sum(T arr[], const int n);

template<typename T>
void Avg(T arr[], const int n);

template<typename T>
void minValueIn(T arr[], const int n);

template<typename T>
void maxValueIn(T arr[], const int n);
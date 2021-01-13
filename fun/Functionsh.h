#include <iostream>
using namespace std;

const int ROWS = 7;
const int COLS = 10;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(int i_arr[ROWS][COLS], const int m, const int n);
void FillRand(double i_arr[ROWS][COLS], const int m, const int n);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int i_arr[ROWS][COLS], const int m, const int n);
void Print(double i_arr[ROWS][COLS], const int m, const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(int i_arr[ROWS][COLS], const int m, const int n);
void Sort(double i_arr[ROWS][COLS], const int m, const int n);

void Sum(int arr[], const int n);
void Sum(double arr[], const int n);
void Sum(int i_arr[ROWS][COLS], const int m, const int n);
void Sum(double i_arr[ROWS][COLS], const int m, const int n);

void Avg(int arr[], const int n);
void Avg(double arr[], const int n);
void Avg(int i_arr[ROWS][COLS], const int m, const int n);
void Avg(double i_arr[ROWS][COLS], const int m, const int n);

void minValueIn(int arr[], const int n);
void minValueIn(double arr[], const int n);
void minValueIn(int i_arr[ROWS][COLS], const int m, const int n);
void minValueIn(double i_arr[ROWS][COLS], const int m, const int n);

void maxValueIn(int arr[], const int n);
void maxValueIn(double arr[], const int n);
void maxValueIn(int i_arr[ROWS][COLS], const int m, const int n);
void maxValueIn(double i_arr[ROWS][COLS], const int m, const int n);

void Unique(int arr[], const int n);
void Unique(double arr[], const int n);
void Unique(int i_arr[ROWS][COLS], const int m, const int n);
void Unique(double i_arr[ROWS][COLS], const int m, const int n);
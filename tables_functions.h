#include <iostream>
#include <vector>
#include <iomanip> // Для управления выводом формата чисел

using namespace std;

// Определяем структуру для представления строки таблицы
struct TableRecord {
    string parameter;
    double negative;
    double zero;
    double positive;
    double uncertain;
};

// Функция для создания таблицы
vector<TableRecord> createTable();

// Функция для вывода таблицы
void printTable(vector<TableRecord> table);


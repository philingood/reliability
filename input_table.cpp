#include "tables_functions.h"

// Функция для создания таблицы
vector<TableRecord> createTable() {
    vector<TableRecord> table;
    
    // Добавляем строки
    double p_zero = 0.64, omega_zero = 523.334, m_zero = 2.2;
    double p_uncertain = 0.3, omega_uncertain = 104.67, m_uncertain = 0.5;

    double p_negative = p_zero - p_uncertain;
    double omega_negative = omega_zero - omega_uncertain; 
    double m_negative = m_zero - m_uncertain;

    double p_positive = p_zero + p_uncertain;
    double omega_positive = omega_zero + omega_uncertain;
    double m_positive = m_zero + m_uncertain;

    table.push_back({"p", p_negative, p_zero, p_positive, p_uncertain});
    table.push_back({"omega", omega_negative, omega_zero, omega_positive, omega_uncertain});
    table.push_back({"m", m_negative, m_zero, m_positive, m_uncertain});

    return table;
}

// Функция для вывода таблицы
void printTable(vector<TableRecord> table) {
    cout << endl;
    cout << setw(12) << "Parameter" << setw(12) << "-" << setw(12) << "0" << setw(12) << "+" << setw(12) << "±" << endl;
    cout << "---------------------------------------------------------" << endl;
    for (const auto& record : table) {
        cout << setw(12) << record.parameter
             << setw(12) << fixed << setprecision(2) << record.negative
             << setw(12) << fixed << setprecision(2) << record.zero
             << setw(12) << fixed << setprecision(2) << record.positive
             << setw(12) << fixed << setprecision(2) << record.uncertain << endl;
    }
    cout << endl;
}
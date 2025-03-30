typedef struct {
    int year;        // год
    int month;      // месяц
    int day;        // день
    int hour;       // часы
    int minute;     // минуты
    int temperature; // температура
} TemperatureData;

void calculate_monthly_statistics(TemperatureData* data, int size);
void calculate_annual_statistics(TemperatureData* data, int size);
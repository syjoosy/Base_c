

typedef struct {
    int year;        // год
    int month;      // месяц
    int day;        // день
    int hour;       // часы
    int minute;     // минуты
    int temperature; // температура
} TemperatureData;

typedef struct stack {
    TemperatureData *item;
    int size;
    int sp;
} stack;


void calculate_monthly_statistics(stack *st, int current_month);
void calculate_annual_statistics(TemperatureData* data, int current_year, int size);
#include <iostream>
using namespace std;

class Counter {
private:
    int currentValue;
    int maxValue;
    int minValue;
    int step;

public:
    Counter(int minVal, int maxVal, int stepVal = 1) {
        minValue = minVal;
        maxValue = maxVal;
        step = stepVal;
        currentValue = minValue;
    }

    int getCurrentValue() const {
        return currentValue;
    }

    void setCurrentValue(int value) {
        if (value >= minValue && value <= maxValue) {
            currentValue = value;
        }
        else {
           cout << "Значение должно быть в диапазоне от " << minValue << " до " << maxValue << "\n";
        }
    }

    int getMaxValue() const {
        return maxValue;
    }

    void setMaxValue(int value) {
        maxValue = value;
    }

    int getMinValue() const {
        return minValue;
    }

    void setMinValue(int value) {
        minValue = value;
    }

    int getStep() const {
        return step;
    }

    void setStep(int value) {
        step = value;
    }

    void increase() {
        if (currentValue + step <= maxValue) {
            currentValue += step;
        }
        else {
            cout << "Достигнуто максимальное значение счетчика" << "\n";
            currentValue = minValue;
        }
    }

    void reset() {
        currentValue = minValue;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    Counter waterCounter(0, 99999);
    cout << "Текущее значение счетчика: " << waterCounter.getCurrentValue() << "\n";

    waterCounter.increase();
    cout << "Новое значение счетчика: " << waterCounter.getCurrentValue() << "\n";

    waterCounter.reset();
    cout << "Значение счетчика после сброса: " << waterCounter.getCurrentValue() << "\n";

    return 0;
}

#include <iostream>

class Counter
{
private:
    int count;
public:
    int getCount()
    {
        return (count);
    }
    void increment()
    {
        count++;
    }
    void decrement()
    {
        count--;
    }
    Counter()
    {
        count = 1;
    }
    Counter(int count)
    {
        this->count = count;
    }
};

int main()
{
    std::string yesOrNo;
    int count;
    std::string cmd;

    setlocale(LC_ALL, "Russian");

    std::cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
    std::cin >> yesOrNo;
    if (yesOrNo == "yes")
    {

        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> count;

        Counter myCounter(count);

        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> cmd;
        while (cmd != "x")
        {
            if (cmd == "+")
            {
                myCounter.increment();
            }
            else if (cmd == "-")
            {
                myCounter.decrement();
            }
            else if (cmd == "=")
            {
                std::cout << myCounter.getCount() << std::endl;
            }
            else
            {
                
            }
            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
            std::cin >> cmd;
        }
        std::cout << "До свидания!";

    }
    else
    {

        Counter myCounter;

        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> cmd;
        while (cmd != "x")
        {
            if (cmd == "+")
            {
                myCounter.increment();
            }
            else if (cmd == "-")
            {
                myCounter.decrement();
            }
            else if (cmd == "=")
            {
                std::cout << myCounter.getCount() << std::endl;
            }
            else
            {
                
            }
            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
            std::cin >> cmd;
        }
        std::cout << "До свидания!";

    }

}
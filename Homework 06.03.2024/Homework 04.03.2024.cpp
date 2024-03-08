// Homework 04.03.2024.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

//Задание 1 Все числаот 1 до N;

int funcN(int N)
{
    static int k = 0;
    if (k < N )
    {
        k++;
        cout << k << " ";
        return funcN(N);
    }
    cout << "\n\n";
}

//Задание 2  Все числаот A до B;

void funcAB(int a,int b)
{
    cout << a << ' ';
    if (a < b) 
    {
        funcAB(a + 1, b);
    }
    
    if (a > b)
    {
        funcAB(a - 1, b);
    }
    return;  
}

//Задание 3  Точная степень двойки;
 
void Pow2(int n) 
{
    if (n == 1) 
    {
        cout << "YES!" << "\n\n";
    }
    else if (n % 2 == 0 && n != 0)
    {
        Pow2(n / 2);
    }
    else
    {
        cout << "NO!" << "\n\n";
    }
}

//Задание 4  Сумма цифр числа;

void sumNumbers(int N, int& sum)
{
    if (N < 10) 
    {
        sum += N;
    }
    else 
    {
        sum += N % 10;
        sumNumbers(N / 10,sum);
    }
    
}

//Задание 5  Цифры числа справа налево;

void numberReverce(int number) 
{
    if (number == 0) 
    {
        return;
    }
    cout << number % 10 << " "; 
    numberReverce(number / 10);
}

//Задание 6  Цифры числа слева направо;

void numberNormal(int number)
{
    if (number % 10 == number) {
        cout << number << " ";
        return;
    }
    numberNormal(number / 10);
    cout << number % 10 << " ";
}

//Задание 7  Разворот числа;

void numberReversal(int number)
{
    if (number == 0)
    {
        return;
    }
    cout << number % 10;
    numberReversal(number / 10);
}

//Задание 8  Палиндром;

string Palindrom(string word, int start, int finish) 
{
    
    if (start == finish) 
    {
        return "YES";
    }
    else 
    {
        
        if (word[start] == word[finish]) 
        {
            
            if (start + 1 == finish) 
            {
                return "YES";
            }
            
            return Palindrom(word, start + 1, finish - 1);
        }
        else 
        {

            return "NO";
        }
    }
}

//Задание 9  Фибоначчи;
int Fibonachi(int F)
{
    if (F == 0) 
    {
        return 0;
    }
    else if (F == 1) 
    {
        return 1;
    }
    else 
    {
        return Fibonachi(F - 1) + Fibonachi(F - 2);
    }
}

//Задание 10  Степень числа;

int Pow(int number, int pow)
{
    if (pow == 0) 
    {
        return 1;
    }
    return number * Pow(number, pow - 1);
}

//Задание 11  Сумма чисел в диапазоне;

int Sum(int start, int finish) 
{
    if (start < finish)
    {
        return start + Sum(start + 1, finish);
    }
}

//Задание 12  НОД;

int NOD(int a, int b) 
{
    
    if (b == 0) 
    {
        return a;
    }
    
    else 
    {
        return NOD(b, a % b);
    }
}


int main()
{
    cout << "Numbers from 1 to N:  -  ";
    funcN(15);
    
    cout << "Numbers from A to B if A > B:  -  ";
    funcAB(25, 12);
    cout << "\n";
    cout << "Numbers from A to B if A < B:  -  ";
    funcAB(12, 25);
    cout << "\n\n";
    
    cout << "Is the number an exact power of two?  -  ";
    Pow2(512);
    cout << "Is the number an exact power of two?  -  ";
    Pow2(256);
    cout << "Is the number an exact power of two?  -  ";
    Pow2(255);
    
    cout << "Sum of digits of a number:  -  ";
    int sum = 0;
    sumNumbers(179, sum);
    cout << sum << "\n\n";

    cout << "The digits of the number are from right to left separated by spaces:  -  ";
    numberReverce(179);
    cout << "\n\n";
    
    cout << "The digits of the number are from left to right separated by spaces:  -  ";
    numberNormal(179);
    cout << "\n\n";

    string word = "radar";
    cout << "Word is Palindrom?  -  ";
    cout << Palindrom(word, 0, word.length() - 1);
    cout << "\n\n";

    cout << "Number reversal:  -  ";
    numberReversal(179);
    cout << "\n\n";
    
    cout << "Fibonachi numbers:  -  ";
    cout << Fibonachi(0) << " ";
    cout << Fibonachi(1) << " ";
    cout << Fibonachi(2) << " ";
    cout << Fibonachi(3) << " ";
    cout << Fibonachi(4) << " ";
    cout << Fibonachi(5) << " ";
    cout << Fibonachi(6) << " ";
    cout << Fibonachi(7) << " ";
    cout << "\n\n";
    
    cout << "Pow of number:  -  ";
    cout << Pow(2, 12);
    cout << "\n\n";
    
    cout << "Sum of numbers in range:  -  ";
    cout << Sum(5, 10);
    cout << "\n\n";
    
    cout << "NOD:  -  ";
    cout << NOD(10,5);
    cout << "\n\n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

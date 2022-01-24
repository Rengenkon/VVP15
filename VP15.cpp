#include <iostream>
/*
Задание 15

1. Описать функцию PowerA3(A, B), вычисляющую третью степень числа A и возвращающую ее в переменной B (A — входной, B — выходной параметр; оба параметра являются вещественными). С помощью этой функции найти третьи степени пяти данных чисел.
2. Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения: −1, если X < 0; 0, если X = 0; 1, если X > 0. С помощью этой функции найти значение выражения Sign(A) + Sign(B) для данных вещественных чисел A и B.
3. Описать функцию RingS(R1, R2) вещественного типа, находящую площадь кольца, заключенного между двумя окружностями с общим центром и радиусами R1 и R2 (R1 и R2 — вещественные, R1 > R2). С ее помощью найти площади трех колец, для которых даны внешние и внутренние радиусы.
4. Описать функцию Quarter(x, y) целого типа, определяющую номер координатной четверти, в которой находится точка с ненулевыми вещественными координатами (x, y). С помощью этой функции найти номера координатных четвертей для трех точек с данными ненулевыми координатами
5. Описать функцию Fact2(N) вещественного типа, вычисляющую двойной факториал: N!! = 1•3•5•. . .•N, если N — нечетное; N!! = 2•4•6•. . .•N, если N — четное (N > 0 — параметр целого типа; вещественное возвращаемое значение используется для того, чтобы избежать целочисленного переполнения при больших значениях N).


Каждая задача решена в отдельном классе
*/


class z1
{
private:
    double a, b;

public:

    z1(double aa = 1.0) {
        a = aa;
    }

    double PowerA3(double x) {
        return x * x * x;
    }


    void test() {
        std::cout << "Задача 1\n";
        b = PowerA3(a);
        std::cout << "a = " << a << " b = " << b << "\n";
    }
};

class z2
{
private:
    double a, b;

public:

    z2(double aa = 1.0, double bb = -1.0) {
        a = aa;
        b = bb;
    }

    int Sign(double x) {
        if (x < 0) {
            return -1;
        }else if (x > 0) {
            return 1;
        }
        return 0;
    }


    void test() {
        std::cout << "Задача 2\n";
        std::cout << "( " << a << ' ' << b << " )a + b = " << Sign(a)+ Sign(b) << "\n";
    }
};

class z3
{
private:
    double a, b;

public:

    z3(double aa = 1.0, double bb = 2.0) {
        a = aa;
        b = bb;
    }

    double RingS(double x, double t) {
        double s;
        s = 3.14 * (x * x - t * t);
        if (s < 0) {
            s *= -1;
        }
        return s;
    }


    void test() {
        std::cout << "Задача 3\n";
        std::cout << a << " и " << b <<" - радиусы.Площадь между кольцами = " << RingS(a, b) << "\n";
    }
};

class z4
{
private:
    double x, y;

public:

    z4(double aa = 1.0, double bb = 1.0) {
        x = aa;
        y = bb;
    }

    int Quarter(double x, double t) {
        if (x > 0 && y > 0) {
            return 1;
        }
        else if (x > 0 && y < 0) {
            return 4;
        }
        else if (x < 0 && y > 0) {
            return 2;
        }
        else {
            return 3;
        }
    }

    void test() {
        std::cout << "Задача 4\n";
        std::cout << Quarter(x, y) << " четверть --- координаты " << x << ' '<< y << "\n";
    }
};

class z5
{
private:
    int n;

public:

    z5(int aa = 1) {
        n = aa;
    }

    double Fact2(int g) {
        double p = 1;
        for (int i = 2 - (g % 2); i <= g; i+= 2) {
            p *= i;
        }
        return p;
    }

    void test() {
        std::cout << "Задача 5\n";
        std::cout << "Факториал " << n << ' ' << Fact2(n) << "\n";
    }
};

int main()
{
    setlocale(LC_ALL, "rus");

    z1 first1(2);
    z1 first2(1.5);
    z1 first3(10.1);
    z1 first4(7.4);
    z1 first5(0.9);
    z2 second1(-3, 0);
    z2 second;
    z3 third1(2, 1);
    z3 third2(3, 9);
    z3 third3(1.5, 1.4);
    z4 fourth1(-3, -4.5);
    z4 fourth2(10, 50);
    z4 fourth3(-5, 1);
    z5 fifth4(5);
    z5 fifth5(6);

    first1.test();
    first2.test();
    first3.test();
    first4.test();
    first5.test();
    second1.test();
    second.test();
    third1.test();
    third2.test();
    third3.test();
    fourth1.test();
    fourth2.test();
    fourth3.test();
    fifth4.test();
    fifth5.test();

    return 0;
}

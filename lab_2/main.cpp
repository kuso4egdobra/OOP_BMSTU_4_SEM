#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include <exception>

#include "_errors.h"
#include "class_Vector.hpp"

int main()
{
    try
    {
        std::cout << "Тестирование контсрукторов\n\n";

        Vector<double> v1;
        std::cout << "• Конструктор по умолчанию • \n";
        std::cout << v1 << "\n";

        std::cout << "• Конструктор c параметрами • \n";
        Vector<double> v2(2, 3., 4.);
        Vector<double> v3(3, 3.0, 4.0, 0.0);
        std::cout << v2 << "\n" << v3 << "\n";
        
        double arr[5] = {5, 1, 7, 4, 0};
        Vector<double> v4(5, arr);
        std::cout << v4 << "\n";

        std::cout << "• Конструктор копирования • \n";
        Vector<double> v5(v3);
        std::cout << v5 << "\n";

        std::cout << "--------------------------------\n";
        std::cout << "Тестирование методов\n\n";

        std::cout << "• Длина вектора из 3 элементов (3, 4, 0): " << v3.len() << "\n";
        std::cout << "• Размер вектора из 3 элементов (3, 4, 0): " << v3.size() << "\n";
        std::cout << "• Пустой ли вектор, созданный конструктором по умолчанию?  " << v1 << "\n\n";
        std::cout << "• Попробуем вывести 2-ой элемент массива, созданный из массива {5, 1, 7, 4, 0}: "<< v4.get_elem_Vector(1) <<"\n";

        std::cout << "• Умножим элементы вектора на 10: " << (v4 *= 10) << "\n";
        std::cout << "• Разделим элементы вектора на 10: " << (v4 /= 10) << "\n";
        std::cout << "• Вычтем из вектора {5, 1, 7, 4, 0} вектор {3, 4, 0}: " << (v4 -= v3) << "\n";
        std::cout << "• Операция унарного минуса для вектора {3, 4, 0}: " << (-v3) << "\n\n";

        Vector<double> v12{1., 2., 3., 4., 5.};
        std::cout << "• Инициализируем вектор {1., 2., 3., 4., 5.}: " << v12 << "\n";
        v12[2] = 10.;
        std::cout << "• Меняем третий элемент на 10 с помощью операнда []: " << v12 << "\n";
        v12.set_elem_Vector(3, 11.);
        std::cout << "• Меняем четвертый элемент на 11 с помощью метода set_elem_Vector: " << v12 << "\n";
        v12 = v12.get_single_vector(); 
        std::cout << "• Получаем вектор с единичной длинной: " << v12 << "\n\n";

        Vector<double> v6(3, 3.0, 4.0, 0.0);
        std::cout << "• Векторное произведение векторов {3,4,0} и {3,4,0}: " << (v3 &= v6) << "\n";
        Vector<int> v7(2, 10, 0);
        Vector<int> v8(2, 0, 10);
        std::cout << "• Угол между векторами {10, 0} и {0, 10}: " << v7.angle_between_vectors(v8) << "\n";
        Vector<double> v9(2, 5., 5.);
        Vector<double> v10(2, 10., 0.0);
        std::cout << "• Угол между векторами {5, 5} и {10, 0}: " << v9.angle_between_vectors(v10) << "\n";
        Vector<double> v20(2, 20., 20.0);
        std::cout << "• Вектора {5, 5} и {20, 20} коллинеарны? : " << v9.is_collinearity(v20) << "\n";
        std::cout << "• Вектора {10, 0} и {0, 10} ортогональны? : " << v7.is_orthogonality(v8) << "\n";
        std::cout << "• Скалярное произведение между {5, 5} и {10, 0}: " << v9 * v10 << "\n\n";

        Vector<int> v11(4, 1, 0, 0, 0);
        std::cout << "• Вектор {4, 1, 0, 0, 0} eдиничный? " << v11.is_single() << "\n";
        std::cout << "• Вектора {3, 4, 0} и {3, 4, 0} равны? " << (v3 == v6) << "\n";
        std::cout << "• Вектора {3, 4, 0} и {3, 4, 0} не равны? " << (v3 != v6) << "\n";
    }
    catch (baseError& err)
    {
        std::cout << err.what() << std::endl;
    }
    return 0;
}

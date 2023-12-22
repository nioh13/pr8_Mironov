<<<<<<< HEAD
 #include <iostream>
=======
#include <iostream>
>>>>>>> d4b5d0c981214fae6809c2d1ab8aa54864350981
#include <cstdlib>
#include <ctime>

// Функция для генерации случайного пароля
std::string generatePassword() {
<<<<<<< HEAD
    const std::string charset = abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789абвгдеёжзийклмнопрстАБВГДЕЁЖЗИЙКЛМНПРОСТУФХЦЧЩ;
=======
    const std::string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
>>>>>>> d4b5d0c981214fae6809c2d1ab8aa54864350981
    const int passwordLength = 11;

    std::string password;
    password.reserve(passwordLength);

    for (int i = 0; i < passwordLength; ++i) {
        int randomIndex = std::rand() % charset.length();
        password.push_back(charset[randomIndex]);
    }

    return password;
}

int main() {
    // Устанавливаем seed для генератора случайных чисел на основе текущего времени
    std::srand(std::time(0));

    // Генерируем пароль и выводим его на экран
    std::string password = generatePassword();
<<<<<<< HEAD
    std::cout << Случайный пароль:  << password << std::endl;

    return 0;
}
 
=======
    std::cout << "Случайный пароль: " << password << std::endl;

    return 0;
}
>>>>>>> d4b5d0c981214fae6809c2d1ab8aa54864350981

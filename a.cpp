#include <iostream>
#include <cstdlib>
#include <ctime>

// Функция для генерации случайного пароля
std::string generatePassword() {
    const std::string charset = abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789абвгдеёжзийклмнопрст;
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
    std::cout << Случайный пароль:  << password << std::endl;

    return 0;
}


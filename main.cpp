#include <iostream>
#include <ctime>

int main() {
  setlocale(LC_ALL, "Russian");
  
  std::cout << "Тест. Кто ты из бравлстарса по паролю от соц. сетей" << std::endl;
  int start; // Переменная для старта БРОУЛ СТАСА
  std::cout << "(1) Начать" << std::endl;
  std::cin >> start;
  if (start ==1) {
    std::cout << "Введи свой пароль" << std::endl;
  } else {
    std::cout << "Error. Введен неверный аргумент. Перезапусти программу и напиши 1" << std::endl; // Для крутых отчимов
  }
    std::string password; // Переменная для пароля
    std::cin >> password;

    std::cout << "Введи свой логин" << std::endl;
    std::string login;
    std::cin >> login;
    // Я без понятия че там снизу, взял с инета.
    
    srand( time(0) );
      std::string str[10] = {"Ты Поко", "Ты Шелли", "Ты Биби", "Ты Леон", "Ты Булл", "Ты Эль Примо", "Ты СТУ", "Ты Нита", "Ты Бо", "Ты Вольт" };
      std::cout<< str[rand() % 10];
}

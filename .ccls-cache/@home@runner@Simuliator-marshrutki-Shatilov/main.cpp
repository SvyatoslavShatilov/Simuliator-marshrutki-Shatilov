#include <cstring>
#include <iostream>

int main() {
  std::string stopName = "\"Улица Программистов\"";
  std::string stopName1 = "\"Проспект Алгоритмов\"";
  std::string stopName2 = "\"Площадь Дата-Саинс\"";
  std::string stopName3 = "\"Бульвар Битов\"";
  int passengers = 0;
  int count;
  int ticket = 20;
  int ticketPrice = 0; // Инициализация стоимости всех билетов
  int totalTicketPrice = 0; // Инициализация общей стоимости всех билетов
  int income = 0;
  int expenses = 0;
          
  std::cout << "\nПриветсвуем пользователя! Это симулятор маршрутки!\n"
            << std::endl;
          
  // Первая остановка
  std::cout << "Прибываем на остановку: " << stopName << ".\n"
            << "В салоне пассажиров: " << passengers << std::endl;
  std::cout << "Сколько пассажиров вышло на остановке? ";
  std::cin >> count;
  passengers -= count;
  std::cout << "Теперь в салоне пассажиров: " << passengers << std::endl;
  std::cout << "Сколько пассажиров зашло на остановке? ";
  std::cin >> count;
  passengers += count;
  ticketPrice =
      ticket * count; // Обновление стоимости билетов на текущей остановке
  std::cout << "Стоимость всех билетов: " << ticketPrice << std::endl;
  totalTicketPrice = totalTicketPrice + ticketPrice;
  std::cout << "Общая стоимость всех билетов: " << totalTicketPrice
            << std::endl;
  std::cout << "Отправляемся с остановки: " << stopName
            << ". \nВ салоне пассажиров: " << passengers << std::endl;
  std::cout << "\n-----------Едем---------\n" << std::endl;

  // Вторая остановка
  ticketPrice = 0; // Сбрасываем стоимость всех билетов
  std::cout << "Прибываем на остановку: " << stopName1 << ".\n"
            << "В салоне пассажиров: " << passengers << std::endl;
  std::cout << "Сколько пассажиров вышло на остановке? ";
  std::cin >> count;
  passengers -= count;
  std::cout << "Теперь в салоне пассажиров: " << passengers << std::endl;
  std::cout << "Сколько пассажиров зашло на остановке? ";
  std::cin >> count;
  passengers += count;
  ticketPrice =
      ticket * count; // Обновление стоимости билетов на текущей остановке
  std::cout << "Стоимость всех билетов: " << ticketPrice << std::endl;
  totalTicketPrice = totalTicketPrice + ticketPrice;
  std::cout << "Общая стоимость всех билетов: " << totalTicketPrice
            << std::endl;
  std::cout << "Отправляемся с остановки: " << stopName1
            << ". \nВ салоне пассажиров: " << passengers << std::endl;
  std::cout << "\n-----------Едем---------\n" << std::endl;

  // Третья остановка
  ticketPrice = 0; // Сбрасываем стоимость всех билетов
  std::cout << "Прибываем на остановку: " << stopName2 << ".\n"
            << "В салоне пассажиров: " << passengers << std::endl;
  std::cout << "Сколько пассажиров вышло на остановке? ";
  std::cin >> count;
  passengers -= count;
  std::cout << "Теперь в салоне пассажиров: " << passengers << std::endl;
  std::cout << "Сколько пассажиров зашло на остановке? ";
  std::cin >> count;
  passengers += count;
  ticketPrice =
      ticket * count; // Обновление стоимости билетов на текущей остановке
  std::cout << "Стоимость всех билетов: " << ticketPrice << std::endl;
  totalTicketPrice = totalTicketPrice + ticketPrice;
  std::cout << "Общая стоимость всех билетов: " << totalTicketPrice
            << std::endl;
  std::cout << "Отправляемся с остановки: " << stopName2
            << ". \nВ салоне пассажиров: " << passengers << std::endl;
  std::cout << "\n-----------Едем---------\n" << std::endl;

  // Четвертая остановка
  ticketPrice = 0; // Сбрасываем стоимость всех билетов
  std::cout << "Прибываем на остановку: " << stopName3 << ".\n"
            << "В салоне пассажиров: " << passengers << std::endl;
  std::cout << "Сколько пассажиров вышло на остановке? ";
  std::cin >> count;
  passengers -= count;
  std::cout << "Теперь в салоне пассажиров: " << passengers << std::endl;
  std::cout << "Сколько пассажиров зашло на остановке? ";
  std::cin >> count;
  passengers += count;
  ticketPrice =
      ticket * count; // Обновление стоимости билетов на текущей остановке
  std::cout << "Стоимость всех билетов: " << ticketPrice << std::endl;
  totalTicketPrice = totalTicketPrice + ticketPrice;
  std::cout << "Общая стоимость всех билетов: " << totalTicketPrice
            << std::endl;
  std::cout << "Отправляемся с остановки: " << stopName3
            << ". \nВ салоне пассажиров: " << passengers << std::endl;
  std::cout << "\n-----------Едем---------\n"
            << std::endl; // Едем на конечную остановку

  std::cout << "Прибываем на остановку: " << stopName << ".\n"
            << "В салоне пассажиров: " << passengers << std::endl;
  std::cout << "Сколько пассажиров вышло на остановке? ";
  std::cin >> count;
  passengers -= count;
  std::cout << "Теперь в салоне пассажиров: " << passengers << std::endl;
  std::cout << "Сколько пассажиров зашло на остановке? ";
  std::cin >> count;
  ticketPrice = ticket * count;
  passengers += count;
  std::cout << "Стоимость всех билетов: " << ticketPrice << std::endl;
  totalTicketPrice = totalTicketPrice + ticketPrice;
  std::cout << "Общая стоимость всех билетов: " << totalTicketPrice
            << std::endl;
  std::cout << "Отправляемся с остановки: " << stopName
            << ". \nВ салоне пассажиров: " << passengers << std::endl;
  std::cout << "\n-----------Конец маршрута!---------\n" << std::endl;

  income = totalTicketPrice;
  expenses = income / 4 + income / 5 + income / 5 + income / 5;

  std::cout << "Всего заработали: " << income << " руб." << std::endl;
  std::cout << "Зарплата водителя: " << income / 4 << " руб." << std::endl;
  std::cout << "Расходы на топливо: " << income / 5 << " руб." << std::endl;
  std::cout << "Налоги: " << income / 5 << " руб." << std::endl;
  std::cout << "Расходы на ремонт машины: " << income / 5 << " руб."
            << std::endl;
  std::cout << "Итого доход: " << income - expenses << " руб." << std::endl;
          
  std::cout << "\nКонец! Спасибо за внимание!\n"
            << "\nПользуйтесь нашей программой!" << std::endl;
}

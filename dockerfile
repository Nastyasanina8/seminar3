# Используем официальный образ с GCC

FROM gcc:12.2.0

# Копируем все исходные файлы в контейнер

COPY . /usr/src/myapp

# Устанавливаем рабочую директорию

WORKDIR /usr/src/myapp

 # Компилируем программу и тесты

RUN g++ -o fraction_app fraction.cpp main.cpp

RUN g++ -o test_app fraction.cpp test.cpp

 # Команда по умолчанию при запуске контейнера - запуск тестов

CMD ["./test_app"]
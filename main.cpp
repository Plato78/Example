
#include <SFML/Graphics.hpp>
#include "Header.h"
#include <vector>
using namespace sf;
int main()
{
	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(800, 600), "SFML Works!");
	std::vector<Car*> v1;
	for (int i = 0; i < 5; i++) {
		Car* c1 = new Car(Vector2f{ 100 * i , 50 });
		v1.push_back(c1);
	}
	// Главный цикл приложения. Выполняется, пока открыто окно
	while (window.isOpen())
	{
		// Обрабатываем очередь событий в цикле
		Event event;
		while (window.pollEvent(event))
		{
			// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == Event::Closed)
				// тогда закрываем его
				window.close();
		}
		// Отрисовка окна 
		window.display();
		for (int i = 0; i < 5; i++) {
			window.draw(v1.at(i)->getSprite());
		}
	}

	return 0;
}
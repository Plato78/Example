
#include <SFML/Graphics.hpp>
#include "Header.h"
#include <vector>
using namespace sf;
int main()
{
	// ������, �������, ����������, �������� ������� ����� ����������
	RenderWindow window(VideoMode(800, 600), "SFML Works!");
	std::vector<Car*> v1;
	for (int i = 0; i < 5; i++) {
		Car* c1 = new Car(Vector2f{ 100 * i , 50 });
		v1.push_back(c1);
	}
	// ������� ���� ����������. �����������, ���� ������� ����
	while (window.isOpen())
	{
		// ������������ ������� ������� � �����
		Event event;
		while (window.pollEvent(event))
		{
			// ������������ ����� �� �������� � ����� ������� ����?
			if (event.type == Event::Closed)
				// ����� ��������� ���
				window.close();
		}
		// ��������� ���� 
		window.display();
		for (int i = 0; i < 5; i++) {
			window.draw(v1.at(i)->getSprite());
		}
	}

	return 0;
}
#pragma once
#include <SFML/Graphics.hpp>
class Car {
private:
	sf::Texture texture;
	sf::Sprite sprite;
public:
	Car(sf::Vector2f pos) {
		texture.loadFromFile("1.jpg");
		sprite.setTexture(texture);
		sprite.setPosition(pos);
	}
	sf::Sprite getSprite() { return sprite; }
};
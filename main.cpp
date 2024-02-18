#include <SFML/Graphics.hpp>
#include <iostream>

int main(int argc, char** argv){
    sf::RenderWindow myChessWindow(sf::VideoMode(453,453), "Chess Of Kings");
    sf::Texture kingTexture;
    kingTexture.loadFromFile("images/king.jpeg");
    sf::Sprite myKingSprite(kingTexture);
    while(myChessWindow.isOpen()){
        myChessWindow.clear();
        myChessWindow.draw(myKingSprite);
        myChessWindow.display();
    }
    return 0;
}

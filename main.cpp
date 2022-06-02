#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

int main(){
    sf::RenderWindow window(sf::VideoMode(800,800), "inventory-system"); 
    while(window.isOpen()){
          sf::Event event;
            while (window.pollEvent(event))
            {
                switch (event.type)
                {
                    case sf::Event::Closed:
                        window.close();
                        break;
                    default:
                        break;
                }
            }
            window.clear();
            window.display();
            std::this_thread::sleep_for(0.08s);
        }
    }
} 

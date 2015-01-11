#include <iostream>
#include <curses.h>
#include <unistd.h>
#include "Interface.class.hpp"
#include "Character.class.hpp"
#include "Enemy.class.hpp"
#include "Controller.hpp"

int main() {
    (void)initscr();
    Interface *inter = new Interface();
    Character *batman = new Character("batman", 10, 10);
    batman->move(4, 5);
    WINDOW * win = newwin(25 , 100, 0, 0);
    Controller *controller = new Controller(win);
    noecho();

    raw();
    std::cout << controller;
    keypad(stdscr, TRUE);
    
    inter->draw(win);
    inter->draw_char(win, *batman);

    wrefresh(win);
    sleep(1);
    //Delacration d'une classe controleur
    //Passage en mode non bllcant
    //timeout(-1);



    int ch = 42;
    //while (Controler.player_alavie)
    while(ch != 32)
    {
        //Controler.userinput

        ch = getch();
        switch(ch)
        {
            case KEY_LEFT:
                mvwaddch(win, batman->getY(), batman->getX(), ' ');
                batman->moveLeft();
                break;

            case KEY_RIGHT:
                mvwaddch(win, batman->getY(), batman->getX(), ' ');
                batman->moveRight();
                break;

            case KEY_UP:
                mvwaddch(win, batman->getY(), batman->getX(), ' ');
                batman->moveUp();
                break;

            case KEY_DOWN:
                mvwaddch(win, batman->getY(), batman->getX(), ' ');
                batman->moveDown();
                break;
            case 32:
                break;
        }
        inter->draw_char(win, *batman);
        inter->draw(win);
        wrefresh(win);
    }
    endwin();
    return 0;
}

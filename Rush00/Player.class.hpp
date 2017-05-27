#ifndef Player_HPP
#define Player_HPP
#include <cmath>
#include <ncurses.h>
#include <iostream>

class Player {
private:
  int score;
  int x;
  int y;

public:
  Player ( void );
  Player ( int const n );
  Player ( Player const & copy );
  Player & operator=( Player const & copy );
  Player & operator++();
  ~Player ( void );
  int getScore( void ) const;
  void setScore( int const value );
  int getX( void ) const;
  void setX( int const value );
  int getY( void ) const;
  void setY( int const value );
  void action(int c);
};

std::ostream & operator<<(std::ostream & o, Player const & rhs);
#endif
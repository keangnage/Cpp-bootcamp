#include "Draw.class.hpp"

Draw::Draw(Draw const & copy) {
  *this = copy;
}

Draw::Draw( void ) {
}

Draw::~Draw ( void ) {

}

void Draw::Redraw(Player hero, BulletEvent *bullets, EnemyEvent *enemies) {
  mvprintw(hero.getY(), hero.getX(), ">");
  Bullet *allbullets = bullets->getBullets();
	Enemy *allEmemies = enemies->getEnemies();
  for (int i = 0; i < bullets->getBulletCount(); i++) {
      mvprintw(allbullets[i].getY(), allbullets[i].getX(), "-");
  }
	for (int i = 0; i < enemies->getEnemyCount(); i++) {
		mvprintw(allEmemies[i].getY(), allEmemies[i].getX(), "-");
		mvprintw(allEmemies[i].getY(), allEmemies[i].getX() + 1 , "<");
	}
}

Draw & Draw::operator=( Draw const & copy ) {
  Draw new_draw(copy);
  return *this;
}

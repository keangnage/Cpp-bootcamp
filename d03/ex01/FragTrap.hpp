#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

class FragTrap {
private:
  std::string Name;
  int Hit;
  int Max_hit_points;
  int Energy_points;
  int Max_energy_points;
  int Level;
  int Melee_attack_damage;
  int Ranged_attack_damage;
  int Armor_damage_reduction;

public:
  FragTrap(void);
  FragTrap(std::string name);
  FragTrap ( FragTrap const & dhs );
  FragTrap& operator=( FragTrap const & dhs );
  ~FragTrap ();
  int rangedAttack(std::string const & target);
  int meleeAttack(std::string const & target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  std::string getName();
  void setName(std::string string);
  int getHit();
  int getMax_hit_points();
  int getEnergy_points();
  int getMax_energy_points();
  int getLevel();
  int getMelee_attack_damage();
  int getRanged_attack_damage();
  int getArmor_damage_reduction();
  void setHit(int param);
  void setMax_hit_points(int param);
  void setEnergy_points(int param);
  void setMax_energy_points(int param);
  void setLevel(int param);
  void setMelee_attack_damage(int param);
  void setRanged_attack_damage(int param);
  void setArmor_damage_reduction(int param);
  int vaulthunter_dot_exe(std::string const &target);
  void ballBuster(std::string const target);
  void blasterAttack(std::string const target);
  void Explosion(std::string const target);
  void exWife(std::string const target);
  void lazerAttack(std::string const target);
};

std::ostream & operator<<(std::ostream & o, FragTrap const & rhs);

#endif

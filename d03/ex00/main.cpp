#include "FragTrap.hpp"

int				main(void)
{
	FragTrap	star("Dark star");
	FragTrap	Ultron("Ultron");

	star.rangedAttack("Ultron");
	Ultron.takeDamage(star.getRanged_attack_damage());

	Ultron.meleeAttack("Dark star");
	star.takeDamage(Ultron.getMelee_attack_damage());

	star.meleeAttack("Ultron");
	Ultron.takeDamage(star.getMelee_attack_damage());

	Ultron.rangedAttack("Dark star");
	star.takeDamage(Ultron.getMelee_attack_damage());

	Ultron.beRepaired(50);

	Ultron.rangedAttack("Dark star");
	star.takeDamage(Ultron.getRanged_attack_damage());

	star.takeDamage(Ultron.vaulthunter_dot_exe("Dark star"));
	star.takeDamage(Ultron.vaulthunter_dot_exe("Dark star"));
	star.takeDamage(Ultron.vaulthunter_dot_exe("Dark star"));
	star.takeDamage(Ultron.vaulthunter_dot_exe("Dark star"));

	Ultron.takeDamage(200);
}

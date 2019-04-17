#include "step.h"

Step::Step(): occupation('.'), snack(false) {}

const bool Step::has_snack() const { return snack; }

void Step::set_snack(const bool & s) { snack = s; }

void Step::set_occupation(const char & p) { occupation = p; }

const char Step::get_occupation() const { return occupation; }

void Step::set_empty() { occupation = '.'; snack = false; }

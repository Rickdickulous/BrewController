#ifndef Recipe_h
#define Recipe_h

#include "Arduino.h"

class Recipe
{
public:
  Recipe(int preMashTemp=0, int mashTemp=0, int boilTime=60, int mashTime=60);
  ~Recipe(void);

private:
  // Mash variables
  const int PRE_MASH_TEMP_F;
  const int MASH_TEMP_F;
  const int MASH_TIME_MIN;

  // boiling and hop additions
  const int BOIL_TIME_MIN;
  int hopAdditions_minsLeftInBoil[10] = {0};

  /* TODO: HOP ADDITIONS
  static const int NUM_HOP_ADDITIONS;
  int HOP_ADDITION_TIMES_MIN[NUM_HOP_ADDITIONS];
  */
  
};
#endif


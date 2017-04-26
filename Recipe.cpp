#include "Arduino.h"
#include "Recipe.h"

// TODO: Optimize ints to bytes to save memory
Recipe::Recipe(int preMashTemp, int mashTemp, int mashTime, int boilTime) :
  PRE_MASH_TEMP_F(preMashTemp),
  MASH_TEMP_F(mashTemp),
  MASH_TIME_MIN(mashTime),
  BOIL_TIME_MIN(boilTime)
{
  Serial.print("Recipe constructed\n");
}

Recipe::~Recipe(void){}

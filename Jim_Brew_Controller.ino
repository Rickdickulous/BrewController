#include "Recipe.h"

// Create Recipe objects for each of Jim's recipes.
void initializeRecipes(void)  // Recipe(preMashTemp, mashTemp, hopAdditions, boilTime, mashTime)
{
    Recipe IrishRed = Recipe(160, 153);
    Recipe AlpineSpring = Recipe(158, 152);
    Recipe IPA = Recipe(161, 155, 75, 60);
    Recipe OktoberFAST = Recipe(161, 155, 90, 90);
    Recipe Yuengling = Recipe(175, 168, 90, 75);
}
 
void setup() {
  Serial.begin(9600);
  initializeRecipes();  
}

void loop() {
  // put your main code here, to run repeatedly:
  
}

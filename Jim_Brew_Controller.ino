#include "Recipe.h"



/*
 *     ANY SOURCE CODE NOT CALLED IS NOT COMPILED AND THUS DOESN'T USE MEMORY - can have logging, but have flags that turn it on and off
 * 
 */

 
// Create Recipe objects for each of Jim's recipes.
void initializeRecipes(void)  // Recipe(preMashTemp, mashTemp, hopAdditions, boilTime, mashTime)
{
    Recipe IrishRed = Recipe(160, 153);
    IrishRed.hopAdditions(60);
    Serial.print("Irish red hop additions: ");
    Serial.println(IrishRed.numHopAdditions);

    Recipe AlpineSpring = Recipe(158, 152);
    AlpineSpring.hopAdditions(60, 30, 15);
    Serial.print("Alpine Spring hop additions: ");
    Serial.println(AlpineSpring.numHopAdditions);

    Recipe IPA = Recipe(161, 155, 75, 60);
    IPA.hopAdditions(75, 30, 25, 20, 15, 10, 5);
    Serial.print("IPA hop additions: ");
    Serial.println(IPA.numHopAdditions);
    
    Recipe OktoberFAST = Recipe(161, 155, 90, 90);
    OktoberFAST.hopAdditions(60, 45, 30);
    Serial.print("Oktoberfest hop additions: ");
    Serial.println(OktoberFAST.numHopAdditions);

    Recipe Yuengling = Recipe(175, 168, 90, 75);
    Yuengling.hopAdditions(60, 30);
    Serial.print("Yuengling hop additions: ");
    Serial.println(Yuengling.numHopAdditions);
}
 
void setup() {
  Serial.begin(9600);
  initializeRecipes();  
}

void loop() {
  // put your main code here, to run repeatedly:
  
}

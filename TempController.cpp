#include "TempController.h"

TempController::TempController(void)
{

}


float TempController::convertInputToTemp_f(float Vcounts)
{
    Rt = R1 / (1024/Vcounts - 1);
    float temp_c = (-26.65) * log(Rt) + 271.11;
    float temp_f = temp_c * 1.8 + 32;
    return temp_f;
}


float TempController::convertInputToTemp_c(float Vcounts)
{
    Rt = R1 / (1024/Vcounts - 1);
    float temp_c = (-26.65) * log(Rt) + 271.11;
    return temp_c;
}


float TempController::cToF(float temp_c)
{
    return temp_c * 1.8 + 32;
}


TempController::~TempController(void)
{

}

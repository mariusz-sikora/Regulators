#include "stdio.h"
#include "Objects.h"
#include "Regulators.h"
#include "Common.h"


int main(int argc, char *argv[]){

    double T[] = {10};

    ObjectPtr obj = CreateObject(10, 10, T, NELEMENTS(T));
    RunObject(obj, 10);
    RegulatorPtr reg = CreateRegulatorP(10);
    RegulatorPtr reg2 = CreateRegulatorPI(10, 10);

    return 0;
}

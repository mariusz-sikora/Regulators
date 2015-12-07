#include "Regulators.h"

struct _REGULATOR {
    double P;
};

struct _REGULATOR gReg;

RegulatorPtr CreateRegulatorP(
    double P) {

    RegulatorPtr RegHandle = &gReg;
    RegHandle->P = P;

    return RegHandle;
}

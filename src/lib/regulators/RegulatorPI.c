#include "Regulators.h"

struct _REGULATOR {
    double P;
    double I;
};

struct _REGULATOR gReg;

RegulatorPtr CreateRegulatorPI(
    double P,
    double I) {

    RegulatorPtr RegHandle = &gReg;
    RegHandle->P = P;
    RegHandle->I = I;

    return RegHandle;
}


#ifndef _REGULATORS_H
#define _REGULATORS_H

typedef struct _REGULATOR *RegulatorPtr;

RegulatorPtr CreateRegulatorP(
    double P);

RegulatorPtr CreateRegulatorPI(
    double P,
    double I);

#endif // _REGULATORS_H

#include "ObjectsCommon.h"
#include "FirstOrderObject.h"
#include "Common.h"
#include "stdio.h"

struct _OBJECT_DETAILS {
    double K;
    double Tk;
    double T;
    double y[2];
};

struct _OBJECT gObj;
struct _OBJECT_DETAILS gObjDetails;

static double FirstOrderObjectRun(double input) {

    return 0.0;
}

ObjectPtr CreateFirstOrderObject(
    double K,
    double Tk,
    double T) {

    ObjectPtr objHandle = &gObj;
    ObjectDetails objDetailsHandle = &gObjDetails;

    objDetailsHandle->K = K;
    objDetailsHandle->T = T;
    objDetailsHandle->Tk = Tk;
    objDetailsHandle->y[0] = 0.0;
    objDetailsHandle->y[1] = 0.0;

    objHandle->objDetails = objDetailsHandle;
    objHandle->Run = FirstOrderObjectRun;

    return objHandle;
}

void UpdateFirstOrderObject(
    ObjectPtr objHandle,
    double K,
    double Tk,
    double T) {

    objHandle->objDetails->K = K;
    objHandle->objDetails->T = T;
    objHandle->objDetails->Tk = Tk;
}

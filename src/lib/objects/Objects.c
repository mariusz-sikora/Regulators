#include "Objects.h"
#include "ObjectsCommon.h"
#include "FirstOrderObject.h"
#include "Common.h"

#include "stdio.h"

#define FIRST_ORDER_OBJECT 1

ObjectPtr CreateObject(
    double K,
    double Tk,
    double *T,
    int objectOrder) {

    ObjectPtr objHandle = NULL;

    switch (objectOrder) {
        case FIRST_ORDER_OBJECT:
            objHandle = CreateFirstOrderObject(K,Tk, T[0]);
            break;
    }


    return objHandle;
}

void UpdateObject(
    ObjectPtr objHandle,
    double K,
    double Tk,
    double T[],
    int objectOrder) {

    switch (objectOrder) {
        case FIRST_ORDER_OBJECT:
            UpdateFirstOrderObject(objHandle, K, Tk, T[0]);
            break;
    }
}

double RunObject(
    ObjectPtr objHandle,
    double input) {

    double output = 0.0;

    if(NULL != objHandle) {
        output = objHandle->Run(input);
    }

    return output;
}


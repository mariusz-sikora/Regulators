
#ifndef _OBJECTS_H
#define _OBJECTS_H

typedef struct _OBJECT *ObjectPtr;

ObjectPtr CreateObject(
    double K,
    double Tk,
    double T[],
    int objectOrder);


void UpdateObject(
    ObjectPtr objHandle,
    double K,
    double Tk,
    double T[],
    int objectOrder);

double RunObject(
    ObjectPtr objHandle,
    double input);


#endif // _OBJECTS_H

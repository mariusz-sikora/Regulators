
#ifndef _OBJECTS_COMMON_H
#define _OBJECTS_COMMON_H

#include "Objects.h"

typedef double (*RUN)(double input);

typedef struct _OBJECT_DETAILS *ObjectDetails;

struct _OBJECT {
    RUN Run;
    ObjectDetails objDetails;
};

#endif // _OBJECTS_COMMON_H

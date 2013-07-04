#ifndef FREEQUERY_H
#define FREEQUERY_H
#include "share_include.h"
class FreeQuery
{
public:
    FreeQuery();

    vector<vector<QVariant> > ejecutar(_QSTR consulta);
};

#endif // FREEQUERY_H

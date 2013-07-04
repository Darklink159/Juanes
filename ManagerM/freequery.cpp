#include "freequery.h"

FreeQuery::FreeQuery()
{
}

 vector<vector<QVariant> > FreeQuery::ejecutar(_QSTR consulta)
{
        QSqlQuery query;
        vector<vector<QVariant> > matrix;


        query.prepare(consulta);

        query.exec();

        while(query.next())
        {
            qDebug()<<query.value(0).toString()<<endl;
            vector<QVariant> fila;
            QSqlRecord rec = query.record();

            for(int i=0;i<rec.count();i++)
            {
                            fila.push_back(query.value(i));
            }

            matrix.push_back(fila);
        }

        return matrix;

}

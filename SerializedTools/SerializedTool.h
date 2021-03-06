#ifndef SERIALIZEDTOOL_H
#define SERIALIZEDTOOL_H

#include "ISerialized.h"
#include "ISerializedModel.h"
#include "JsonSerializedType.h"
#include "RegistorType.h"
#include "serializedtools_global.h"
#include <QPair>
#include <QMap>


#define GETNAME(type) (#type)

class SERIALIZEDTOOLSSHARED_EXPORT SerializedTool
{
public:
    static SerializedTool* Instance();
    void Registor(RegistorType type);

    QString Serialized(ISerializedModel* data, QString typeName);
    void Deserialized(ISerializedModel* data, QString typeName, QString dataStr);

    QString Serialized(void* data, QString typeName);
    void Deserialized(void* data, QString typeName, QString dataStr);

private:
    SerializedTool();
    QMap<QString, QList<SerializedData>*> container;
    ISerialized * itool;
};

#endif // SERIALIZEDTOOL_H

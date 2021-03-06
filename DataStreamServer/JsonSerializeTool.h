#ifndef JSONSERIALIZETOOL_H
#define JSONSERIALIZETOOL_H

#include "ISerializeTool.h"
#include "SerializeDataType.h"
#include <QList>
#include "QJsonValue"

class JsonSerializeTool : public ISerializeTool
{
public:
    virtual QString Serialization(AbsSerializeData* data);
    virtual void Deserialization(AbsSerializeData* data, QString strData);

private:
    QJsonValue GetQJsonValue(const SerializeData* temp);
    void SetDataValue(const SerializeData* temp, QJsonValue value);
};

#endif // JSONSERIALIZETOOL_H

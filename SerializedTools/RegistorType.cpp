#include "RegistorType.h"

RegistorType::RegistorType()
{
    this->typeName = "";
}

RegistorType::RegistorType(const RegistorType &data)
{
    this->typeName = data.typeName;
    this->Keys = data.Keys;
}

RegistorType::RegistorType(const QString typeName)
{
    this->typeName = typeName;
    this->Keys =new QList<SerializedData>();
}

void RegistorType::RegistorField(const void *pThis, QString key, void *keyPointer, ISerializedType* type)
{
    if(this->typeName == "")
    {
        qDebug() << "null of typeName, please use RegistorType::RegistorType(QString typeName)";
        return;
    }

    SerializedData keydata;
    keydata.key =  key;
    keydata.offset = (char*)pThis - (char*)keyPointer;
    keydata.type = type;

    this->Keys->append(keydata);
}

QList<SerializedData>* RegistorType::GetKeys()
{
    return this->Keys;
}

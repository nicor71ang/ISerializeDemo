#ifndef TEACHER_H
#define TEACHER_H
#include <QString>
#include <qpair.h>
#include "../SerializedTools/ISerializedModel.h"
#include "Student.h"

class Teacher :public IJsonModel
{
public:
    Teacher();

    //    QPair<int,int>* pair;
    Student * st;
    Student * st1;
    Student  st2;
    QString name;
    int age;

    // ISerializedModel interface
public:
    void RegistorTool();

    // IJsonModel interface
public:
    QString EncodeToJson();
    void DecodeFromJson(QString json);
};

#endif // TEACHER_H

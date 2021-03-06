#-------------------------------------------------
#
# Project created by QtCreator 2018-08-27T18:22:29
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = tst_serializetesttest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        tst_serializetesttest.cpp \ 
    ../SerializeLibSrc/AbsSerializeData.cpp \
    ../SerializeLibSrc/JsonSerializeTool.cpp \
    ../SerializeLibSrc/Position.cpp \
    Teacher.cpp \
    Student.cpp \
    School.cpp \
    Classroom.cpp \
    ../SerializeLibSrc/ISerializeTypeJson.cpp \
    CustomerJsonSerialize_QListTeacher.cpp \
    CustomerJsonSerialize_QListPStudent.cpp

DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS += \
    ../SerializeLibSrc/AbsSerializeData.h \
    ../SerializeLibSrc/ISerializeTool.h \
    ../SerializeLibSrc/JsonSerializeTool.h \
    ../SerializeLibSrc/Position.h \
    ../SerializeLibSrc/SerializeData.h \
    ../SerializeLibSrc/Serializelib_Global.h \
    Teacher.h \
    Student.h \
    School.h \
    Classroom.h \
    ../SerializeLibSrc/ISerializeType.h \
    ../SerializeLibSrc/ISerializeTypeJson.h \
    CustomerJsonSerialize_QListTeacher.h \
    CustomerJsonSerialize_QListPStudent.h

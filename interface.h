#pragma once

// Интерфейс "Геометрическая фигура"
class IGeoFig {
public:
    // Площадь
    virtual double square() = 0;
    // Перимет
    virtual double perimeter() = 0;
};

// Вектор
class Vector2D {
public:
    double x, y;
};

// Интерфейс "Физический объект"
class PhysObject {
public:
    // Масса, кг
    virtual double mass() const = 0;
    // Координаты центра масс, м
    virtual Vector2D position() = 0;
    // Сравнение по массе.
    virtual bool operator== (const PhysObject& ob) const = 0;
    // Сравнение по массе.
    virtual bool operator< (const PhysObject& ob) const = 0;
};

// Интерфейс "Отображаемый"
class Printable {
public:
    // Отобразить на экране
    // (выводить в текстово виде параметры фигуры).
    virtual void draw() = 0;
};

// Интерефейс для классов, которые можно задать через диалог с пользователем
class DialogInitiable {
    // Задать параметры объекта с помошью диалога с пользователем
    virtual void initFromDialog() = 0;
};

// Интерфейс "Клас"
class BaseObject {
public:
    // Имя класса (типа данных)
    virtual const char* classname() = 0;
    // Размер занимаемой памяти
    virtual int size() = 0;
};
class IAllTheInterfaces : public IGeoFig, public Vector2D, public PhysObject, public Printable, public DialogInitiable, public BaseObject {};


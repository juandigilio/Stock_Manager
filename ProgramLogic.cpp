#include "ProgramLogic.h"

ProgramLogic::ProgramLogic()
{
}

ProgramLogic::~ProgramLogic()
{
}

void ProgramLogic::AddItem(Type type, string brand, Color color, string unit, int size, int size2)
{
    time_t actualDate = time(nullptr);

    Object object(actualDate, type, brand, generalID, color, unit, size, size2);

    generalID++;

    stock.push_back(object);
}

Object ProgramLogic::DeleteItem(int id)
{
    Object* temp = nullptr;

    auto it = stock.begin(); 

    for (auto& object : stock)
    {
        if (object.GetID() == id)
        {
            *temp = object;

            stock.erase(it);

            break;
        }
        else
        {
            it++;
        }
    }

    return *temp;
}

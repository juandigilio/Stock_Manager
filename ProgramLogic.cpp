#include "ProgramLogic.h"

ProgramLogic::ProgramLogic()
{
}

ProgramLogic::~ProgramLogic()
{
}

void ProgramLogic::AddItem()
{
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

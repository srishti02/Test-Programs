#ifndef DOOR_ACTION_H
#define DOOR_ACTION_H

#include "action.h"
#include "door.h"

namespace ELEVATOR_SYSTEM
{
  /**
   * @description command interface implementation
   */
  class OpenDoor : public Action
  {
    private: 

      /** receiver object */
      Door* _door = nullptr;

    public:

      OpenDoor(Door* doorToOpen)
        :
          _door(doorToOpen)
    {}

      void execute(...) override
      {
        _door->open(...);
      }
  };
  
  /**
   * @description command interface implementation
   */
  class CloseDoor : public Action
  {
    private: 

      /** receiver object */
      Door* _door = nullptr;

    public:

      CloseDoor(Door* doorToClose)
        :
          _door(doorToClose)
    {}

      void execute(...) override
      {
        _door->close(...);
      }
  };
}

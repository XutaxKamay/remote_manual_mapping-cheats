///If a function contains _ at its start, it means that the networked variable/function was referenced twice but might be different offset.

#ifndef SDK_CTEProjectedDecal
#define SDK_CTEProjectedDecal
#pragma once

class CTEProjectedDecal
{
 public:

   class DT_TEProjectedDecal
   {
    public:

      template<typename T = unsigned long> __forceinline static T vecOrigin() { return ( T ) 0x10; }
      template<typename T = unsigned long> __forceinline static T angRotation() { return ( T ) 0x1C; }
      template<typename T = unsigned long> __forceinline static T flDistance() { return ( T ) 0x28; }
      template<typename T = unsigned long> __forceinline static T nIndex() { return ( T ) 0x2C; }
   };
};

#endif

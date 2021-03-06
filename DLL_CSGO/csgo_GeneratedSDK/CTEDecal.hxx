///If a function contains _ at its start, it means that the networked variable/function was referenced twice but might be different offset.

#ifndef SDK_CTEDecal
#define SDK_CTEDecal
#pragma once

class CTEDecal
{
 public:

   class DT_TEDecal
   {
    public:

      template<typename T = unsigned long> __forceinline static T vecOrigin() { return ( T ) 0x10; }
      template<typename T = unsigned long> __forceinline static T vecStart() { return ( T ) 0x1C; }
      template<typename T = unsigned long> __forceinline static T nEntity() { return ( T ) 0x28; }
      template<typename T = unsigned long> __forceinline static T nHitbox() { return ( T ) 0x2C; }
      template<typename T = unsigned long> __forceinline static T nIndex() { return ( T ) 0x30; }
   };
};

#endif

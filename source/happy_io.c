
#include <happyted.h>

// ==================
// * get joystick 1 *
// ==================
unsigned char get_joystick_21()
{
  POKE(0xFD30,0xFF);// Blocage clavier
  POKE(0xFF08,0xFB);// Préparation du joystick 2
  return PEEK(0xFF08);  
}
  
  // ==================
  // * get joystick 2 *
  // ==================
  unsigned char get_joystick_2()
  {
    POKE(0xFD30,0xFF);// Blocage clavier
    POKE(0xFF08,0xFD);// Préparation du joystick 2
    return PEEK(0xFF08);  
  }
  
  
// ==================================
// * Attendre l'appuis d'une touche *
// ==================================
void wait_key(unsigned char id_key)
{
  if (id_key==KEY_EMPTY)
  {
    while(get_keyboard_key() ==KEY_EMPTY)
    {
      wait_vbl();
    }
  }
  else
  {
    while(get_keyboard_key() !=id_key)
    {
      wait_vbl();
    }
  }
}
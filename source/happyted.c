


// ===================
// * Fichier include *
// ===================
#include <happyted.h>
#include <string.h>

  // ==========================
  // * set_location_character *
  // ==========================
  void set_location_character(unsigned char id)
  {
    unsigned char buffer;
    buffer = PEEK(0xFF13)& 0b00000011;
    id = (id<<2)+buffer;    
    POKE(0xFF13,id);
  }
  
  // ======================
  // * set_data_character *
  // ======================
  void set_data_character(unsigned int memory_adresse,unsigned char *data_character,unsigned char nb_pattern)
  {
    unsigned int nb_octet = nb_pattern<<3;  
    memcpy((char*)memory_adresse,(char*)data_character,nb_octet);  
  }

  // ==================
  // * draw_character *
  // ==================
  void draw_character(unsigned char position_x, unsigned char position_y, unsigned char id_character)
  {
    // -------------
    // * Variables *
    // -------------
    unsigned int adr_character;
    
    // -----------
    // * Routine *
    // -----------
    adr_character = (position_y*40+position_x) + 0x0C00;
    POKE(adr_character,id_character);
  
  }

  // =================
  // * set_color_map *
  // =================
  void set_color_map(unsigned char position_x, unsigned char position_y,unsigned char color_id)
  {
    
    // -------------
    // * Variables *
    // -------------
    unsigned int adr_color;
    
    // -----------
    // * Routine *
    // -----------
    adr_color = (position_y*40+position_x) + 0x0800;
    POKE(adr_color,color_id);
  }
  
  // =====================
  // * draw_full_charset *
  // =====================
  void draw_full_character(unsigned char position_x, unsigned char position_y,unsigned char id_character,unsigned char color_id)
  {
    // -------------
    // * Variables *
    // -------------
    unsigned int adr_character;
    unsigned int adr_color;
    unsigned int position;
  
    // -----------
    // * Routine *
    // -----------
    position = position_y*40+position_x;
    adr_character = position + 0x0C00;
    adr_color = position + 0x0800;
    POKE(adr_color,color_id);
    POKE(adr_character,id_character);    
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
  
  
  // ========================
  // * set_color_background *
  // ========================
  void set_color_background (unsigned char color_id)
  {
    POKE(0xFF15,color_id);
  }
   
  // ==========================
  // * set_color_background_1 *
  // ==========================
  void set_color_background_1 (unsigned char color_id)
  {
    POKE(0xFF16,color_id);
  }
  
  // ==========================
  // * set_color_background_2 *
  // ==========================
  void set_color_background_2 (unsigned char color_id) 
  {
    POKE(0xFF17,color_id);
  }
   
  // ==========================
  // * set_color_background_3 *
  // ==========================
  void set_color_background_3 (unsigned char color_id)
  {
    POKE(0xFF18,color_id);
  }
  
  // ====================
  // * set_color_border *
  // ====================
  void set_color_border (unsigned char color_id)
  {
    POKE(0xFF19,color_id);
  }
  
  
// =============
// * get_bit() *
// =============
unsigned char get_bit(unsigned char id_bit,unsigned char value)
{
  return value = (value >> id_bit)&0b00000001;
}

// =============================================
// * set_bit(numero du bit, valeur à modifier) *
// =============================================
unsigned char set_bit(unsigned char id_bit, unsigned char value)
{
    return value = value |(1<<id_bit);
}

// =============================================
// * unset_bit(numero du bit, valeur à modifier) *
// =============================================
unsigned char unset_bit(unsigned char id_bit, unsigned char value)
{
    return value = value &(~(1<<id_bit));
}

// ===================
// * Fichier include *
// ===================
#include <happyted.h>
#include <string.h>

unsigned char x,y;

unsigned char tiles[]=
{
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 
 0b11111111,
 0b10000001,
 0b10000001,
 0b10000001,
 0b10000001,
 0b10000001,
 0b10000001,
 0b11111111
};


unsigned char map[]=
{
  1,1,1,1,1,1,1,1,
  1,0,0,0,0,0,0,1,
  1,0,0,0,0,0,0,1,
  1,0,0,0,0,0,0,1,
  1,0,0,0,0,0,0,1,
  1,0,0,0,0,0,0,1,
  1,1,0,1,0,1,0,1,
  1,1,1,1,1,1,1,1
  
  
};




// ======================
// * La fonction main() *
// ======================
void main()
{
  unsigned char id_map;
  
  SCREEN_OFF;
  //                      CLLLCCCC
  set_color_border     (0b01111110);
  set_color_background (0b00000000);
  
  POKE(0xFF12,170);
  set_data_character(0x1400+0x400,tiles,2);  
  set_location_character(6); // 5*0x400


  
    for (y=0;y<8;y++)
    {
        for (x=0;x<8;x++)
        {
      
        id_map=map[y*8+x];
        draw_full_character(x, y,id_map,0b01110001);
        
        
        }
    }
    

load_file("c64,s",(void*)0x1800,8);
set_text_pointer(0);

   SCREEN_ON;
  while(1)
  {
   
    if (get_joystick_2()==J_LEFT)
    {
        cls(0);
        draw_text(0,0,"Hello World",0b01111110,0);
    }
    
     if (get_joystick_2()==J_RIGHT)
    {
        draw_full_character(10, 11,1,0b00001111);
    }
    

     
  }
  
  
  
}
#ifndef HAPPYPLUS
  #define HAPPYPLUS
  
  // =========
  // * Tiles *
  // =========
  void set_location_character(unsigned char id);
  
  void set_data_character(unsigned int memory_adresse,unsigned char *data_character,unsigned char nb_pattern);
  
  void draw_character(unsigned char position_x, unsigned char position_y, unsigned char id_character);
  
  void set_color_map(unsigned char position_x, unsigned char position_y,unsigned char color_id);
  
  void draw_full_character(unsigned char position_x, unsigned char position_y,unsigned char id_character,unsigned char color_id);
  
  // =================
  // * Couleur Ecran *
  // =================
   void set_color_border (unsigned char color_id); 
   void set_color_background (unsigned char color_id); 
   void set_color_background_1 (unsigned char color_id); 
   void set_color_background_2 (unsigned char color_id); 
   void set_color_background_3 (unsigned char color_id); 
  
  // ============
  // * Joystick *
  // ============
  #define J_UP       0xFE
  #define J_DOWN     0xFD
  #define J_LEFT     0xFB
  #define J_RIGHT    0xF7
  #define J_FIRE_J2  0x7F
  #define J_FIRE_J1  0xBF
  
  unsigned char get_joystick_2();
  
  
  // ================
  // * Peek et Poke *
  // ================
   
  #define PEEK(addr)         (*(unsigned char*) (addr)) 
  #define POKE(addr,val)     (*(unsigned char*) (addr) = (val)) 
  #define PEEKW(addr)         (*(unsigned int*) (addr)) 
  #define POKEW(addr,val)     (*(unsigned int*) (addr) = (val))
  
  // ========
  // * Bits *
  // ========  
  unsigned char get_bit(unsigned char id_bit,unsigned char value);   
  unsigned char set_bit(unsigned char id_bit, unsigned char value); 
  unsigned char unset_bit(unsigned char id_bit, unsigned char value);
  
  
  
  // =========
  // * Ecran *
  // =========
  #define SCREEN_ON   POKE(0xFF06,PEEK(0xFF06)|16)  // Allumage de l'écran
  #define SCREEN_OFF  POKE(0xFF06,PEEK(0xFF06)&239) // Eteindre l'écran
  
  // ==========
  // * Entrer *
  // ==========
  #define get_keyboard_key() PEEK(0xC6)
  
  
  // ** Desactiver la touche shift **
  #define set_shift_off() POKE(0x547,128)
  
  // ** Active la touche shift
  #define set_shift_on() POKE(0x547,0)
  
  // ****************************
	// ** Numeros Touche Clavier **
	// **    adresse C6          **
	// ****************************
	
	// ============================
	// ** Lettre de l'alphabet   **
	// ============================
	#define KEY_A 10
	#define KEY_B 28
	#define KEY_C 20
	#define KEY_D 18
	#define KEY_E 14
	#define KEY_F 21
	#define KEY_G 26
	#define KEY_H 29
	#define KEY_I 33
	#define KEY_J 34
	#define KEY_K 37
	#define KEY_L 42
	#define KEY_M 36
	#define KEY_N 39
	#define KEY_O 38
	#define KEY_P 41
	#define KEY_Q 62
	#define KEY_R 17
	#define KEY_S 13
	#define KEY_T 22
	#define KEY_U 30
	#define KEY_V 31
	#define KEY_W 9
	#define KEY_X 23
	#define KEY_Y 25
	#define KEY_Z 12
	
	// ============================
	// ** Valeurs numeriques     **
	// ============================
	#define KEY_0 35
	#define KEY_1 56
	#define KEY_2 59
	#define KEY_3 8
	#define KEY_4 11
	#define KEY_5 16
	#define KEY_6 19
	#define KEY_7 24
	#define KEY_8 27
	#define KEY_9 32
	
	// ============================
	// ** Touche Divers          **
	// ============================
	#define KEY_L_ARR 57
	#define KEY_CLR 51
	#define KEY_DEL 0
	#define KEY_RET 1
	#define KEY_DN 4
	#define KEY_RT 2
	#define KEY_STOP 63 // Echape
	#define KEY_SPC 60 // Espace
	#define KEY_EMPTY 64 // Pas de touche
	
  #define KEY_ANY 64 // N'importe qu'elle touche pour le wait_key
  
  
	// ============================
	// ** Touches Arithmétiques  **
	// ============================
	#define KEY_PLUS 54
	#define KEY_MOINS 46
	#define KEY_DIVISER 55
	#define KEY_MULTIPLIER 49
	
	// ============================
	// ** Touches de Fonctions   **
	// ============================
	#define KEY_F1 4
	#define KEY_F3 5
	#define KEY_F5 6

  // ======================
  // ** Touche direction **
  // ======================
  #define KEY_DROITE 51
  #define KEY_GAUCHE 48
  #define KEY_HAUT   43
  #define KEY_DOWN   40
#endif
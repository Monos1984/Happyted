// ===============
// * class_hero.h *
// ===============

#ifndef CLASS_HERO_H
  #define CLASS_HERO_H

  // =============================
  // * Declaration des fonctions *
  // =============================
  unsigned char get_hero_px();
  unsigned char get_hero_py();
  void set_hero_px(unsigned char value);
  void set_hero_py(unsigned char value);
  void draw_hero();
  unsigned char get_hero_case();


  // ==========
  // * Define *
  // ==========
  #define HERO_PX  0x400
  #define HERO_PY  0x401
  #define HERO_MAP 0x402
  
#endif
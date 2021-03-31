#ifndef LITTLE_ROGUE_H
  #define LITTLE_ROGUE_H

  // =========================
  // * Les fichiers includes *
  // =========================
  #include <happyc64.h>

  // =================
  // * fichier scene *
  // =================
  #include "scene_workflow.h"
  #include "scene_game.h"
  #include "class_map.h"
  #include "class_hero.h"
  #include "class_input.h"
  
  // ===============
  // * Data Global *
  // ===============
  extern unsigned char data_map[];
  extern unsigned char data_hero[];
  extern unsigned char data_meta_tiles[];

  // ======================
  // * Define  Meta tiles *
  // ======================
  #define NB_DATA_META_TILE 6
  #define ID_T1 0
  #define ID_T2 1
  #define ID_T3 2
  #define ID_T4 3
  #define ID_PASSABILITE 4
  #define ID_TYPE 5
  
  #define OSEF 0
  #define ITEM 1
  #define MONSTER 2


#endif
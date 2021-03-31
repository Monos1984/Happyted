#ifndef workflow_h
  #define workflow_h
  
  // ===================
  // * define de scene *
  // ===================
  
  #define SCENE_TITLE_SCREEN    10
  #define SCENE_INTRODUCTION    11 
  #define SCENE_GAME_OVER       12
  #define SCENE_GAME            20
  
  // ===========================
  // * Signature des fonctions *
  // ===========================
  unsigned char get_scene();  
  void set_scene(unsigned char id_scene);
#endif

#ifndef VOXEL_H
#define VOXEL_H

/**
 * @brief The Voxel struct
 * é a definição do tipo de dados Voxel,
 * os quais possuem informação de cor,
 * transparência e se será incluído ou não
 * no modelo da escultura digital.
*/

struct Voxel {
  float r,g,b; // Colors
  float a;
// Transparency
  bool isOn; // Included or not
};

#endif // VOXEL_H

//********************************************************************************//
// Puara Gestures - SkinConductance (.h)                                                     //
// https://github.com/Puara/puara-gestures                                        //
// Société des Arts Technologiques (SAT) - https://sat.qc.ca                      //
// Input Devices and Music Interaction Laboratory (IDMIL) - https://www.idmil.org //
// Edu Meneses (2024) - https://www.edumeneses.com                                //
// Maggie Needham (2024) 
// Luana Belinsky (2025)                                                         //
//********************************************************************************//

#pragma once

#include <puara/structs.h>
#include <puara/utils.h>
#include <3rdparty/BioData/src/SkinConductance.h>

#include <cmath>

namespace puara_gestures
{


class BioData_SkinConductance
{
public:
  SkinConductance skin;

  BioData_SkinConductance() { skin.reset(); }

  void update(double signal)
  {
    skin.update(signal);
  }

  int raw() { return skin.getRaw(); }

  double SCL() { return skin.getSCL(); }

  double SCR() { return skin.getSCR(); }

};
}

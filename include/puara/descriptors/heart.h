//********************************************************************************//
// Puara Gestures - Heart (.h)                                                     //
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
#include <3rdparty/BioData/src/Heart.h>

#include <cmath>

namespace puara_gestures
{


class BioData_Heart
{
public:
  Heart heart;

  BioData_Heart() { heart.reset(); }

  void update(double signal)
  {
    heart.update(signal);
  }

  int raw() { return heart.getRaw(); }

  double normalized() { return heart.getNormalized(); }

  int bpm() { return heart.getBPM(); }

  double bpmChange() { return heart.bpmChange(); }

  double amplitudeChange() { return heart.amplitudeChange(); }
};
}

//********************************************************************************//
// Puara Gestures - Respiration (.h)                                                     //
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
#include "BioData/src/Respiration.h"

#include <cmath>

namespace puara_gestures
{


class BioData_Respiration
{
public:
  Respiration resp;

  BioData_Respiration() { resp.reset(); }

  void update(double signal)
  {
    resp.update(signal);
  }

  int raw() { return resp.getRaw(); }
  double normalized() { return resp.getNormalized(); }
  double scaled() { return resp.getScaled(); }
  bool isExhaling() { return resp.isExhaling(); }
  int rawAmplitude() { return resp.getRawAmplitude(); }
  double normalizedAmplitude() { return resp.getNormalizedAmplitude(); }
  double scaledAmplitude() { return resp.getScaledAmplitude(); }
  double amplitudeLevel() { return resp.getAmplitudeLevel(); }
  double amplitudeChange() { return resp.getAmplitudeChange(); }
  double amplitudeVariability() { return resp.getAmplitudeVariability(); }
  int interval() { return resp.getInterval(); }
  double rpm() { return resp.getRpm(); }
  double normalizedRpm() { return resp.getNormalizedRpm(); }
  double scaledRpm() { return resp.getScaledRpm(); }
  double rpmLevel() { return resp.getRpmLevel(); }
  double rpmChange() { return resp.getRpmChange(); }
  double rpmVariability() { return resp.getRpmVariability(); }

};
}

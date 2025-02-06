//********************************************************************************//
// Puara Gestures - Peak Detector (.h)                                                     //
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
#include <3rdparty/BioData/src/PeakDetector.h>

#include <cmath>

namespace puara_gestures
{


class PeakDetection
{
public:
  PeakDetector max(0.5, PEAK_MAX);
  PeakDetector min(0.5, PEAK_MIN);

  PeakDetection(double maxTriggerThreshold = 0.5, double maxReloadThreshold = 0.5, double maxFallbackTolerance = 0.1, double minTriggerThreshold = 0.5, double minReloadThreshold = 0.5, double minFallbackTolerance = 0.1) { 
    max.triggerThreshold = maxTriggerThreshold;
    max.reloadThreshold = maxReloadThreshold;
    max.fallbackTolerance = maxFallbackTolerance;
    min.triggerThreshold = minTriggerThreshold;
    min.reloadThreshold = minReloadThreshold;
    min.fallbackTolerance = minFallbackTolerance;
    }

  void update(double signal) {
    max.put(signal);
    min.put(signal);
  }
  bool peakDetected() {
    return max.isOn();
  }

  bool troughDetected(){
    return min.isOn();
  }

};
}

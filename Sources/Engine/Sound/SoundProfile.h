/* Copyright (c) 2002-2012 Croteam Ltd. All rights reserved. */

#ifndef SE_INCL_SOUNDPROFILE_H
#define SE_INCL_SOUNDPROFILE_H
#ifdef PRAGMA_ONCE
  #pragma once
#endif

#include <Engine/Base/Profiling.h>

/* Class for holding profiling information for sound operations. */
class CSoundProfile : public CProfileForm {
public:
  // indices for profiling counters and timers
  enum ProfileTimerIndex {
    PTI_MIXSOUNDS,          // MixSounds()
    PTI_DECODESOUND,        // DecodeSound()
    PTI_MIXSOUND,           // MixSound()
    PTI_RAWMIXER,           // Raw Mixer Loop
    PTI_UPDATESOUNDS,       // UpdateSounds()

    PTI_COUNT
  };
  enum ProfileCounterIndex {
    PCI_MIXINGS,           // number of mixings

    PCI_SOUNDSMIXED,       // sounds mixed
    PCI_SOUNDSSKIPPED,     // sounds skipped for low volume
    PCI_SOUNDSDELAYED,     // sounds delayed for sound speed latency
    PCI_SAMPLES,      // samples mixed

    PCI_COUNT
  };
  // constructor
  CSoundProfile(void);
};


#endif  /* include-once check. */


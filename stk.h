/*
  ==============================================================================

   This file is part of the JUCE library - "Jules' Utility Class Extensions"
   Copyright 2004-11 by Raw Material Software Ltd.

  ------------------------------------------------------------------------------

   JUCE can be redistributed and/or modified under the terms of the GNU General
   Public License (Version 2), as published by the Free Software Foundation.
   A copy of the license is included in the JUCE distribution, or can be found
   online at www.gnu.org/licenses.

   JUCE is distributed in the hope that it will be useful, but WITHOUT ANY
   WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
   A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

  ------------------------------------------------------------------------------

   To release a closed-source product which uses JUCE, commercial licenses are
   available: visit www.rawmaterialsoftware.com/juce for more information.

  ==============================================================================
*/

#ifndef __STK_STKHEADER__
#define __STK_STKHEADER__

#include "../juce_core/juce_core.h"

#if JUCE_LITTLE_ENDIAN && ! defined (__LITTLE_ENDIAN__)
 #define __LITTLE_ENDIAN__
#endif

#if JUCE_MAC
 #define __MACOSX_CORE__
#endif

#if JUCE_MSVC
 #pragma warning (push)
 #pragma warning (disable: 4127 4702 4244 4305 4100 4996 4309)
#endif

//=============================================================================
#include "stk/ADSR.h"
#include "stk/Asymp.h"
#include "stk/BandedWG.h"
#include "stk/BeeThree.h"
#include "stk/BiQuad.h"
#include "stk/Blit.h"
#include "stk/BlitSaw.h"
#include "stk/BlitSquare.h"
#include "stk/BlowBotl.h"
#include "stk/BlowHole.h"
#include "stk/Bowed.h"
#include "stk/BowTable.h"
#include "stk/Brass.h"
#include "stk/Chorus.h"
#include "stk/Clarinet.h"
#include "stk/Cubic.h"
#include "stk/Delay.h"
#include "stk/DelayA.h"
#include "stk/DelayL.h"
#include "stk/Drummer.h"
#include "stk/Echo.h"
#include "stk/Effect.h"
#include "stk/Envelope.h"
#include "stk/FileLoop.h"
#include "stk/FileRead.h"
#include "stk/FileWrite.h"
#include "stk/FileWvIn.h"
#include "stk/FileWvOut.h"
#include "stk/Filter.h"
#include "stk/Fir.h"
#include "stk/Flute.h"
#include "stk/FM.h"
#include "stk/FMVoices.h"
#include "stk/FormSwep.h"
#include "stk/Function.h"
#include "stk/Generator.h"
#include "stk/Granulate.h"
#include "stk/HevyMetl.h"
#include "stk/Iir.h"
#include "stk/Instrmnt.h"
#include "stk/JCRev.h"
#include "stk/JetTable.h"
#include "stk/LentPitShift.h"
#include "stk/Mandolin.h"
#include "stk/Mesh2D.h"
#include "stk/MidiFileIn.h"
#include "stk/Modal.h"
#include "stk/ModalBar.h"
#include "stk/Modulate.h"
#include "stk/Moog.h"
#include "stk/Noise.h"
#include "stk/NRev.h"
#include "stk/OnePole.h"
#include "stk/OneZero.h"
#include "stk/PercFlut.h"
#include "stk/Phonemes.h"
#include "stk/PitShift.h"
#include "stk/Plucked.h"
#include "stk/PoleZero.h"
#include "stk/PRCRev.h"
#include "stk/ReedTable.h"
#include "stk/Resonate.h"
#include "stk/Rhodey.h"
#include "stk/Sampler.h"
#include "stk/Saxofony.h"
#include "stk/Shakers.h"
#include "stk/Simple.h"
#include "stk/SineWave.h"
#include "stk/SingWave.h"
#include "stk/Sitar.h"
#include "stk/Skini.h"
#include "stk/Sphere.h"
#include "stk/StifKarp.h"
#include "stk/Stk.h"
#include "stk/TapDelay.h"
#include "stk/TubeBell.h"
#include "stk/Twang.h"
#include "stk/TwoPole.h"
#include "stk/TwoZero.h"
#include "stk/Vector3D.h"
#include "stk/Voicer.h"
#include "stk/VoicForm.h"
#include "stk/Whistle.h"
#include "stk/Wurley.h"
#include "stk/WvIn.h"
#include "stk/WvOut.h"

#if JUCE_MSVC
 #pragma warning (pop)
#endif

#endif   // __STK_STKHEADER__

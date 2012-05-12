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

#if defined (__STK_STKHEADER__) && ! JUCE_AMALGAMATED_INCLUDE
 /* When you add this cpp file to your project, you mustn't include it in a file where you've
    already included any other headers - just put it inside a file on its own, possibly with your config
    flags preceding it, but don't include anything else. That also includes avoiding any automatic prefix
    header files that the compiler may be using.
 */
 #error "Incorrect use of JUCE cpp file"
#endif

// Your project must contain an AppConfig.h file with your project-specific settings in it,
// and your header search path must make it accessible to the module's files.
#include "AppConfig.h"

#include "stk.h"

// stops a warning with clang
#ifdef __clang__
 #pragma clang diagnostic ignored "-Wtautological-compare"
#endif

#include "stk/ADSR.cpp"
#include "stk/Asymp.cpp"
#include "stk/BandedWG.cpp"
#include "stk/BeeThree.cpp"
#include "stk/BiQuad.cpp"
#include "stk/Blit.cpp"
#include "stk/BlitSaw.cpp"
#include "stk/BlitSquare.cpp"
#include "stk/BlowBotl.cpp"
#include "stk/BlowHole.cpp"
#include "stk/Bowed.cpp"
#include "stk/Brass.cpp"
#include "stk/Chorus.cpp"
#include "stk/Clarinet.cpp"
#include "stk/Delay.cpp"
#include "stk/DelayA.cpp"
#include "stk/DelayL.cpp"
#include "stk/Drummer.cpp"
#include "stk/Echo.cpp"
#include "stk/Envelope.cpp"
#include "stk/FileLoop.cpp"
#include "stk/FileRead.cpp"
#include "stk/FileWrite.cpp"
#include "stk/FileWvIn.cpp"
#include "stk/FileWvOut.cpp"
#include "stk/Fir.cpp"
#include "stk/Flute.cpp"
#include "stk/FM.cpp"
#include "stk/FMVoices.cpp"
#include "stk/FormSwep.cpp"
#include "stk/Granulate.cpp"
#include "stk/HevyMetl.cpp"
#include "stk/Iir.cpp"
#include "stk/JCRev.cpp"
#include "stk/LentPitShift.cpp"
#include "stk/Mandolin.cpp"
#include "stk/Mesh2D.cpp"
#include "stk/MidiFileIn.cpp"
#include "stk/Modal.cpp"
#include "stk/ModalBar.cpp"
#include "stk/Modulate.cpp"
#include "stk/Moog.cpp"
#include "stk/Mutex.cpp"
#include "stk/Noise.cpp"
#include "stk/NRev.cpp"
#include "stk/OnePole.cpp"
#include "stk/OneZero.cpp"
#include "stk/PercFlut.cpp"
#include "stk/Phonemes.cpp"
#include "stk/PitShift.cpp"
#include "stk/Plucked.cpp"
#include "stk/PoleZero.cpp"
#include "stk/PRCRev.cpp"
#include "stk/Resonate.cpp"
#include "stk/Rhodey.cpp"
#include "stk/Sampler.cpp"
#include "stk/Saxofony.cpp"
#include "stk/Shakers.cpp"
#include "stk/Simple.cpp"
#include "stk/SineWave.cpp"
#include "stk/SingWave.cpp"
#include "stk/Sitar.cpp"
#include "stk/Skini.cpp"
#include "stk/Socket.cpp"
#include "stk/Sphere.cpp"
#include "stk/StifKarp.cpp"
#include "stk/Stk.cpp"
#include "stk/TapDelay.cpp"
#include "stk/TubeBell.cpp"
#include "stk/Twang.cpp"
#include "stk/TwoPole.cpp"
#include "stk/TwoZero.cpp"
#include "stk/Voicer.cpp"
#include "stk/VoicForm.cpp"
#include "stk/Whistle.cpp"
#include "stk/Wurley.cpp"

#ifdef __clang__
 #pragma pop // -Wtautological-compare
#endif
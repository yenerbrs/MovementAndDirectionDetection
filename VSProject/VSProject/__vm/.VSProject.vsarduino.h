/* 
	Editor: https://www.visualmicro.com/
			visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
			the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
			all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
			note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: LaunchPad (Tiva C) w/ tm4c129 (120MHz), Platform=tivac, Package=energia
*/

#if defined(_VMICRO_INTELLISENSE)

#ifndef _VSARDUINO_H_
#define _VSARDUINO_H_
#define printf iprintf
#define F_CPU 120000000L
#define ARDUINO 10807
#define ENERGIA 10807
#define ENERGIA_EK_TM4C1294XL
#define ENERGIA_ARCH_TIVAC
#define __cplusplus 201103L

#define __extension__
#define __ATTR_PURE__
#define __ATTR_CONST__
#define __inline__
#define __asm__ 
#define __volatile__
#define _HAVE_STDC
#define __attribute__(x)
#include <arduino.h>
#include <part.h> 
#include <pins_energia.h> 
#undef cli
#define cli()
#include "VSProject.ino"
#endif
#endif

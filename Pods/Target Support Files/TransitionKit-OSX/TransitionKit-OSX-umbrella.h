#ifdef __OBJC__
#import <Cocoa/Cocoa.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "TKEvent.h"
#import "TKState.h"
#import "TKStateMachine.h"
#import "TKTransition.h"
#import "TransitionKit.h"

FOUNDATION_EXPORT double TransitionKitVersionNumber;
FOUNDATION_EXPORT const unsigned char TransitionKitVersionString[];


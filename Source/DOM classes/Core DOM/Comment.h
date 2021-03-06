/*
 From SVG-DOM, via Core DOM:
 
 http://www.w3.org/TR/DOM-Level-2-Core/core.html#ID-1728279322

 interface Comment : CharacterData {
 };
*/

#include <AvailabilityMacros.h>
#if !TARGET_OS_IPHONE
#define Comment AIFFComment
#include <CoreServices/CoreServices.h>
#undef Comment
#endif

#import <Foundation/Foundation.h>

#import "CharacterData.h"

@interface Comment : CharacterData

- (id)initWithValue:(NSString*) v;

@end

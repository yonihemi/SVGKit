/**
SVGKDefine_Private.h

SVGKDefine define some common macro used for private header.
*/

#ifndef SVGKDefine_Private_h
#define SVGKDefine_Private_h

#import "SVGKDefine.h"

#if DEBUG
#define SVGKitLogError(...) NSLog(__VA_ARGS__)
#define SVGKitLogWarn(...) NSLog(__VA_ARGS__)
#define SVGKitLogInfo(frmt, ...) (void)0
#define SVGKitLogDebug(frmt, ...) (void)0
#define SVGKitLogVerbose(frmt, ...) (void)0
#else
#define SVGKitLogError(frmt, ...) (void)0
#define SVGKitLogWarn(frmt, ...) (void)0
#define SVGKitLogInfo(frmt, ...) (void)0
#define SVGKitLogDebug(frmt, ...) (void)0
#define SVGKitLogVerbose(frmt, ...) (void)0
#endif

#if SVGKIT_MAC
#define NSStringFromCGRect(rect) NSStringFromRect(rect)
#define NSStringFromCGSize(size) NSStringFromSize(size)
#define NSStringFromCGPoint(point) NSStringFromPoint(point)
#endif

#endif /* SVGKDefine_Private_h */

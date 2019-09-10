#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "AFHTTPSessionManager+RACSupport.h"
#import "RACAFNetworking.h"
#import "RACSubscriber+AFProgressCallbacks.h"

FOUNDATION_EXPORT double AFNetworking_RACExtensions_JMVersionNumber;
FOUNDATION_EXPORT const unsigned char AFNetworking_RACExtensions_JMVersionString[];


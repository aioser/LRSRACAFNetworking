//
//  AFHTTPSessionManager+RACSupport.h
//  Reactive AFNetworking Example
//
//  Created by Robert Widmann on 5/20/14.
//  Copyright (c) 2014 CodaFi. All rights reserved.
//

#import <AFNetworking/AFHTTPSessionManager.h>
#import <ReactiveObjC/ReactiveObjC.h>

NS_ASSUME_NONNULL_BEGIN

#if (defined(__IPHONE_OS_VERSION_MAX_ALLOWED) && __IPHONE_OS_VERSION_MAX_ALLOWED >= 70000) || (defined(__MAC_OS_X_VERSION_MAX_ALLOWED) && __MAC_OS_X_VERSION_MAX_ALLOWED >= 1090)

extern NSString *const RACAFNResponseObjectErrorKey;

@interface AFHTTPSessionManager (RACSupport)

/// A convenience around -GET:parameters:success:failure: that returns a cold signal of the
/// resulting JSON object and response headers or error.
- (RACSignal *)rac_GET:(NSString *)path parameters:(nullable id)parameters;

/// A convenience around -HEAD:parameters:success:failure: that returns a cold signal of the
/// resulting JSON object and response headers or error.
- (RACSignal *)rac_HEAD:(NSString *)path parameters:(nullable id)parameters;

/// A convenience around -POST:parameters:success:failure: that returns a cold signal of the
/// result.
- (RACSignal *)rac_POST:(NSString *)path parameters:(nullable id)parameters;

/// A convenience around -POST:parameters:constructingBodyWithBlock:success:failure: that returns a
/// cold signal of the resulting JSON object and response headers or error.
- (RACSignal *)rac_POST:(NSString *)path parameters:(nullable id)parameters constructingBodyWithBlock:(void (^ _Nullable)(id <AFMultipartFormData> formData))block;

/// A convenience around -PUT:parameters:success:failure: that returns a cold signal of the
/// resulting JSON object and response headers or error.
- (RACSignal *)rac_PUT:(NSString *)path parameters:(nullable id)parameters;

/// A convenience around -PATCH:parameters:success:failure: that returns a cold signal of the
/// resulting JSON object and response headers or error.
- (RACSignal *)rac_PATCH:(NSString *)path parameters:(nullable id)parameters;

/// A convenience around -DELETE:parameters:success:failure: that returns a cold signal of the
/// resulting JSON object and response headers or error.
- (RACSignal *)rac_DELETE:(NSString *)path parameters:(nullable id)parameters;

- (RACSignal *)rac_requestPath:(NSString *)path parameters:(nullable id)parameters method:(NSString *)method requestBuilder:(void(^_Nullable)(NSMutableURLRequest *request))requestBuilder;

@end

#endif

NS_ASSUME_NONNULL_END

//
//  TDFNativeMethod.h
//  KuiklyIOSRender
//
//  Created by luoyibu on 2023/9/6.
//  Copyright © 2023 Tencent. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TDFModuleProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface TDFMethodArgument : NSObject

@property (nonatomic, copy, readonly) NSString *type;
@property (nonatomic, readonly) TDFNullability nullability;
@property (nonatomic, readonly) BOOL unused;

- (instancetype)initWithType:(NSString *)type nullability:(TDFNullability)nullability unused:(BOOL)unused;

@end

@interface TDFNativeMethod : NSObject

@property (nonatomic, readonly) Class moduleClass;
@property (nonatomic, readonly) SEL selector;
@property (nonatomic, readonly) const char *wrapMethodName;
@property (nonatomic, readonly, weak) id<TDFBridgeDelegate> _Nullable delegate;

- (instancetype)initWithMethod:(const TDFMethodInfo *)exportMethod
                   moduleClass:(Class)moduleClass
                      delegate:(id<TDFBridgeDelegate>)delegate;

- (id)invokeWithModule:(id)module arguments:(NSArray *)arguments;

@end

NS_ASSUME_NONNULL_END

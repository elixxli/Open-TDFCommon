//
//  TDFBaseModule.h
//  KuiklyIOSRender
//
//  Created by luoyibu on 2023/9/5.
//  Copyright © 2023 Tencent. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TDFModuleProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@class UIView;
@class TDFNativeMethod;

@interface TDFBaseModule : NSObject <TDFModuleProtocol>

/*
 * @brief bridgeDelegate
 */
@property (nonatomic, strong) id<TDFBridgeDelegate> _Nullable delegate;

/*
 * @brief 方法列表
 */
@property (nonatomic, copy, readonly) NSArray<TDFNativeMethod *> *methods;

/*
 * @brief 方法dict key是导出的方法名，value是method
 */
@property (nonatomic, copy, readonly) NSDictionary<NSString *, TDFNativeMethod *> *methodsByName;

@end

NS_ASSUME_NONNULL_END

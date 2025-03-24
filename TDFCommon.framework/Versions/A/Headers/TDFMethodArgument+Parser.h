//
//  TDFMethodArgument+Parser.h
//  KuiklyIOSRender
//
//  Created by luoyibu on 2023/9/7.
//  Copyright © 2023 Tencent. All rights reserved.
//

#import "TDFNativeMethod.h"

@interface TDFMethodArgument (Parser)

NSString *TDFParseMethodSignature(const char *input, NSArray<TDFMethodArgument *> **arguments);

@end


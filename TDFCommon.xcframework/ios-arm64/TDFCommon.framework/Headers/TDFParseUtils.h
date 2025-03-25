//
//  TDFParseUtils.h
//  KuiklyIOSRender
//
//  Created by luoyibu on 2023/9/7.
//  Copyright © 2023 Tencent. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TDFModuleProtocol.h"

#define TDFNilIfNull(value)                           \
  ({                                                  \
    __typeof__(value) t = (value);                    \
    (id) t == (id)kCFNull ? (__typeof(value))nil : t; \
  })

@interface TDFParseUtils : NSObject

TDF_EXTERN BOOL TDFReadChar(const char **input, char c);
TDF_EXTERN BOOL TDFReadString(const char **input, const char *string);
TDF_EXTERN void TDFSkipWhitespace(const char **input);
TDF_EXTERN BOOL TDFParseSelectorIdentifier(const char **input, NSString **string);
TDF_EXTERN BOOL TDFParseArgumentIdentifier(const char **input, NSString **string);
TDF_EXTERN NSString *TDFParseType(const char **input);

@end


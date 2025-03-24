//
//  TDFConvert.h
//  KuiklyIOSRender
//
//  Created by luoyibu on 2023/9/7.
//  Copyright © 2023 Tencent. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TDFConvert : NSObject

+ (id)id:(id)json;

+ (BOOL)BOOL:(id)json;
+ (double)double:(id)json;
+ (float)float:(id)json;
+ (int)int:(id)json;

+ (int64_t)int64_t:(id)json;
+ (uint64_t)uint64_t:(id)json;

+ (NSInteger)NSInteger:(id)json;
+ (NSUInteger)NSUInteger:(id)json;

+ (NSArray *)NSArray:(id)json;
+ (NSDictionary *)NSDictionary:(id)json;
+ (NSString *)NSString:(id)json;
+ (NSNumber *)NSNumber:(id)json;

+ (NSSet *)NSSet:(id)json;
+ (NSData *)NSData:(id)json;

+ (NSTimeInterval)NSTimeInterval:(id)json;
+ (CGFloat)CGFloat:(id)json;

+ (NSArray<NSArray *> *)NSArrayArray:(id)json;
+ (NSArray<NSString *> *)NSStringArray:(id)json;
+ (NSArray<NSNumber *> *)NSNumberArray:(id)json;
+ (NSArray<NSDictionary *> *)NSDictionaryArray:(id)json;

@end

/**
 * This macro is used for creating simple converter functions that just call
 * the specified getter method on the json value.
 */
#define TDF_CONVERTER(type, name, getter) TDF_CUSTOM_CONVERTER(type, name, [json getter])

/**
 * This macro is similar to TDF_CONVERTER, but specifically geared towards
 * numeric types. It will handle string input correctly, and provides more
 * detailed error reporting if an invalid value is passed in.
 */
#define TDF_NUMBER_CONVERTER(type, getter) TDF_CUSTOM_CONVERTER(type, type, [json getter])

/**
 * This macro is used for creating converter functions with arbitrary logic.
 */
#define TDF_CUSTOM_CONVERTER(type, name, code) \
  +(type)name : (id)json                       \
  {                                            \
    return code;                               \
  }

#define TDF_JSON_CONVERTER(type) \
  +(type *)type : (id)json       \
  {                              \
    return json;                 \
  }


NS_ASSUME_NONNULL_END

//
//  Tools.h
//  ZMMFramework
//
//  Created by Remionisce on 16/7/12.
//  Copyright © 2016年 Remionisce. All rights reserved.
//

#import <UIKit/UIKit.h>

@class UIColor;

@interface Tools : NSObject

/**
 *  删除字符串中的空格
 */
+ (NSString *)deleteWhitespace:(NSString *)str;

/**
 *  根据字符串计算大小
 */
+ (CGSize)caculateSizeWithFont:(UIFont *)font maxWidth:(float)maxWidth maxHeight:(float)maxHeight withStr:(NSString *)str;
/**
 *  获取字符串中的链接地址
 */
+ (NSString *)getCurrentStrIncludeUrlLink:(NSString *)str;

/**
 *  判断输入的字符串是否是（中文 字母 数字组成）
 */
+ (BOOL)inputStrRuleIsneed:(NSString *)str;

+(BOOL)dicContain:(NSDictionary *)dic withKey:(NSString *)key;
// check Empty
+ (BOOL)isEmpty:(NSString *)string;
// MD5
+ (NSString *)md5:(NSString *)originalStr;
+(NSString*)md5Base64:(NSString*)originalStr;
+(NSString*)base64:(NSString *)originalStr;
// calculate CharacterLength
+ (NSUInteger)calculateCharacterLength:(NSString *)str;

+ (BOOL)checkPhone:(NSString *)phone;

+ (BOOL)checkPassword:(NSString *)password;

+ (BOOL)checkEmail:(NSString *)email;

+ (BOOL)isBankCard:(NSString *)cardNumber;

+ (BOOL)checkPrice:(NSString*)price;

+ (BOOL)checkPriceNoLimit:(NSString*)price withLength:(NSInteger)length;

+(BOOL)checkIdentityCardNo:(NSString*)cardNo;
/**
 *  判断输入的字符串是否是包含emobj表情
 */
+ (BOOL)stringContainsEmoji:(NSString *)string;
/**
 *  判断输入的字符串是否是包含emobj表情 方案2
 */
+ (BOOL)isHasEmobj:(NSString *)str;

+ (BOOL)isAllowedNotification;

+ (UIColor *) colorWithHexString: (NSString *) stringToConvert withAlpha:(CGFloat)alpha;

+ (NSString *)checkImgTypeWithata: (NSData *)data;

/*
 * 根据身份证号确定性别 yes为女
 */
+(BOOL)getIdentityCardSex:(NSString *)numberStr;

+(NSString *)birthdayStrFromIdentityCard:(NSString *)numberStr;

+(NSString *)getCurrentNetIp;

+ (NSString *)getIPAddress:(BOOL)preferIPv4;

+ (BOOL)judgeString:(NSString *)str containsString:(NSString *)str1;

+ (void) getVideoPreViewImage:(NSURL *)url withBlock:(void (^)(UIImage* keyImg))block;

+(double)distanceBetweenOrderBy:(double) lat1 :(double) lat2 :(double) lng1 :(double) lng2;

+ (int)convertToByte:(NSString*)str;
+ (UIImage *)fixOrientation:(UIImage *)aImage;
+(BOOL)dicContainAllowSpace:(NSDictionary *)dic withKey:(NSString *)key;
@end

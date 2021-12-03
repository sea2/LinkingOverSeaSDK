
#import <Foundation/Foundation.h>

@interface NSString (Base64Addition)
+(NSString *)stringFromBase64String:(NSString *)base64String;
+(NSString *)stringFromBase64UrlEncodedString:(NSString *)base64UrlEncodedString;
-(NSString *)base64String;
-(NSString *)base64UrlEncodedString;
@end

@interface NSData (Base64Addition)
+(NSData *)dataWithBase64String:(NSString *)base64String;
+(NSData *)dataWithBase64UrlEncodedString:(NSString *)base64UrlEncodedString;
-(NSString *)base64String;
-(NSString *)base64UrlEncodedString;
@end

@interface OAOllection : NSObject 
+(NSData *)dataFromBase64String:(NSString *)base64String;
+(NSString *)base64StringFromData:(NSData *)data;
+(NSString *)base64UrlEncodedStringFromBase64String:(NSString *)base64String;
+(NSString *)base64StringFromBase64UrlEncodedString:(NSString *)base64UrlEncodedString;
@end

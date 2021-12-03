
#import <Foundation/Foundation.h>

#ifdef LUMBERJACK

#define LOG_LEVEL_DEF lkLogLevel
#import <CocoaLumberjack/CocoaLumberjack.h>

#else 

typedef NS_OPTIONS(NSUInteger, LKLogFlag) {
    
    LKLogFlagError         = (1 << 0),
    
    
    LKLogFlagWaring         = (1 << 1),
    
    
    LKLogFlagInfo        = (1 << 2),
    
    
    LKLogFlagDebug       = (1 << 3),
    
    
    LKLogFlagVerbose       = (1 << 4)
    
};


typedef NS_ENUM(NSUInteger,LKLogLevel){
    
    
    LKLogLevelOff     = 0,
    
    
    LKLogLevelErro    = (LKLogFlagError),
    
    
    LKLogLevelWarning    = (LKLogFlagError | LKLogFlagWaring),
    
    
    LKLogLevelInfo   = (LKLogLevelWarning | LKLogFlagInfo),
    
    
    LKLogLevelDebug  = (LKLogLevelInfo | LKLogFlagDebug),
    
    
    LKLogLevelVerbose  = (LKLogLevelDebug | LKLogFlagVerbose),
    
    
    LKLogLevelALL   =  NSUIntegerMax
    
    
};



#define LKLogVerbose(fmt, ...) if ( lkLogLevel & LKLogFlagVerbose ) NSLog((@"[LinKingENSDK] " fmt), ##__VA_ARGS__)
#define LKLogDebug(fmt, ...) if ( lkLogLevel & LKLogFlagDebug ) NSLog((@"[LinKingENSDK] " fmt), ##__VA_ARGS__)
#define LKLogWarn(fmt, ...) if ( lkLogLevel & LKLogFlagWaring ) NSLog((@"[LinKingENSDK] " fmt), ##__VA_ARGS__)
#define LKLogInfo(fmt, ...) if ( lkLogLevel & LKLogFlagInfo ) NSLog((@"[LinKingENSDK] " fmt), ##__VA_ARGS__)
#define LKLogError(fmt, ...) if ( lkLogLevel & LKLogFlagError ) NSLog((@"[LinKingENSDK] " fmt), ##__VA_ARGS__)



#endif 



extern LKLogLevel lkLogLevel;



@interface OAApiEntity : NSObject




+ (void)setLogLevel:(LKLogLevel)logLevel;



@end

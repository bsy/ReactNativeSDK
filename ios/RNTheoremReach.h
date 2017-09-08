#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#else
#import "RCTBridgeModule.h"
#endif
#if __has_include("RCTEventEmitter")
#import "RCTEventEmitter"
#else
#import <React/RCTEventEmitter.h>
#endif

#import <TheoremReachSDK/TheoremReach.h>

@interface RNTheoremReach : RCTEventEmitter <RCTBridgeModule, TheoremReachRewardDelegate, TheoremReachSurveyDelegate, TheoremReachSurveyAvailableDelegate>

@end

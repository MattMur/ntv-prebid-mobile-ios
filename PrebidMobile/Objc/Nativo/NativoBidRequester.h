#import <Foundation/Foundation.h>

@class AdUnitConfig;
@class BidResponse;
@class Prebid;
@class Targeting;
@protocol PrebidServerConnectionProtocol;

NS_ASSUME_NONNULL_BEGIN

@protocol PBMBidRequesterProtocol;

@interface NativoBidRequester : NSObject <PBMBidRequesterProtocol>

- (instancetype)initWithConnection:(id<PrebidServerConnectionProtocol>)connection
                  sdkConfiguration:(Prebid *)sdkConfiguration
                         targeting:(Targeting *)targeting
               adUnitConfiguration:(AdUnitConfig *)adUnitConfiguration NS_DESIGNATED_INITIALIZER;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END

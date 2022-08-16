//
//  OsimSpeechSDK.h
//  OSIMVC
//
//  Created by Jessie on 19/06/19.
//  Copyright © 2019 Jessie. All rights reserved.
//

#import <Foundation/Foundation.h>

// Data task completion handler
typedef void (^DataTaskCompletionHandler)(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error);


NS_ASSUME_NONNULL_BEGIN

@interface OsimSpeechSDK : NSObject

@property (nonatomic, nullable)     NSString * luisAppId;
@property (nonatomic, nullable)     NSString * luisSubscriptionId;
@property (nonatomic, nullable)     NSString * speechKey;
@property (nonatomic, nullable)     NSString * speechServiceRegion;


- (void)initiateOSIM:(NSString *)lang
          completion:(void (^)(NSString *str))completionInitBlock;

//- (void)StartListeningMic:(NSString *)startStr
//              stopTimerAt:(NSTimeInterval)timerStr
//               completion:(void (^)(NSString *str))completionStartMicBlock;

- (void)StartListeningMic;
- (void)StopListeningMic:(NSString *)query
              completion:(void (^)(NSString *str))completionBlockStopListeningMic;

- (void)startListening;

- (void)stopListening;


@end

NS_ASSUME_NONNULL_END

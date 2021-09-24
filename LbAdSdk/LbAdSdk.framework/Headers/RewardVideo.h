//
//  RewardAD.h
//  LbAdDemo
//
//  Created by SX on 2021/9/18.
//

#import <UIKit/UIKit.h>
#import "RewardVideoDelegate.h"
#import "BaseAD.h"

@interface RewardVideo:BaseAD {
    UIViewController *_controller;
}

- (instancetype) initWithPlacementID:(NSString *)id viewController:(UIViewController *)viewController delegate:(id<RewardVideoDelegate>)delegate;

@end


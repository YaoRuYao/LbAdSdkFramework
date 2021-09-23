//
//  DMADView.h
//  LbAdDemo
//
//  Created by SX on 2021/9/17.
//
#import <AnyThinkNative/AnyThinkNative.h>
#import <UIKit/UIKit.h>

@interface DMADView:ATNativeADView
@property(nonatomic, readonly) UILabel *advertiserLabel;
@property(nonatomic, readonly) UILabel *textLabel;
@property(nonatomic, readonly) UILabel *titleLabel;
@property(nonatomic, readonly) UILabel *ctaLabel;
@property(nonatomic, readonly) UILabel *ratingLabel;
@property(nonatomic, readonly) UIImageView *iconImageView;
@property(nonatomic, readonly) UIImageView *mainImageView;
@property(nonatomic, readonly) UIImageView *logoImageView;
@property(nonatomic, readonly) UIImageView *sponsorImageView;
@property(nonatomic, readonly) UIButton *dislikeButton;
@end

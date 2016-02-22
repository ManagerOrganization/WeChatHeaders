//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class CEnterpriseContact, MMCPLabel, MMHeadImageView, NSString;

@interface EnterpriseContactItemView : MMUIView
{
    MMCPLabel *m_nickNameLabel;
    MMHeadImageView *m_headImage;
    CEnterpriseContact *m_contact;
    NSString *m_cpKeyForNickname;
    _Bool m_isNicknameUnsafe;
}

- (void).cxx_destruct;
- (void)updateCPState;
- (struct CGRect)calNickNameFrame:(id)arg1;
- (void)updateBackgroundColor:(id)arg1;
- (void)updateView:(id)arg1;
- (void)updateNickNameLabel;
- (void)updateHeadImageForContact:(id)arg1;
- (void)initView:(id)arg1;
- (void)initNickNameLabel:(id)arg1;
- (void)initHeadImageForContact:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end

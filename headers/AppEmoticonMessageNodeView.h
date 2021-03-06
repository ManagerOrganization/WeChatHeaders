//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageNodeView.h"

#import "EmoticonBackupOperateMgrExt.h"
#import "IAPPEmoticonDownloadExt.h"

@class MMEmoticonView, NSString, UIButton;

@interface AppEmoticonMessageNodeView : BaseMessageNodeView <EmoticonBackupOperateMgrExt, IAPPEmoticonDownloadExt>
{
    MMEmoticonView *m_oImageView;
    UIButton *m_oDownloadButton;
}

+ (_Bool)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
@property(retain, nonatomic) UIButton *m_oDownloadButton; // @synthesize m_oDownloadButton;
@property(retain, nonatomic) MMEmoticonView *m_oImageView; // @synthesize m_oImageView;
- (void).cxx_destruct;
- (void)onAddBackupEmoticonFailed:(id)arg1 isOverLimit:(_Bool)arg2;
- (void)onAddBackupEmoticonOK:(id)arg1;
- (id)getMoreMainInfomationAccessibilityDescription;
- (void)onAppEmoticonDownloadFinished:(id)arg1;
- (void)onMenuItemWillHide;
- (void)onTouchCancel;
- (void)onLongTouch;
- (void)onTouchUpInside;
- (void)onTouchDownRepeat;
- (void)onTouchDown;
- (void)onMoreOperate:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onClick;
- (void)showOperations;
- (void)SaveEmoticon:(id)arg1;
- (void)onClearResource;
- (void)onDisappear;
- (void)updateStatus:(id)arg1;
- (void)layoutSubviewsInternal;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;
- (void)updateEmoticonView;
- (void)dealloc;
- (id)initWithMessageWrap:(id)arg1 Contact:(id)arg2 ChatContact:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


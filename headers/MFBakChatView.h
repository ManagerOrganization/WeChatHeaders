//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIButton.h"

#import "IBakChatRecoverMgrExt.h"
#import "IBakChatUploadMgrExt.h"
#import "MFBanner.h"
#import "UIAlertViewDelegate.h"

@class NSString, UIImageView, UILabel;

@interface MFBakChatView : MMUIButton <IBakChatRecoverMgrExt, IBakChatUploadMgrExt, UIAlertViewDelegate, MFBanner>
{
    UIImageView *m_titleImageView;
    UILabel *m_label;
    _Bool m_bShowNotify;
    _Bool m_bRestartRecover;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnRestart;
- (void)OnDecryptError;
- (void)OnPause;
- (void)OnError:(unsigned int)arg1;
- (void)OnDownloaded;
- (void)OnDownloadProgress:(unsigned int)arg1 WithTotalSize:(unsigned int)arg2;
- (void)OnBakChatUploadMessage:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

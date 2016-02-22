//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMKernelExt.h"
#import "MMService.h"
#import "WCAccountAutoLoginControlLogicDelegate.h"

@class NSString, WCAccountAutoLoginControlLogic;

@interface WCAccountControlMgr : MMService <MMService, MMKernelExt, WCAccountAutoLoginControlLogicDelegate>
{
    NSString *m_reportClientID;
    unsigned long long m_lastmakesuretime;
    WCAccountAutoLoginControlLogic *m_autoLoginLogic;
    _Bool _m_isInMainFrame;
    _Bool _m_isLogin;
    _Bool _m_isAutoLoginMode;
}

@property _Bool m_isAutoLoginMode; // @synthesize m_isAutoLoginMode=_m_isAutoLoginMode;
@property _Bool m_isLogin; // @synthesize m_isLogin=_m_isLogin;
@property _Bool m_isInMainFrame; // @synthesize m_isInMainFrame=_m_isInMainFrame;
- (void).cxx_destruct;
- (void)onManulLoginOK;
- (void)onPreQuit;
- (void)onWCAccountAutoLoginControlLogicStop:(unsigned long long)arg1;
- (void)makeAutoAuth;
- (void)deleteAccountSuccess;
- (void)kickOut;
- (void)onSessionTimeout;
- (_Bool)makeSureAuth;
- (_Bool)isLogin;
- (void)startAutoAuth;
- (void)startManualAuth;
- (void)resetReportClientID;
- (id)getReportClientID;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

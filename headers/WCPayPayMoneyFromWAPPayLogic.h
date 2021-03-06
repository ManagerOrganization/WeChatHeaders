//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCBaseControlMgrExt.h"

@class NSDictionary, NSString, WCPayBaseViewController, WCPayPayMoneyLogic;

@interface WCPayPayMoneyFromWAPPayLogic : WCPayControlLogic <WCBaseControlMgrExt>
{
    NSDictionary *m_payInfo;
    WCPayPayMoneyLogic *m_payLogic;
    WCPayBaseViewController *rootViewController;
}

- (void).cxx_destruct;
- (void)OnGetAppAuthUrlErrorRequest:(id)arg1;
- (void)OnGetAppAuthUrlRequest:(id)arg1 AppSource:(id)arg2 PrepayId:(id)arg3 CallBackUrl:(id)arg4 Error:(id)arg5;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)OnRootViewBack;
- (_Bool)gotoViewController:(id)arg1;
- (void)stopLogic;
- (void)startLogic;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


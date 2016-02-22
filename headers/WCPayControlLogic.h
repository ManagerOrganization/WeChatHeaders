//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBizControlLogic.h"

#import "WCPayLogicMgrExt.h"

@class NSString, WCPayControlData;

@interface WCPayControlLogic : WCBizControlLogic <WCPayLogicMgrExt>
{
    WCPayControlData *m_data;
}

- (void).cxx_destruct;
- (void)PayUOnContactMeError:(id)arg1;
- (void)onErrorAlertViewStopLogicAndContactMe:(id)arg1;
- (void)PayUOnAnswerNotMatchError:(id)arg1;
- (void)PayUOnVerifyUserInfoError:(id)arg1;
- (void)PayUOnMobileError:(id)arg1;
- (void)PayUOnPasswordTimeOut:(id)arg1;
- (void)PayUOnCardBinError:(id)arg1;
- (void)PayUOnRetryError:(id)arg1;
- (void)PayUOnChangeCardPayError:(id)arg1;
- (void)PayUOnPhoneNumberError:(id)arg1;
- (void)PayUOnValidError:(id)arg1;
- (void)PayUOnCVVError:(id)arg1;
- (void)PayUOnPayPasswordError:(id)arg1;
- (void)OnWCBizBaseViewControllerDidBePoped:(id)arg1;
- (void)showPayOrderConfirmViewWithData:(id)arg1 delegate:(id)arg2;
- (void)OnAddCardToVerifyUserInfoError:(id)arg1 ErrorType:(unsigned int)arg2;
- (void)OnVerifyUserInfo;
- (void)OnAddCardError:(id)arg1 ErrorType:(unsigned int)arg2;
- (void)OnAddCardBtnDonw;
- (void)OnLimitInsufficientError:(id)arg1 ErrorType:(unsigned int)arg2;
- (void)OnHandleSpecialPayError:(id)arg1 ErrorType:(unsigned int)arg2;
- (void)OnValidError:(id)arg1;
- (void)OnCVVError:(id)arg1;
- (void)OnCVVAndValidError:(id)arg1;
- (void)OnPhoneNumberError:(id)arg1;
- (void)OnPayPasswordError:(id)arg1 ErrorCount:(int)arg2 LockTotalCount:(unsigned int)arg3;
- (void)onAlertResetPwd:(id)arg1;
- (void)onPayPasswordErrorAlertViewDismiss:(id)arg1;
- (void)OnWCPayBaseRequestNoKnownError:(id)arg1 TenPayCmdType:(int)arg2;
- (void)OnPayUBaseRequestNoKnownError:(id)arg1 PayUCmdType:(int)arg2;
- (_Bool)onNeedToControlCurrentPublicError;
- (_Bool)onError:(id)arg1;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)onErrorAlertViewStopLogic:(id)arg1;
- (_Bool)OnCheckDismissCurrentViewControllerAndStopLogicAfterDismiss;
- (_Bool)OnCheckDismissCurrentViewControllerAndStopLogicBeforeDismiss;
- (id)getTransactionID;
- (void)stopLogic;
- (void)pause;
- (void)resume;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

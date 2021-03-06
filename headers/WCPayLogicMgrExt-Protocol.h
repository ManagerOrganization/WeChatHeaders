//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GenPrepayRequest, NSArray, NSDate, NSDictionary, NSError, NSMutableDictionary, NSString, Package, PayAuthAppRequest, PayUGenPrepayReq, TenpayBindCardSubscribeAppInfo, WCPayAuthenticationPay, WCPayAuthenticationPayStatusStruct, WCPayAuthenticationPayVerifySMSStruct, WCPayBalanceInfo, WCPayBindCardInfo, WCPayBindInfo, WCPayBindInfoSMS, WCPayBindQueryUserInfoStruct, WCPayCardBinInfo, WCPayCheckPayPwdByTokenResponse, WCPayCheckPayPwdVerifyTelCodeByTokenResponse, WCPayCheckTransferStatusResponse, WCPayConfirmTransferResponse, WCPayCreditCardDetailInfo, WCPayCreditCardInfo, WCPayCreditPayAuthenResponseStruct, WCPayCreditPayCommitWXCreditAnswerResponseStruct, WCPayCreditPayQueryQuestionResponseStruct, WCPayCreditPayVerifyAndCreateCardResponseStruct, WCPayCreditPayVerifyPasswdResponseStruct, WCPayCreditPayVerifySMSCodeResponseStruct, WCPayFacingReceiveMoneyMessageStruct, WCPayHandleWCPayURLResult, WCPayLoanEntryInfo, WCPayMultiOrderDetail, WCPayNoticeInfo, WCPayOfflinePayChangeLimitFeeResponseStruct, WCPayOfflinePayConfirmMessageStruct, WCPayOfflinePayCreateResponseStruct, WCPayOfflinePayFreezeMessageStruct, WCPayOfflinePayMessageStruct, WCPayOfflinePayQueryInfo, WCPayOfflinePayQueryUserResponseStruct, WCPayPayUAddPaymentMethodResponse, WCPayPayUChangePinByQuestionResponse, WCPayPayUChangePinResponse, WCPayPayUCheckPwdResponse, WCPayPayUConfirmOtpResponse, WCPayPayUConfirmSerectAnswerResponse, WCPayPayUCreateAccountResponse, WCPayPayUDelPaymentMethodResponse, WCPayPayUElementQueryResponse, WCPayPayUFetchAuthResponse, WCPayPayUGenPreFetchResponse, WCPayPayUGenPreSaveResponse, WCPayPayUGenTransferResponse, WCPayPayUGetSecretResponse, WCPayPayULinkUserResponse, WCPayPayUListSecurityQuestionResponse, WCPayPayUReserverResponse, WCPayPayUSendOtpResponse, WCPayPayUTimeSeedStatusResponse, WCPayPayUTransferAuthResponse, WCPayPayUTransferCancelResponse, WCPayPayUTransferConfirmResponse, WCPayPayUTransferGetUsernameResponse, WCPayPayUTransferRetrySendMsgResponse, WCPayPayUTransferSendCancelMsgResponse, WCPayQueryWalletResponse, WCPayRefuseTransferResponse, WCPayResetPasswordInfo, WCPayRetrySendMsgResponse, WCPaySendC2CSecMsgResponse, WCPaySwitchInfo, WCPayTranferGetUserNameResponse, WCPayTransferGetFixedAmountQRCodeResponse, WCPayTransferPrepayResponseStruct, WCPayUserInfo, WCPaypayUSaveAuthResponse;

@protocol WCPayLogicMgrExt <NSObject>

@optional
- (void)PayUOnContactMeError:(NSError *)arg1;
- (void)PayUOnAnswerNotMatchError:(NSError *)arg1;
- (void)PayUOnVerifyUserInfoError:(NSError *)arg1;
- (void)PayUOnMobileError:(NSError *)arg1;
- (void)PayUOnPasswordTimeOut:(NSError *)arg1;
- (void)PayUOnCardBinError:(NSError *)arg1;
- (void)PayUOnRetryError:(NSError *)arg1;
- (void)PayUOnChangeCardPayError:(NSError *)arg1;
- (void)PayUOnPhoneNumberError:(NSError *)arg1;
- (void)PayUOnValidError:(NSError *)arg1;
- (void)PayUOnCVVError:(NSError *)arg1;
- (void)PayUOnPayPasswordError:(NSError *)arg1;
- (void)OnGetHtml5WalletUrl:(WCPayQueryWalletResponse *)arg1 Error:(NSError *)arg2;
- (void)OnPayUTimeSeedResponseStatus:(WCPayPayUTimeSeedStatusResponse *)arg1 Error:(NSError *)arg2;
- (void)OnTransferQueryStatusResponseStatus:(WCPayMultiOrderDetail *)arg1 Error:(NSError *)arg2;
- (void)OnPayUGenPaypreRequestError:(PayUGenPrepayReq *)arg1 ErrorMessage:(NSDictionary *)arg2;
- (void)OnPayUGenPaypreRequest:(NSString *)arg1 SessionID:(NSString *)arg2 AppSource:(NSString *)arg3;
- (void)OnAddPaymentMethodResponseStatus:(WCPayPayUAddPaymentMethodResponse *)arg1 Error:(NSError *)arg2;
- (void)OnDelPaymentMethodResponseStatus:(WCPayPayUDelPaymentMethodResponse *)arg1 Error:(NSError *)arg2;
- (void)OnGetSecretQuestionResponseStatus:(WCPayPayUGetSecretResponse *)arg1 Error:(NSError *)arg2;
- (void)OnElementQueryResponseStatus:(WCPayPayUElementQueryResponse *)arg1 Error:(NSError *)arg2;
- (void)OnGenPreSaveResponseStatus:(WCPayPayUGenPreSaveResponse *)arg1 Error:(NSError *)arg2;
- (void)OnGenPreFetchResponseStatus:(WCPayPayUGenPreFetchResponse *)arg1 Error:(NSError *)arg2;
- (void)OnChangePinByQuestionResponseStatus:(WCPayPayUChangePinByQuestionResponse *)arg1 Error:(NSError *)arg2;
- (void)OnConfirmSerectAnswerResponseStatus:(WCPayPayUConfirmSerectAnswerResponse *)arg1 Error:(NSError *)arg2;
- (void)OnLinkUserResponseStatus:(WCPayPayULinkUserResponse *)arg1 Error:(NSError *)arg2;
- (void)OnTransferSendCancelMsgResponseStatus:(WCPayPayUTransferSendCancelMsgResponse *)arg1 Error:(NSError *)arg2;
- (void)OnTransferRetrySendMsgResponseStatus:(WCPayPayUTransferRetrySendMsgResponse *)arg1 Error:(NSError *)arg2;
- (void)OnTransferGetUsernameResponseStatus:(WCPayPayUTransferGetUsernameResponse *)arg1 Error:(NSError *)arg2;
- (void)OnTransferCancelResponseStatus:(WCPayPayUTransferCancelResponse *)arg1 Error:(NSError *)arg2;
- (void)OnTransferConfirmResponseStatus:(WCPayPayUTransferConfirmResponse *)arg1 Error:(NSError *)arg2;
- (void)OnTransferAuthResponseStatus:(WCPayPayUTransferAuthResponse *)arg1 Error:(NSError *)arg2;
- (void)OnGenTransferResponseStatus:(WCPayPayUGenTransferResponse *)arg1 Error:(NSError *)arg2;
- (void)OnListSecurityQuestionResponseStatus:(WCPayPayUListSecurityQuestionResponse *)arg1 Error:(NSError *)arg2;
- (void)OnSaveAuthResponseStatus:(WCPaypayUSaveAuthResponse *)arg1 Error:(NSError *)arg2;
- (void)OnReserveResponseStatus:(WCPayPayUReserverResponse *)arg1 Error:(NSError *)arg2;
- (void)OnQueryOrderResponseStatus:(WCPayMultiOrderDetail *)arg1 Error:(NSError *)arg2;
- (void)OnFetchAuthResponseStatus:(WCPayPayUFetchAuthResponse *)arg1 Error:(NSError *)arg2;
- (void)OnCheckPinResponseStatus:(WCPayPayUCheckPwdResponse *)arg1 Error:(NSError *)arg2;
- (void)OnChangePinResponseStatus:(WCPayPayUChangePinResponse *)arg1 Error:(NSError *)arg2;
- (void)OnCreateAccountResponseStatus:(WCPayPayUCreateAccountResponse *)arg1 Error:(NSError *)arg2;
- (void)OnConfirmOtpResponseStatus:(WCPayPayUConfirmOtpResponse *)arg1 Error:(NSError *)arg2;
- (void)OnSendOtpResponseStatus:(WCPayPayUSendOtpResponse *)arg1 Error:(NSError *)arg2;
- (void)OnPayUBindQueryResponseStatus:(WCPayBindQueryUserInfoStruct *)arg1 Error:(NSError *)arg2;
- (void)OnPayUBaseRequestNoKnownError:(NSError *)arg1 PayUCmdType:(int)arg2;
- (void)OnSendC2CSecureMessageResponseStatus:(WCPaySendC2CSecMsgResponse *)arg1 Error:(NSError *)arg2;
- (void)OnNotifyAddFacingReceiveMoneyPayerInfo:(WCPayFacingReceiveMoneyMessageStruct *)arg1;
- (void)OnGetFixedAmountQRCode:(WCPayTransferGetFixedAmountQRCodeResponse *)arg1 Error:(NSError *)arg2;
- (void)OnGetTransferUserName:(WCPayTranferGetUserNameResponse *)arg1 Error:(NSError *)arg2;
- (void)OnRetrySendTransferMessage:(WCPayRetrySendMsgResponse *)arg1 Error:(NSError *)arg2;
- (void)OnRefuseTransferMoney:(WCPayRefuseTransferResponse *)arg1 Error:(NSError *)arg2;
- (void)OnConfirmTransferMoney:(WCPayConfirmTransferResponse *)arg1 Error:(NSError *)arg2;
- (void)OnCheckTransferMoneyStatus:(WCPayCheckTransferStatusResponse *)arg1 Error:(NSError *)arg2;
- (void)OnRemoveVirtualCard:(NSError *)arg1;
- (void)OnUnbindCreditPay:(NSError *)arg1;
- (void)OnVerifyCreditPayAndCreateCard:(WCPayCreditPayVerifyAndCreateCardResponseStruct *)arg1 Error:(NSError *)arg2;
- (void)OnVerifyCreditPaySmsVerifyCode:(WCPayCreditPayVerifySMSCodeResponseStruct *)arg1 Error:(NSError *)arg2;
- (void)OnVerifyCreditPayPassword:(WCPayCreditPayVerifyPasswdResponseStruct *)arg1 Error:(NSError *)arg2;
- (void)OnAuthenticationCreditPayIdentifier:(WCPayCreditPayAuthenResponseStruct *)arg1 Error:(NSError *)arg2;
- (void)OnCommitWXCreditAnswer:(WCPayCreditPayCommitWXCreditAnswerResponseStruct *)arg1 Error:(NSError *)arg2;
- (void)OnQueryWXCreditQuestion:(WCPayCreditPayQueryQuestionResponseStruct *)arg1 Error:(NSError *)arg2;
- (void)OnQueryWXCreditCardDetail:(WCPayCreditCardDetailInfo *)arg1 Error:(NSError *)arg2;
- (void)OnQueryWXCreditCardInfo:(WCPayCreditCardInfo *)arg1 Error:(NSError *)arg2;
- (void)OnOfflinePayTokenInfoUpdated:(_Bool)arg1;
- (void)OnGetBarCodeFromQRCodeResponse:(NSString *)arg1 Error:(NSError *)arg2;
- (void)OnConfirmOfflinePayResponse:(NSString *)arg1 Error:(NSError *)arg2;
- (void)OnNotifyOfflinePayConfirm:(WCPayOfflinePayConfirmMessageStruct *)arg1;
- (void)OnNotifyOfflinePaySuccess:(WCPayMultiOrderDetail *)arg1 Error:(NSError *)arg2;
- (void)OnNotifyResutltOfOfflinePay:(NSError *)arg1;
- (void)OnNotifyFreezeOfflinePay:(WCPayOfflinePayFreezeMessageStruct *)arg1;
- (void)OnOfflinePayMsgNotify:(WCPayOfflinePayMessageStruct *)arg1;
- (void)OnUnfreezeOfflinePay:(NSError *)arg1;
- (void)OnChangeOfflinePayLimit:(WCPayOfflinePayChangeLimitFeeResponseStruct *)arg1 Error:(NSError *)arg2;
- (void)OnOfflinePayCerticationOuttimeError:(NSError *)arg1;
- (void)OnQueryOfflinePayLimit:(WCPayOfflinePayQueryUserResponseStruct *)arg1 fromCache:(_Bool)arg2 Error:(NSError *)arg3;
- (void)OnCloseOfflinePayResponse:(NSError *)arg1;
- (void)OnCreateOfflinePayResponse:(WCPayOfflinePayCreateResponseStruct *)arg1 Error:(NSError *)arg2;
- (void)OnQueryOfflinePayInfo:(WCPayOfflinePayQueryInfo *)arg1 LocalCached:(_Bool)arg2 Error:(NSError *)arg3;
- (void)OnHandleVerifiedSMSString:(NSString *)arg1;
- (void)OnHandleWCPayURL:(WCPayHandleWCPayURLResult *)arg1 Error:(NSError *)arg2;
- (void)OnGetCheckPayPwdVerifyCodeByToken:(WCPayCheckPayPwdVerifyTelCodeByTokenResponse *)arg1 Error:(NSError *)arg2;
- (void)OnGetCheckPayPwdByToken:(WCPayCheckPayPwdByTokenResponse *)arg1 Error:(NSError *)arg2;
- (void)OnGetTransferPrepayRequest:(WCPayTransferPrepayResponseStruct *)arg1 Error:(NSError *)arg2;
- (void)OnGetBalanceFetchRequest:(NSString *)arg1 Error:(NSError *)arg2;
- (void)OnGetBalanceSaveRequest:(NSString *)arg1 Error:(NSError *)arg2;
- (void)OnCheckWCPayJsApiRequest:(NSDictionary *)arg1 Error:(NSError *)arg2;
- (void)OnGetMallPrepayRequest:(NSString *)arg1 AppSource:(NSString *)arg2 Error:(NSError *)arg3;
- (void)OnGetAppAuthUrlErrorRequest:(PayAuthAppRequest *)arg1;
- (void)OnGetAppAuthUrlRequest:(NSString *)arg1 AppSource:(NSString *)arg2 PrepayId:(NSString *)arg3 CallBackUrl:(NSString *)arg4 Error:(NSError *)arg5;
- (void)OnGetGenPaypreErrorRequest:(GenPrepayRequest *)arg1 ErrorMsg:(NSMutableDictionary *)arg2;
- (void)OnGetGenPaypreRequest:(NSString *)arg1 SessionID:(NSString *)arg2 AppSource:(NSString *)arg3;
- (void)OnSetMainCard:(NSString *)arg1 Error:(NSError *)arg2;
- (void)OnUnBindCard:(WCPayBindCardInfo *)arg1 Error:(NSError *)arg2;
- (void)OnGetBindingCardBin:(WCPayCardBinInfo *)arg1 AvailableBank:(NSArray *)arg2 Error:(NSError *)arg3;
- (void)OnGetAvailableBank:(NSArray *)arg1 Error:(NSError *)arg2;
- (void)OnGetBindingCardBin:(WCPayCardBinInfo *)arg1 Error:(NSError *)arg2;
- (void)OnEntranceStatusChanged;
- (void)OnGetBindQueryInfo:(WCPayBindQueryUserInfoStruct *)arg1 Error:(NSError *)arg2;
- (void)OnGetLocalPayCardList:(NSArray *)arg1 UsrVerifiedInfo:(WCPayUserInfo *)arg2 SwicthInfo:(WCPaySwitchInfo *)arg3 BalanceInfo:(WCPayBalanceInfo *)arg4 NoticeInfo:(WCPayNoticeInfo *)arg5 loanEntryInfo:(WCPayLoanEntryInfo *)arg6;
- (void)OnSetWCPayPasswordInReset:(NSError *)arg1;
- (void)OnResetWCPayPasswordVerifySMS:(NSError *)arg1;
- (void)OnResetWCPayPasswordVerifyCard:(WCPayResetPasswordInfo *)arg1 Error:(NSError *)arg2;
- (void)OnModifyWCPayPassword:(NSString *)arg1 NewWCPayPassword:(NSString *)arg2 Error:(NSError *)arg3;
- (void)OnSetEvaluateOrder:(NSError *)arg1;
- (void)OnOrderStatusButtonControl:(NSError *)arg1;
- (void)OnDelAllOrder:(NSError *)arg1;
- (void)OnDelOrder:(NSString *)arg1 Error:(NSError *)arg2;
- (void)OnStatusChangedOrderListCountChanged:(unsigned int)arg1;
- (void)OnGetHistoryIapOrderDetailInfo:(WCPayMultiOrderDetail *)arg1 Error:(NSError *)arg2;
- (void)OnGetHistoryOrderDetailInfo:(WCPayMultiOrderDetail *)arg1 Error:(NSError *)arg2;
- (void)OnGetWebPayOrderDetailInfo:(WCPayMultiOrderDetail *)arg1 BindQueryInfo:(WCPayBindQueryUserInfoStruct *)arg2 Error:(NSError *)arg3;
- (void)OnGetOrderDetailInfo:(WCPayMultiOrderDetail *)arg1 BindQueryInfo:(WCPayBindQueryUserInfoStruct *)arg2 Error:(NSError *)arg3;
- (void)OnGetOrderDetailInfo:(WCPayMultiOrderDetail *)arg1 Error:(NSError *)arg2;
- (void)OnGetOrderList:(NSArray *)arg1 TotalCount:(unsigned int)arg2 Error:(NSError *)arg3;
- (void)OnSetWCPayPasswordInBind:(NSError *)arg1;
- (void)OnBindCardVerifySMS:(WCPayBindInfoSMS *)arg1 Error:(NSError *)arg2;
- (void)OnBindCardVerifyCard:(WCPayBindInfo *)arg1 Error:(NSError *)arg2;
- (void)OnTenpayImportBindQuery:(NSArray *)arg1 AppInfo:(TenpayBindCardSubscribeAppInfo *)arg2 UsrVerifiedInfo:(WCPayUserInfo *)arg3 Error:(NSError *)arg4;
- (void)OnAuthenticationResetBalanceTelPayVerifySMS:(WCPayAuthenticationPayVerifySMSStruct *)arg1 PayStatus:(WCPayAuthenticationPayStatusStruct *)arg2 Error:(NSError *)arg3;
- (void)OnAuthenticationResetBalanceTelPay:(WCPayAuthenticationPay *)arg1 PayStatus:(WCPayAuthenticationPayStatusStruct *)arg2 Error:(NSError *)arg3;
- (void)OnGetOrderDetailInfoAfterPaidError:(WCPayAuthenticationPayStatusStruct *)arg1 Error:(NSError *)arg2;
- (void)OnPaySubscribeServiceApp:(NSString *)arg1 Error:(NSError *)arg2;
- (void)OnAuthenticationPayVerifyBind:(NSError *)arg1;
- (void)OnSetWCPayPasswordInPay:(WCPayAuthenticationPayStatusStruct *)arg1 Error:(NSError *)arg2;
- (void)OnAuthenticationPayVerifySMS:(WCPayAuthenticationPayVerifySMSStruct *)arg1 PayStatus:(WCPayAuthenticationPayStatusStruct *)arg2 Error:(NSError *)arg3;
- (void)OnAuthenticationPay:(WCPayAuthenticationPay *)arg1 PayStatus:(WCPayAuthenticationPayStatusStruct *)arg2 Error:(NSError *)arg3;
- (void)OnGetBankPackage:(Package *)arg1 Error:(NSError *)arg2;
- (void)OnGetTenpaySecureCtrlSalt:(NSString *)arg1 Date:(NSDate *)arg2 Error:(NSError *)arg3;
- (void)OnVerifyPayPassword:(NSError *)arg1 andRetToken:(NSString *)arg2;
- (void)OnVerifyPayPassword:(NSError *)arg1;
- (void)OnQueryOrderWhenPaidError:(NSError *)arg1;
- (void)OnShouldChangePayCardError:(NSString *)arg1 ErrorType:(unsigned int)arg2;
- (void)OnAddCardToVerifyUserInfoError:(NSString *)arg1 ErrorType:(unsigned int)arg2;
- (void)OnAddCardError:(NSString *)arg1 ErrorType:(unsigned int)arg2;
- (void)OnLimitInsufficientError:(NSString *)arg1 ErrorType:(unsigned int)arg2;
- (void)OnHandleSpecialPayError:(NSString *)arg1 ErrorType:(unsigned int)arg2;
- (void)OnValidError:(NSString *)arg1;
- (void)OnCVVError:(NSString *)arg1;
- (void)OnCVVAndValidError:(NSString *)arg1;
- (void)OnPhoneNumberError:(NSString *)arg1;
- (void)OnPayPasswordError:(NSString *)arg1 ErrorCount:(int)arg2 LockTotalCount:(unsigned int)arg3;
- (void)OnWCPayBaseRequestNoKnownError:(NSError *)arg1 TenPayCmdType:(int)arg2;
- (void)OnEnterForeground;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "WCCardAddHelperDelegate.h"

@class JSEvent, NSString, WCCardAddHelper;

@interface WebviewJSEvenHandler_batchAddCard : WebviewJSEventHandlerBase <WCCardAddHelperDelegate>
{
    JSEvent *_jsEvent;
    WCCardAddHelper *_addHelper;
}

- (void).cxx_destruct;
- (void)onAddCancel;
- (void)onAddFail:(id)arg1;
- (void)onAddSuccess:(id)arg1;
- (id)getViewController;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


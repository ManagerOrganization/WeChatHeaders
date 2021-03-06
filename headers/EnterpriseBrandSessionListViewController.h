//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IEnterpriseBrandSessionMgrExt.h"
#import "IEnterpriseGroupMgrExt.h"
#import "IMMNewSessionMgrExt.h"
#import "MMWebViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMScrollView, MMTableView, NSString;

@interface EnterpriseBrandSessionListViewController : MMUIViewController <IEnterpriseBrandSessionMgrExt, UITableViewDelegate, UITableViewDataSource, IMMNewSessionMgrExt, WCActionSheetDelegate, MMWebViewDelegate, IEnterpriseGroupMgrExt>
{
    NSString *_mainUserName;
    MMTableView *_tableView;
    MMScrollView *_emptyView;
}

- (void).cxx_destruct;
- (void)onCreateEnterpriseGroup:(id)arg1 errorCode:(int)arg2;
- (void)updateLocalContact:(id)arg1;
- (void)enterChat:(id)arg1;
- (void)createChatroom:(id)arg1;
- (void)createSingleChat:(id)arg1;
- (void)onWebViewWillClose:(id)arg1;
- (void)onSessionTotalUnreadCountChange:(unsigned int)arg1;
- (void)handleAllBrandSessionDeleted;
- (id)getTitleString;
- (void)onEnterpriseBrandSessionsChanged;
- (void)onEnterpriseBrandSessionAllDeleted;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)openChatInfo;
- (void)openFavSessionListView;
- (void)openCreateChat;
- (void)openEnterpriseChat;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showMoreMenu:(id)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willDisappear;
- (void)initEmptyView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithEnterpriseMainUserName:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


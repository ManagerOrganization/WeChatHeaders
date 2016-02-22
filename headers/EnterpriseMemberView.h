//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class EnterpriseMemberViewItem;

@interface EnterpriseMemberView : MMUIView
{
    EnterpriseMemberViewItem *m_viewItem;
    id <EnterpriseMemberViewDelegate> m_delegate;
}

@property(nonatomic) __weak id <EnterpriseMemberViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onDeleteMember;
- (void)onAddMember;
- (void)onLongPressHeadImage:(id)arg1;
- (void)onClickHeadImage;
- (id)getEnterpriseUserName;
- (_Bool)isDeleteSmallButtonHidden;
- (void)setDeleteSmallButtonHidden:(_Bool)arg1;
- (void)initView;
- (id)initWithMemberViewItem:(id)arg1 size:(struct CGSize)arg2;

@end

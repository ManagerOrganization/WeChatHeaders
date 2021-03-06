//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class AddressBookFriend, AttributeLabel, MMHeadImageView, NSString, UIButton;

@interface FTSAddressBookFriendCell : MMTableViewCell
{
    AddressBookFriend *_addressBookFriend;
    NSString *_searchText;
    id <FTSAddressBookFriendCellDelegate> _delegate;
    MMHeadImageView *_headImageView;
    AttributeLabel *_displayNameLabel;
    AttributeLabel *_detailLabel;
    UIButton *_opButton;
}

@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(nonatomic) __weak id <FTSAddressBookFriendCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateAddressBookFriend:(id)arg1 searchText:(id)arg2;
- (void)updateStatus:(_Bool)arg1;
- (void)dealloc;
- (void)initView;
- (void)onOpButtonClicked;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


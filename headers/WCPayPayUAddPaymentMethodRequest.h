//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayPayUAddPaymentMethodRequest : NSObject
{
    NSString *m_bank_type;
    NSString *m_information;
    NSString *m_name_on_card;
    NSString *m_card_number;
    NSString *m_card_expiry;
    NSString *m_description;
    NSString *m_cvv;
    NSString *m_pwd;
}

@property(retain, nonatomic) NSString *m_pwd; // @synthesize m_pwd;
@property(retain, nonatomic) NSString *m_cvv; // @synthesize m_cvv;
@property(retain, nonatomic) NSString *m_description; // @synthesize m_description;
@property(retain, nonatomic) NSString *m_card_expiry; // @synthesize m_card_expiry;
@property(retain, nonatomic) NSString *m_card_number; // @synthesize m_card_number;
@property(retain, nonatomic) NSString *m_name_on_card; // @synthesize m_name_on_card;
@property(retain, nonatomic) NSString *m_information; // @synthesize m_information;
@property(retain, nonatomic) NSString *m_bank_type; // @synthesize m_bank_type;
- (void).cxx_destruct;
- (void)dealloc;

@end

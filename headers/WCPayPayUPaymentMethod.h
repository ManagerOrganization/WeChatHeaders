//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayPayUPaymentMethod : NSObject
{
    NSString *m_bank_type;
    NSString *m_bank_serial;
    NSString *m_total_fee;
    NSString *m_fee_type;
    _Bool m_redirect;
    NSString *m_information;
    NSString *m_name_on_card;
    NSString *m_card_number;
    NSString *m_card_expiry;
    NSString *m_description;
    _Bool m_verified;
    NSString *m_gateway_reference;
    NSString *m_cvv;
}

@property(retain, nonatomic) NSString *m_cvv; // @synthesize m_cvv;
@property(retain, nonatomic) NSString *m_gateway_reference; // @synthesize m_gateway_reference;
@property(nonatomic) _Bool m_verified; // @synthesize m_verified;
@property(retain, nonatomic) NSString *m_description; // @synthesize m_description;
@property(retain, nonatomic) NSString *m_card_number; // @synthesize m_card_number;
@property(retain, nonatomic) NSString *m_card_expiry; // @synthesize m_card_expiry;
@property(retain, nonatomic) NSString *m_name_on_card; // @synthesize m_name_on_card;
@property(retain, nonatomic) NSString *m_information; // @synthesize m_information;
@property(nonatomic) _Bool m_redirect; // @synthesize m_redirect;
@property(retain, nonatomic) NSString *m_fee_type; // @synthesize m_fee_type;
@property(retain, nonatomic) NSString *m_total_fee; // @synthesize m_total_fee;
@property(retain, nonatomic) NSString *m_bank_serial; // @synthesize m_bank_serial;
@property(retain, nonatomic) NSString *m_bank_type; // @synthesize m_bank_type;
- (void).cxx_destruct;
- (void)dealloc;

@end

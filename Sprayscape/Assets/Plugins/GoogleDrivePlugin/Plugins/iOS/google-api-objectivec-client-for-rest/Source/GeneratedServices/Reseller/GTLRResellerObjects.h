// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Enterprise Apps Reseller API (reseller/v1)
// Description:
//   Creates and manages your customers and their subscriptions.
// Documentation:
//   https://developers.google.com/google-apps/reseller/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRReseller_Address;
@class GTLRReseller_RenewalSettings;
@class GTLRReseller_Seats;
@class GTLRReseller_Subscription;
@class GTLRReseller_SubscriptionPlan;
@class GTLRReseller_SubscriptionPlanCommitmentInterval;
@class GTLRReseller_SubscriptionTransferInfo;
@class GTLRReseller_SubscriptionTrialSettings;

NS_ASSUME_NONNULL_BEGIN

/**
 *  JSON template for address of a customer.
 */
@interface GTLRReseller_Address : GTLRObject

/** Address line 1 of the address. */
@property(copy, nullable) NSString *addressLine1;

/** Address line 2 of the address. */
@property(copy, nullable) NSString *addressLine2;

/** Address line 3 of the address. */
@property(copy, nullable) NSString *addressLine3;

/** Name of the contact person. */
@property(copy, nullable) NSString *contactName;

/** ISO 3166 country code. */
@property(copy, nullable) NSString *countryCode;

/** Identifies the resource as a customer address. */
@property(copy, nullable) NSString *kind;

/**
 *  Name of the locality. This is in accordance with -
 *  http://portablecontacts.net/draft-spec.html#address_element.
 */
@property(copy, nullable) NSString *locality;

/** Name of the organization. */
@property(copy, nullable) NSString *organizationName;

/**
 *  The postal code. This is in accordance with -
 *  http://portablecontacts.net/draft-spec.html#address_element.
 */
@property(copy, nullable) NSString *postalCode;

/**
 *  Name of the region. This is in accordance with -
 *  http://portablecontacts.net/draft-spec.html#address_element.
 */
@property(copy, nullable) NSString *region;

@end


/**
 *  JSON template for the ChangePlan rpc request.
 */
@interface GTLRReseller_ChangePlanRequest : GTLRObject

/**
 *  External name of the deal code applicable for the subscription. This field
 *  is optional. If missing, the deal price plan won't be used.
 */
@property(copy, nullable) NSString *dealCode;

/** Identifies the resource as a subscription change plan request. */
@property(copy, nullable) NSString *kind;

/** Name of the plan to change to. */
@property(copy, nullable) NSString *planName;

/** Purchase order id for your order tracking purposes. */
@property(copy, nullable) NSString *purchaseOrderId;

/** Number/Limit of seats in the new plan. */
@property(strong, nullable) GTLRReseller_Seats *seats;

@end


/**
 *  JSON template for a customer.
 */
@interface GTLRReseller_Customer : GTLRObject

/** The alternate email of the customer. */
@property(copy, nullable) NSString *alternateEmail;

/** The domain name of the customer. */
@property(copy, nullable) NSString *customerDomain;

/**
 *  Whether the customer's primary domain has been verified.
 *
 *  Uses NSNumber of boolValue.
 */
@property(strong, nullable) NSNumber *customerDomainVerified;

/** The id of the customer. */
@property(copy, nullable) NSString *customerId;

/** Identifies the resource as a customer. */
@property(copy, nullable) NSString *kind;

/** The phone number of the customer. */
@property(copy, nullable) NSString *phoneNumber;

/** The postal address of the customer. */
@property(strong, nullable) GTLRReseller_Address *postalAddress;

/** Ui url for customer resource. */
@property(copy, nullable) NSString *resourceUiUrl;

@end


/**
 *  JSON template for a subscription renewal settings.
 */
@interface GTLRReseller_RenewalSettings : GTLRObject

/** Identifies the resource as a subscription renewal setting. */
@property(copy, nullable) NSString *kind;

/** Subscription renewal type. */
@property(copy, nullable) NSString *renewalType;

@end


/**
 *  JSON template for subscription seats.
 */
@interface GTLRReseller_Seats : GTLRObject

/** Identifies the resource as a subscription change plan request. */
@property(copy, nullable) NSString *kind;

/**
 *  Read-only field containing the current number of licensed seats for FLEXIBLE
 *  Google-Apps subscriptions and secondary subscriptions such as Google-Vault
 *  and Drive-storage.
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *licensedNumberOfSeats;

/**
 *  Maximum number of seats that can be purchased. This needs to be provided
 *  only for a non-commitment plan. For a commitment plan it is decided by the
 *  contract.
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *maximumNumberOfSeats;

/**
 *  Number of seats to purchase. This is applicable only for a commitment plan.
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *numberOfSeats;

@end


/**
 *  JSON template for a subscription.
 */
@interface GTLRReseller_Subscription : GTLRObject

/** Billing method of this subscription. */
@property(copy, nullable) NSString *billingMethod;

/**
 *  Creation time of this subscription in milliseconds since Unix epoch.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(strong, nullable) NSNumber *creationTime;

/** Primary domain name of the customer */
@property(copy, nullable) NSString *customerDomain;

/** The id of the customer to whom the subscription belongs. */
@property(copy, nullable) NSString *customerId;

/**
 *  External name of the deal, if this subscription was provisioned under one.
 *  Otherwise this field will be empty.
 */
@property(copy, nullable) NSString *dealCode;

/** Identifies the resource as a Subscription. */
@property(copy, nullable) NSString *kind;

/** Plan details of the subscription */
@property(strong, nullable) GTLRReseller_SubscriptionPlan *plan;

/** Purchase order id for your order tracking purposes. */
@property(copy, nullable) NSString *purchaseOrderId;

/** Renewal settings of the subscription. */
@property(strong, nullable) GTLRReseller_RenewalSettings *renewalSettings;

/** Ui url for subscription resource. */
@property(copy, nullable) NSString *resourceUiUrl;

/** Number/Limit of seats in the new plan. */
@property(strong, nullable) GTLRReseller_Seats *seats;

/** Name of the sku for which this subscription is purchased. */
@property(copy, nullable) NSString *skuId;

/** Status of the subscription. */
@property(copy, nullable) NSString *status;

/** The id of the subscription. */
@property(copy, nullable) NSString *subscriptionId;

/**
 *  Read-only field containing an enumerable of all the current suspension
 *  reasons for a subscription. It is possible for a subscription to have many
 *  concurrent, overlapping suspension reasons. A subscription's STATUS is
 *  SUSPENDED until all pending suspensions are removed. Possible options
 *  include:
 *  - PENDING_TOS_ACCEPTANCE - The customer has not logged in and accepted the
 *  Google Apps Resold Terms of Services.
 *  - RENEWAL_WITH_TYPE_CANCEL - The customer's commitment ended and their
 *  service was cancelled at the end of their term.
 *  - RESELLER_INITIATED - A manual suspension invoked by a Reseller.
 *  - TRIAL_ENDED - The customer's trial expired without a plan selected.
 *  - OTHER - The customer is suspended for an internal Google reason (e.g.
 *  abuse or otherwise).
 */
@property(strong, nullable) NSArray<NSString *> *suspensionReasons;

/** Transfer related information for the subscription. */
@property(strong, nullable) GTLRReseller_SubscriptionTransferInfo *transferInfo;

/** Trial Settings of the subscription. */
@property(strong, nullable) GTLRReseller_SubscriptionTrialSettings *trialSettings;

@end


/**
 *  Plan details of the subscription
 */
@interface GTLRReseller_SubscriptionPlan : GTLRObject

/** Interval of the commitment if it is a commitment plan. */
@property(strong, nullable) GTLRReseller_SubscriptionPlanCommitmentInterval *commitmentInterval;

/**
 *  Whether the plan is a commitment plan or not.
 *
 *  Uses NSNumber of boolValue.
 */
@property(strong, nullable) NSNumber *isCommitmentPlan;

/** The plan name of this subscription's plan. */
@property(copy, nullable) NSString *planName;

@end


/**
 *  Transfer related information for the subscription.
 */
@interface GTLRReseller_SubscriptionTransferInfo : GTLRObject

/**
 *  minimumTransferableSeats
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *minimumTransferableSeats;

/**
 *  Time when transfer token or intent to transfer will expire.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(strong, nullable) NSNumber *transferabilityExpirationTime;

@end


/**
 *  Trial Settings of the subscription.
 */
@interface GTLRReseller_SubscriptionTrialSettings : GTLRObject

/**
 *  Whether the subscription is in trial.
 *
 *  Uses NSNumber of boolValue.
 */
@property(strong, nullable) NSNumber *isInTrial;

/**
 *  End time of the trial in milliseconds since Unix epoch.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(strong, nullable) NSNumber *trialEndTime;

@end


/**
 *  Interval of the commitment if it is a commitment plan.
 */
@interface GTLRReseller_SubscriptionPlanCommitmentInterval : GTLRObject

/**
 *  End time of the commitment interval in milliseconds since Unix epoch.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(strong, nullable) NSNumber *endTime;

/**
 *  Start time of the commitment interval in milliseconds since Unix epoch.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(strong, nullable) NSNumber *startTime;

@end


/**
 *  JSON template for a subscription list.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "subscriptions" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRReseller_Subscriptions : GTLRCollectionObject

/** Identifies the resource as a collection of subscriptions. */
@property(copy, nullable) NSString *kind;

/**
 *  The continuation token, used to page through large result sets. Provide this
 *  value in a subsequent request to return the next page of results.
 */
@property(copy, nullable) NSString *nextPageToken;

/**
 *  The subscriptions in this page of results.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(strong, nullable) NSArray<GTLRReseller_Subscription *> *subscriptions;

@end

NS_ASSUME_NONNULL_END

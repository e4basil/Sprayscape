// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Ad Exchange Buyer API II (adexchangebuyer2/v2beta1)
// Description:
//   Accesses the latest features for managing Ad Exchange accounts and
//   Real-Time Bidding configurations and auction metrics.
// Documentation:
//   https://developers.google.com/ad-exchange/buyer-rest/guides/client-access/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRAdExchangeBuyerII_Client;
@class GTLRAdExchangeBuyerII_ClientUser;
@class GTLRAdExchangeBuyerII_ClientUserInvitation;
@class GTLRAdExchangeBuyerII_FilterSet;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other AdExchangeBuyerII query classes.
 */
@interface GTLRAdExchangeBuyerIIQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(copy, nullable) NSString *fields;

@end

/**
 *  Creates a new client buyer.
 *
 *  Method: adexchangebuyer2.accounts.clients.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdExchangeBuyerIIAdexchangeBuyer
 */
@interface GTLRAdExchangeBuyerIIQuery_AccountsClientsCreate : GTLRAdExchangeBuyerIIQuery
// Previous library name was
//   +[GTLQueryAdExchangeBuyerII queryForAccountsClientsCreateWithObject:accountId:]

/**
 *  Unique numerical account ID for the buyer of which the client buyer
 *  is a customer; the sponsor buyer to create a client for. (required)
 */
@property(assign) long long accountId;

/**
 *  Fetches a @c GTLRAdExchangeBuyerII_Client.
 *
 *  Creates a new client buyer.
 *
 *  @param object The @c GTLRAdExchangeBuyerII_Client to include in the query.
 *  @param accountId Unique numerical account ID for the buyer of which the
 *    client buyer
 *    is a customer; the sponsor buyer to create a client for. (required)
 *
 *  @returns GTLRAdExchangeBuyerIIQuery_AccountsClientsCreate
 */
+ (instancetype)queryWithObject:(GTLRAdExchangeBuyerII_Client *)object
                      accountId:(long long)accountId;

@end

/**
 *  Gets a client buyer with a given client account ID.
 *
 *  Method: adexchangebuyer2.accounts.clients.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdExchangeBuyerIIAdexchangeBuyer
 */
@interface GTLRAdExchangeBuyerIIQuery_AccountsClientsGet : GTLRAdExchangeBuyerIIQuery
// Previous library name was
//   +[GTLQueryAdExchangeBuyerII queryForAccountsClientsGetWithaccountId:clientAccountId:]

/** Numerical account ID of the client's sponsor buyer. (required) */
@property(assign) long long accountId;

/** Numerical account ID of the client buyer to retrieve. (required) */
@property(assign) long long clientAccountId;

/**
 *  Fetches a @c GTLRAdExchangeBuyerII_Client.
 *
 *  Gets a client buyer with a given client account ID.
 *
 *  @param accountId Numerical account ID of the client's sponsor buyer.
 *    (required)
 *  @param clientAccountId Numerical account ID of the client buyer to retrieve.
 *    (required)
 *
 *  @returns GTLRAdExchangeBuyerIIQuery_AccountsClientsGet
 */
+ (instancetype)queryWithAccountId:(long long)accountId
                   clientAccountId:(long long)clientAccountId;

@end

/**
 *  Creates and sends out an email invitation to access
 *  an Ad Exchange client buyer account.
 *
 *  Method: adexchangebuyer2.accounts.clients.invitations.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdExchangeBuyerIIAdexchangeBuyer
 */
@interface GTLRAdExchangeBuyerIIQuery_AccountsClientsInvitationsCreate : GTLRAdExchangeBuyerIIQuery
// Previous library name was
//   +[GTLQueryAdExchangeBuyerII queryForAccountsClientsInvitationsCreateWithObject:accountId:clientAccountId:]

/** Numerical account ID of the client's sponsor buyer. (required) */
@property(assign) long long accountId;

/**
 *  Numerical account ID of the client buyer that the user
 *  should be associated with. (required)
 */
@property(assign) long long clientAccountId;

/**
 *  Fetches a @c GTLRAdExchangeBuyerII_ClientUserInvitation.
 *
 *  Creates and sends out an email invitation to access
 *  an Ad Exchange client buyer account.
 *
 *  @param object The @c GTLRAdExchangeBuyerII_ClientUserInvitation to include
 *    in the query.
 *  @param accountId Numerical account ID of the client's sponsor buyer.
 *    (required)
 *  @param clientAccountId Numerical account ID of the client buyer that the
 *    user
 *    should be associated with. (required)
 *
 *  @returns GTLRAdExchangeBuyerIIQuery_AccountsClientsInvitationsCreate
 */
+ (instancetype)queryWithObject:(GTLRAdExchangeBuyerII_ClientUserInvitation *)object
                      accountId:(long long)accountId
                clientAccountId:(long long)clientAccountId;

@end

/**
 *  Retrieves an existing client user invitation.
 *
 *  Method: adexchangebuyer2.accounts.clients.invitations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdExchangeBuyerIIAdexchangeBuyer
 */
@interface GTLRAdExchangeBuyerIIQuery_AccountsClientsInvitationsGet : GTLRAdExchangeBuyerIIQuery
// Previous library name was
//   +[GTLQueryAdExchangeBuyerII queryForAccountsClientsInvitationsGetWithaccountId:clientAccountId:invitationId:]

/** Numerical account ID of the client's sponsor buyer. (required) */
@property(assign) long long accountId;

/**
 *  Numerical account ID of the client buyer that the user invitation
 *  to be retrieved is associated with. (required)
 */
@property(assign) long long clientAccountId;

/** Numerical identifier of the user invitation to retrieve. (required) */
@property(assign) long long invitationId;

/**
 *  Fetches a @c GTLRAdExchangeBuyerII_ClientUserInvitation.
 *
 *  Retrieves an existing client user invitation.
 *
 *  @param accountId Numerical account ID of the client's sponsor buyer.
 *    (required)
 *  @param clientAccountId Numerical account ID of the client buyer that the
 *    user invitation
 *    to be retrieved is associated with. (required)
 *  @param invitationId Numerical identifier of the user invitation to retrieve.
 *    (required)
 *
 *  @returns GTLRAdExchangeBuyerIIQuery_AccountsClientsInvitationsGet
 */
+ (instancetype)queryWithAccountId:(long long)accountId
                   clientAccountId:(long long)clientAccountId
                      invitationId:(long long)invitationId;

@end

/**
 *  Lists all the client users invitations for a client
 *  with a given account ID.
 *
 *  Method: adexchangebuyer2.accounts.clients.invitations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdExchangeBuyerIIAdexchangeBuyer
 */
@interface GTLRAdExchangeBuyerIIQuery_AccountsClientsInvitationsList : GTLRAdExchangeBuyerIIQuery
// Previous library name was
//   +[GTLQueryAdExchangeBuyerII queryForAccountsClientsInvitationsListWithaccountId:clientAccountId:]

/** Numerical account ID of the client's sponsor buyer. (required) */
@property(assign) long long accountId;

/**
 *  Numerical account ID of the client buyer to list invitations for.
 *  (required)
 *  You must either specify a string representation of a
 *  numerical account identifier or the `-` character
 *  to list all the invitations for all the clients
 *  of a given sponsor buyer.
 */
@property(copy, nullable) NSString *clientAccountId;

/**
 *  Requested page size. Server may return fewer clients than requested.
 *  If unspecified, server will pick an appropriate default.
 */
@property(assign) NSInteger pageSize;

/**
 *  A token identifying a page of results the server should return.
 *  Typically, this is the value of
 *  ListClientUserInvitationsResponse.nextPageToken
 *  returned from the previous call to the
 *  clients.invitations.list
 *  method.
 */
@property(copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRAdExchangeBuyerII_ListClientUserInvitationsResponse.
 *
 *  Lists all the client users invitations for a client
 *  with a given account ID.
 *
 *  @param accountId Numerical account ID of the client's sponsor buyer.
 *    (required)
 *  @param clientAccountId Numerical account ID of the client buyer to list
 *    invitations for.
 *    (required)
 *    You must either specify a string representation of a
 *    numerical account identifier or the `-` character
 *    to list all the invitations for all the clients
 *    of a given sponsor buyer.
 *
 *  @returns GTLRAdExchangeBuyerIIQuery_AccountsClientsInvitationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithAccountId:(long long)accountId
                   clientAccountId:(NSString *)clientAccountId;

@end

/**
 *  Lists all the clients for the current sponsor buyer.
 *
 *  Method: adexchangebuyer2.accounts.clients.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdExchangeBuyerIIAdexchangeBuyer
 */
@interface GTLRAdExchangeBuyerIIQuery_AccountsClientsList : GTLRAdExchangeBuyerIIQuery
// Previous library name was
//   +[GTLQueryAdExchangeBuyerII queryForAccountsClientsListWithaccountId:]

/**
 *  Unique numerical account ID of the sponsor buyer to list the clients for.
 */
@property(assign) long long accountId;

/**
 *  Requested page size. The server may return fewer clients than requested.
 *  If unspecified, the server will pick an appropriate default.
 */
@property(assign) NSInteger pageSize;

/**
 *  A token identifying a page of results the server should return.
 *  Typically, this is the value of
 *  ListClientsResponse.nextPageToken
 *  returned from the previous call to the
 *  accounts.clients.list method.
 */
@property(copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRAdExchangeBuyerII_ListClientsResponse.
 *
 *  Lists all the clients for the current sponsor buyer.
 *
 *  @param accountId Unique numerical account ID of the sponsor buyer to list
 *    the clients for.
 *
 *  @returns GTLRAdExchangeBuyerIIQuery_AccountsClientsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithAccountId:(long long)accountId;

@end

/**
 *  Updates an existing client buyer.
 *
 *  Method: adexchangebuyer2.accounts.clients.update
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdExchangeBuyerIIAdexchangeBuyer
 */
@interface GTLRAdExchangeBuyerIIQuery_AccountsClientsUpdate : GTLRAdExchangeBuyerIIQuery
// Previous library name was
//   +[GTLQueryAdExchangeBuyerII queryForAccountsClientsUpdateWithObject:accountId:clientAccountId:]

/**
 *  Unique numerical account ID for the buyer of which the client buyer
 *  is a customer; the sponsor buyer to update a client for. (required)
 */
@property(assign) long long accountId;

/** Unique numerical account ID of the client to update. (required) */
@property(assign) long long clientAccountId;

/**
 *  Fetches a @c GTLRAdExchangeBuyerII_Client.
 *
 *  Updates an existing client buyer.
 *
 *  @param object The @c GTLRAdExchangeBuyerII_Client to include in the query.
 *  @param accountId Unique numerical account ID for the buyer of which the
 *    client buyer
 *    is a customer; the sponsor buyer to update a client for. (required)
 *  @param clientAccountId Unique numerical account ID of the client to update.
 *    (required)
 *
 *  @returns GTLRAdExchangeBuyerIIQuery_AccountsClientsUpdate
 */
+ (instancetype)queryWithObject:(GTLRAdExchangeBuyerII_Client *)object
                      accountId:(long long)accountId
                clientAccountId:(long long)clientAccountId;

@end

/**
 *  Retrieves an existing client user.
 *
 *  Method: adexchangebuyer2.accounts.clients.users.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdExchangeBuyerIIAdexchangeBuyer
 */
@interface GTLRAdExchangeBuyerIIQuery_AccountsClientsUsersGet : GTLRAdExchangeBuyerIIQuery
// Previous library name was
//   +[GTLQueryAdExchangeBuyerII queryForAccountsClientsUsersGetWithaccountId:clientAccountId:userId:]

/** Numerical account ID of the client's sponsor buyer. (required) */
@property(assign) long long accountId;

/**
 *  Numerical account ID of the client buyer
 *  that the user to be retrieved is associated with. (required)
 */
@property(assign) long long clientAccountId;

/** Numerical identifier of the user to retrieve. (required) */
@property(assign) long long userId;

/**
 *  Fetches a @c GTLRAdExchangeBuyerII_ClientUser.
 *
 *  Retrieves an existing client user.
 *
 *  @param accountId Numerical account ID of the client's sponsor buyer.
 *    (required)
 *  @param clientAccountId Numerical account ID of the client buyer
 *    that the user to be retrieved is associated with. (required)
 *  @param userId Numerical identifier of the user to retrieve. (required)
 *
 *  @returns GTLRAdExchangeBuyerIIQuery_AccountsClientsUsersGet
 */
+ (instancetype)queryWithAccountId:(long long)accountId
                   clientAccountId:(long long)clientAccountId
                            userId:(long long)userId;

@end

/**
 *  Lists all the known client users for a specified
 *  sponsor buyer account ID.
 *
 *  Method: adexchangebuyer2.accounts.clients.users.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdExchangeBuyerIIAdexchangeBuyer
 */
@interface GTLRAdExchangeBuyerIIQuery_AccountsClientsUsersList : GTLRAdExchangeBuyerIIQuery
// Previous library name was
//   +[GTLQueryAdExchangeBuyerII queryForAccountsClientsUsersListWithaccountId:clientAccountId:]

/**
 *  Numerical account ID of the sponsor buyer of the client to list users for.
 *  (required)
 */
@property(assign) long long accountId;

/**
 *  The account ID of the client buyer to list users for. (required)
 *  You must specify either a string representation of a
 *  numerical account identifier or the `-` character
 *  to list all the client users for all the clients
 *  of a given sponsor buyer.
 */
@property(copy, nullable) NSString *clientAccountId;

/**
 *  Requested page size. The server may return fewer clients than requested.
 *  If unspecified, the server will pick an appropriate default.
 */
@property(assign) NSInteger pageSize;

/**
 *  A token identifying a page of results the server should return.
 *  Typically, this is the value of
 *  ListClientUsersResponse.nextPageToken
 *  returned from the previous call to the
 *  accounts.clients.users.list method.
 */
@property(copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRAdExchangeBuyerII_ListClientUsersResponse.
 *
 *  Lists all the known client users for a specified
 *  sponsor buyer account ID.
 *
 *  @param accountId Numerical account ID of the sponsor buyer of the client to
 *    list users for.
 *    (required)
 *  @param clientAccountId The account ID of the client buyer to list users for.
 *    (required)
 *    You must specify either a string representation of a
 *    numerical account identifier or the `-` character
 *    to list all the client users for all the clients
 *    of a given sponsor buyer.
 *
 *  @returns GTLRAdExchangeBuyerIIQuery_AccountsClientsUsersList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithAccountId:(long long)accountId
                   clientAccountId:(NSString *)clientAccountId;

@end

/**
 *  Updates an existing client user.
 *  Only the user status can be changed on update.
 *
 *  Method: adexchangebuyer2.accounts.clients.users.update
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdExchangeBuyerIIAdexchangeBuyer
 */
@interface GTLRAdExchangeBuyerIIQuery_AccountsClientsUsersUpdate : GTLRAdExchangeBuyerIIQuery
// Previous library name was
//   +[GTLQueryAdExchangeBuyerII queryForAccountsClientsUsersUpdateWithObject:accountId:clientAccountId:userId:]

/** Numerical account ID of the client's sponsor buyer. (required) */
@property(assign) long long accountId;

/**
 *  Numerical account ID of the client buyer that the user to be retrieved
 *  is associated with. (required)
 */
@property(assign) long long clientAccountId;

/** Numerical identifier of the user to retrieve. (required) */
@property(assign) long long userId;

/**
 *  Fetches a @c GTLRAdExchangeBuyerII_ClientUser.
 *
 *  Updates an existing client user.
 *  Only the user status can be changed on update.
 *
 *  @param object The @c GTLRAdExchangeBuyerII_ClientUser to include in the
 *    query.
 *  @param accountId Numerical account ID of the client's sponsor buyer.
 *    (required)
 *  @param clientAccountId Numerical account ID of the client buyer that the
 *    user to be retrieved
 *    is associated with. (required)
 *  @param userId Numerical identifier of the user to retrieve. (required)
 *
 *  @returns GTLRAdExchangeBuyerIIQuery_AccountsClientsUsersUpdate
 */
+ (instancetype)queryWithObject:(GTLRAdExchangeBuyerII_ClientUser *)object
                      accountId:(long long)accountId
                clientAccountId:(long long)clientAccountId
                         userId:(long long)userId;

@end

/**
 *  Creates the specified filter set for the account with the given account ID.
 *
 *  Method: adexchangebuyer2.accounts.filterSets.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdExchangeBuyerIIAdexchangeBuyer
 */
@interface GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsCreate : GTLRAdExchangeBuyerIIQuery
// Previous library name was
//   +[GTLQueryAdExchangeBuyerII queryForAccountsFilterSetsCreateWithObject:accountId:]

/** Account ID of the buyer. */
@property(assign) long long accountId;

/**
 *  Whether the filter set is transient, or should be persisted indefinitely.
 *  By default, filter sets are not transient.
 *  If transient, it will be available for at least 1 hour after creation.
 */
@property(assign) BOOL isTransient;

/**
 *  Fetches a @c GTLRAdExchangeBuyerII_FilterSet.
 *
 *  Creates the specified filter set for the account with the given account ID.
 *
 *  @param object The @c GTLRAdExchangeBuyerII_FilterSet to include in the
 *    query.
 *  @param accountId Account ID of the buyer.
 *
 *  @returns GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsCreate
 */
+ (instancetype)queryWithObject:(GTLRAdExchangeBuyerII_FilterSet *)object
                      accountId:(long long)accountId;

@end

/**
 *  Deletes the requested filter set from the account with the given account
 *  ID.
 *
 *  Method: adexchangebuyer2.accounts.filterSets.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdExchangeBuyerIIAdexchangeBuyer
 */
@interface GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsDelete : GTLRAdExchangeBuyerIIQuery
// Previous library name was
//   +[GTLQueryAdExchangeBuyerII queryForAccountsFilterSetsDeleteWithaccountId:filterSetId:]

/** Account ID of the buyer. */
@property(assign) long long accountId;

/** The ID of the filter set to delete. */
@property(assign) NSInteger filterSetId;

/**
 *  Fetches a @c GTLRAdExchangeBuyerII_Empty.
 *
 *  Deletes the requested filter set from the account with the given account
 *  ID.
 *
 *  @param accountId Account ID of the buyer.
 *  @param filterSetId The ID of the filter set to delete.
 *
 *  @returns GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsDelete
 */
+ (instancetype)queryWithAccountId:(long long)accountId
                       filterSetId:(NSInteger)filterSetId;

@end

/**
 *  List all details associated with a specific reason for which bids were
 *  filtered and a specific creative that was filtered for that reason, with
 *  the number of bids filtered for each detail.
 *
 *  Method: adexchangebuyer2.accounts.filterSets.filteredBids.creatives.details.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdExchangeBuyerIIAdexchangeBuyer
 */
@interface GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsFilteredBidsCreativesDetailsList : GTLRAdExchangeBuyerIIQuery
// Previous library name was
//   +[GTLQueryAdExchangeBuyerII queryForAccountsFilterSetsFilteredBidsCreativesDetailsListWithaccountId:filterSetId:creativeStatusId:creativeId:]

/** Account ID of the buyer. */
@property(assign) long long accountId;

/** The creative ID for which to retrieve a breakdown by detail. */
@property(copy, nullable) NSString *creativeId;

/**
 *  The ID of the creative status for which to retrieve a breakdown by detail.
 *  See creative-status-codes.
 */
@property(assign) NSInteger creativeStatusId;

/** The ID of the filter set to apply. */
@property(assign) NSInteger filterSetId;

/**
 *  Fetches a @c
 *  GTLRAdExchangeBuyerII_ListCreativeStatusAndCreativeBreakdownByDetailResponse.
 *
 *  List all details associated with a specific reason for which bids were
 *  filtered and a specific creative that was filtered for that reason, with
 *  the number of bids filtered for each detail.
 *
 *  @param accountId Account ID of the buyer.
 *  @param filterSetId The ID of the filter set to apply.
 *  @param creativeStatusId The ID of the creative status for which to retrieve
 *    a breakdown by detail.
 *    See creative-status-codes.
 *  @param creativeId The creative ID for which to retrieve a breakdown by
 *    detail.
 *
 *  @returns GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsFilteredBidsCreativesDetailsList
 */
+ (instancetype)queryWithAccountId:(long long)accountId
                       filterSetId:(NSInteger)filterSetId
                  creativeStatusId:(NSInteger)creativeStatusId
                        creativeId:(NSString *)creativeId;

@end

/**
 *  List all creatives associated with a specific reason for which bids were
 *  filtered, with the number of bids filtered for each creative.
 *
 *  Method: adexchangebuyer2.accounts.filterSets.filteredBids.creatives.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdExchangeBuyerIIAdexchangeBuyer
 */
@interface GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsFilteredBidsCreativesList : GTLRAdExchangeBuyerIIQuery
// Previous library name was
//   +[GTLQueryAdExchangeBuyerII queryForAccountsFilterSetsFilteredBidsCreativesListWithaccountId:filterSetId:creativeStatusId:]

/** Account ID of the buyer. */
@property(assign) long long accountId;

/**
 *  The ID of the creative status for which to retrieve a breakdown by
 *  creative.
 *  See creative-status-codes.
 */
@property(assign) NSInteger creativeStatusId;

/** The ID of the filter set to apply. */
@property(assign) NSInteger filterSetId;

/**
 *  Requested page size. The server may return fewer than requested.
 *  If unspecified, the server will pick an appropriate default.
 */
@property(assign) NSInteger pageSize;

/**
 *  A token identifying a page of results the server should return.
 *  Typically, this is the value of
 *  ListCreativeStatusBreakdownByCreativeResponse.nextPageToken
 *  returned from the previous call to the
 *  accounts.filterSets.filteredBids.creatives.list method.
 */
@property(copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c
 *  GTLRAdExchangeBuyerII_ListCreativeStatusBreakdownByCreativeResponse.
 *
 *  List all creatives associated with a specific reason for which bids were
 *  filtered, with the number of bids filtered for each creative.
 *
 *  @param accountId Account ID of the buyer.
 *  @param filterSetId The ID of the filter set to apply.
 *  @param creativeStatusId The ID of the creative status for which to retrieve
 *    a breakdown by
 *    creative.
 *    See creative-status-codes.
 *
 *  @returns GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsFilteredBidsCreativesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithAccountId:(long long)accountId
                       filterSetId:(NSInteger)filterSetId
                  creativeStatusId:(NSInteger)creativeStatusId;

@end

/**
 *  List all details associated with a specific reason for which bids were
 *  filtered, with the number of bids filtered for each detail.
 *
 *  Method: adexchangebuyer2.accounts.filterSets.filteredBids.details.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdExchangeBuyerIIAdexchangeBuyer
 */
@interface GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsFilteredBidsDetailsList : GTLRAdExchangeBuyerIIQuery
// Previous library name was
//   +[GTLQueryAdExchangeBuyerII queryForAccountsFilterSetsFilteredBidsDetailsListWithaccountId:filterSetId:creativeStatusId:]

/** Account ID of the buyer. */
@property(assign) long long accountId;

/**
 *  The ID of the creative status for which to retrieve a breakdown by detail.
 *  See creative-status-codes.
 */
@property(assign) NSInteger creativeStatusId;

/** The ID of the filter set to apply. */
@property(assign) NSInteger filterSetId;

/**
 *  Fetches a @c
 *  GTLRAdExchangeBuyerII_ListCreativeStatusBreakdownByDetailResponse.
 *
 *  List all details associated with a specific reason for which bids were
 *  filtered, with the number of bids filtered for each detail.
 *
 *  @param accountId Account ID of the buyer.
 *  @param filterSetId The ID of the filter set to apply.
 *  @param creativeStatusId The ID of the creative status for which to retrieve
 *    a breakdown by detail.
 *    See creative-status-codes.
 *
 *  @returns GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsFilteredBidsDetailsList
 */
+ (instancetype)queryWithAccountId:(long long)accountId
                       filterSetId:(NSInteger)filterSetId
                  creativeStatusId:(NSInteger)creativeStatusId;

@end

/**
 *  List all reasons for which bids were filtered, with the number of bids
 *  filtered for each reason.
 *
 *  Method: adexchangebuyer2.accounts.filterSets.filteredBids.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdExchangeBuyerIIAdexchangeBuyer
 */
@interface GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsFilteredBidsList : GTLRAdExchangeBuyerIIQuery
// Previous library name was
//   +[GTLQueryAdExchangeBuyerII queryForAccountsFilterSetsFilteredBidsListWithaccountId:filterSetId:]

/** Account ID of the buyer. */
@property(assign) long long accountId;

/** The ID of the filter set to apply. */
@property(assign) NSInteger filterSetId;

/**
 *  Fetches a @c GTLRAdExchangeBuyerII_ListFilteredBidsResponse.
 *
 *  List all reasons for which bids were filtered, with the number of bids
 *  filtered for each reason.
 *
 *  @param accountId Account ID of the buyer.
 *  @param filterSetId The ID of the filter set to apply.
 *
 *  @returns GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsFilteredBidsList
 */
+ (instancetype)queryWithAccountId:(long long)accountId
                       filterSetId:(NSInteger)filterSetId;

@end

/**
 *  List all reasons that caused an impression to be filtered (i.e. not
 *  considered as an inventory match), with the number of impressions that were
 *  filtered for each reason.
 *
 *  Method: adexchangebuyer2.accounts.filterSets.filteredImpressions.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdExchangeBuyerIIAdexchangeBuyer
 */
@interface GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsFilteredImpressionsList : GTLRAdExchangeBuyerIIQuery
// Previous library name was
//   +[GTLQueryAdExchangeBuyerII queryForAccountsFilterSetsFilteredImpressionsListWithaccountId:filterSetId:]

/** Account ID of the buyer. */
@property(assign) long long accountId;

/** The ID of the filter set to apply. */
@property(assign) NSInteger filterSetId;

/**
 *  Fetches a @c GTLRAdExchangeBuyerII_ListFilteredImpressionsResponse.
 *
 *  List all reasons that caused an impression to be filtered (i.e. not
 *  considered as an inventory match), with the number of impressions that were
 *  filtered for each reason.
 *
 *  @param accountId Account ID of the buyer.
 *  @param filterSetId The ID of the filter set to apply.
 *
 *  @returns GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsFilteredImpressionsList
 */
+ (instancetype)queryWithAccountId:(long long)accountId
                       filterSetId:(NSInteger)filterSetId;

@end

/**
 *  List all reasons that caused a bid request not to be sent for an
 *  impression, with the number of bid requests not sent for each reason.
 *
 *  Method: adexchangebuyer2.accounts.filterSets.filteredRequests.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdExchangeBuyerIIAdexchangeBuyer
 */
@interface GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsFilteredRequestsList : GTLRAdExchangeBuyerIIQuery
// Previous library name was
//   +[GTLQueryAdExchangeBuyerII queryForAccountsFilterSetsFilteredRequestsListWithaccountId:filterSetId:]

/** Account ID of the buyer. */
@property(assign) long long accountId;

/** The ID of the filter set to apply. */
@property(assign) NSInteger filterSetId;

/**
 *  Fetches a @c GTLRAdExchangeBuyerII_ListFilteredRequestsResponse.
 *
 *  List all reasons that caused a bid request not to be sent for an
 *  impression, with the number of bid requests not sent for each reason.
 *
 *  @param accountId Account ID of the buyer.
 *  @param filterSetId The ID of the filter set to apply.
 *
 *  @returns GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsFilteredRequestsList
 */
+ (instancetype)queryWithAccountId:(long long)accountId
                       filterSetId:(NSInteger)filterSetId;

@end

/**
 *  Retrieves the requested filter set for the account with the given account
 *  ID.
 *
 *  Method: adexchangebuyer2.accounts.filterSets.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdExchangeBuyerIIAdexchangeBuyer
 */
@interface GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsGet : GTLRAdExchangeBuyerIIQuery
// Previous library name was
//   +[GTLQueryAdExchangeBuyerII queryForAccountsFilterSetsGetWithaccountId:filterSetId:]

/** Account ID of the buyer. */
@property(assign) long long accountId;

/** The ID of the filter set to get. */
@property(assign) NSInteger filterSetId;

/**
 *  Fetches a @c GTLRAdExchangeBuyerII_FilterSet.
 *
 *  Retrieves the requested filter set for the account with the given account
 *  ID.
 *
 *  @param accountId Account ID of the buyer.
 *  @param filterSetId The ID of the filter set to get.
 *
 *  @returns GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsGet
 */
+ (instancetype)queryWithAccountId:(long long)accountId
                       filterSetId:(NSInteger)filterSetId;

@end

/**
 *  Gets all metrics that are measured in terms of number of bids.
 *
 *  Method: adexchangebuyer2.accounts.filterSets.getBidMetrics
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdExchangeBuyerIIAdexchangeBuyer
 */
@interface GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsGetBidMetrics : GTLRAdExchangeBuyerIIQuery
// Previous library name was
//   +[GTLQueryAdExchangeBuyerII queryForAccountsFilterSetsGetBidMetricsWithaccountId:filterSetId:]

/** Account ID of the buyer. */
@property(assign) long long accountId;

/** The ID of the filter set to apply. */
@property(assign) NSInteger filterSetId;

/**
 *  Fetches a @c GTLRAdExchangeBuyerII_BidMetrics.
 *
 *  Gets all metrics that are measured in terms of number of bids.
 *
 *  @param accountId Account ID of the buyer.
 *  @param filterSetId The ID of the filter set to apply.
 *
 *  @returns GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsGetBidMetrics
 */
+ (instancetype)queryWithAccountId:(long long)accountId
                       filterSetId:(NSInteger)filterSetId;

@end

/**
 *  Gets all metrics that are measured in terms of number of impressions.
 *
 *  Method: adexchangebuyer2.accounts.filterSets.getImpressionMetrics
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdExchangeBuyerIIAdexchangeBuyer
 */
@interface GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsGetImpressionMetrics : GTLRAdExchangeBuyerIIQuery
// Previous library name was
//   +[GTLQueryAdExchangeBuyerII queryForAccountsFilterSetsGetImpressionMetricsWithaccountId:filterSetId:]

/** Account ID of the buyer. */
@property(assign) long long accountId;

/** The ID of the filter set to apply. */
@property(assign) NSInteger filterSetId;

/**
 *  Fetches a @c GTLRAdExchangeBuyerII_ImpressionMetrics.
 *
 *  Gets all metrics that are measured in terms of number of impressions.
 *
 *  @param accountId Account ID of the buyer.
 *  @param filterSetId The ID of the filter set to apply.
 *
 *  @returns GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsGetImpressionMetrics
 */
+ (instancetype)queryWithAccountId:(long long)accountId
                       filterSetId:(NSInteger)filterSetId;

@end

/**
 *  Lists all filter sets for the account with the given account ID.
 *
 *  Method: adexchangebuyer2.accounts.filterSets.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdExchangeBuyerIIAdexchangeBuyer
 */
@interface GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsList : GTLRAdExchangeBuyerIIQuery
// Previous library name was
//   +[GTLQueryAdExchangeBuyerII queryForAccountsFilterSetsListWithaccountId:]

/** Account ID of the buyer. */
@property(assign) long long accountId;

/**
 *  Requested page size. The server may return fewer than requested.
 *  If unspecified, the server will pick an appropriate default.
 */
@property(assign) NSInteger pageSize;

/**
 *  A token identifying a page of results the server should return.
 *  Typically, this is the value of
 *  ListFilterSetsResponse.nextPageToken
 *  returned from the previous call to the
 *  accounts.rtbBreakout.filterSets.list method.
 */
@property(copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRAdExchangeBuyerII_ListFilterSetsResponse.
 *
 *  Lists all filter sets for the account with the given account ID.
 *
 *  @param accountId Account ID of the buyer.
 *
 *  @returns GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithAccountId:(long long)accountId;

@end

/**
 *  List all reasons for which bids lost in the auction, with the number of
 *  bids that lost for each reason.
 *
 *  Method: adexchangebuyer2.accounts.filterSets.losingBids.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdExchangeBuyerIIAdexchangeBuyer
 */
@interface GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsLosingBidsList : GTLRAdExchangeBuyerIIQuery
// Previous library name was
//   +[GTLQueryAdExchangeBuyerII queryForAccountsFilterSetsLosingBidsListWithaccountId:filterSetId:]

/** Account ID of the buyer. */
@property(assign) long long accountId;

/** The ID of the filter set to apply. */
@property(assign) NSInteger filterSetId;

/**
 *  Fetches a @c GTLRAdExchangeBuyerII_ListLosingBidsResponse.
 *
 *  List all reasons for which bids lost in the auction, with the number of
 *  bids that lost for each reason.
 *
 *  @param accountId Account ID of the buyer.
 *  @param filterSetId The ID of the filter set to apply.
 *
 *  @returns GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsLosingBidsList
 */
+ (instancetype)queryWithAccountId:(long long)accountId
                       filterSetId:(NSInteger)filterSetId;

@end

/**
 *  List all errors that occurred in bid responses, with the number of bid
 *  responses affected for each reason.
 *
 *  Method: adexchangebuyer2.accounts.filterSets.responseErrors.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdExchangeBuyerIIAdexchangeBuyer
 */
@interface GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsResponseErrorsList : GTLRAdExchangeBuyerIIQuery
// Previous library name was
//   +[GTLQueryAdExchangeBuyerII queryForAccountsFilterSetsResponseErrorsListWithaccountId:filterSetId:]

/** Account ID of the buyer. */
@property(assign) long long accountId;

/** The ID of the filter set to apply. */
@property(assign) NSInteger filterSetId;

/**
 *  Fetches a @c GTLRAdExchangeBuyerII_ListResponseErrorsResponse.
 *
 *  List all errors that occurred in bid responses, with the number of bid
 *  responses affected for each reason.
 *
 *  @param accountId Account ID of the buyer.
 *  @param filterSetId The ID of the filter set to apply.
 *
 *  @returns GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsResponseErrorsList
 */
+ (instancetype)queryWithAccountId:(long long)accountId
                       filterSetId:(NSInteger)filterSetId;

@end

/**
 *  List all reasons for which bid responses were considered to have no
 *  applicable bids, with the number of bid responses affected for each reason.
 *
 *  Method: adexchangebuyer2.accounts.filterSets.responsesWithoutBids.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdExchangeBuyerIIAdexchangeBuyer
 */
@interface GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsResponsesWithoutBidsList : GTLRAdExchangeBuyerIIQuery
// Previous library name was
//   +[GTLQueryAdExchangeBuyerII queryForAccountsFilterSetsResponsesWithoutBidsListWithaccountId:filterSetId:]

/** Account ID of the buyer. */
@property(assign) long long accountId;

/** The ID of the filter set to apply. */
@property(assign) NSInteger filterSetId;

/**
 *  Fetches a @c GTLRAdExchangeBuyerII_ListResponsesWithoutBidsResponse.
 *
 *  List all reasons for which bid responses were considered to have no
 *  applicable bids, with the number of bid responses affected for each reason.
 *
 *  @param accountId Account ID of the buyer.
 *  @param filterSetId The ID of the filter set to apply.
 *
 *  @returns GTLRAdExchangeBuyerIIQuery_AccountsFilterSetsResponsesWithoutBidsList
 */
+ (instancetype)queryWithAccountId:(long long)accountId
                       filterSetId:(NSInteger)filterSetId;

@end

NS_ASSUME_NONNULL_END

// This file is generated, don't edit it!!

#if !defined(ERRHEADER_XMLExcepts)
#define ERRHEADER_XMLExcepts

#include <xercesc/util/XercesDefs.hpp>

XERCES_CPP_NAMESPACE_BEGIN

class XMLExcepts
{
public :
    enum Codes
    {
        NoError                            = 0
      , W_LowBounds                        = 1
      , Scan_CouldNotOpenSource_Warning    = 2
      , GC_ExistingGrammar                 = 3
      , W_HighBounds                       = 4
      , F_LowBounds                        = 5
      , Array_BadIndex                     = 6
      , Array_BadNewSize                   = 7
      , AttrList_BadIndex                  = 8
      , AttDef_BadAttType                  = 9
      , AttDef_BadDefAttType               = 10
      , Bitset_BadIndex                    = 11
      , Bitset_NotEqualSize                = 12
      , BufMgr_NoMoreBuffers               = 13
      , BufMgr_BufferNotInPool             = 14
      , CPtr_PointerIsZero                 = 15
      , CM_BinOpHadUnaryType               = 16
      , CM_MustBeMixedOrChildren           = 17
      , CM_NoPCDATAHere                    = 18
      , CM_NotValidForSpecType             = 19
      , CM_UnaryOpHadBinType               = 20
      , CM_UnknownCMType                   = 21
      , CM_UnknownCMSpecType               = 22
      , CM_NoParentCSN                     = 23
      , CM_NotValidSpecTypeForNode         = 24
      , DTD_UnknownCreateReason            = 25
      , ElemStack_EmptyStack               = 26
      , ElemStack_BadIndex                 = 27
      , ElemStack_StackUnderflow           = 28
      , ElemStack_NoParentPushed           = 29
      , Enum_NoMoreElements                = 30
      , File_CouldNotOpenFile              = 31
      , File_CouldNotGetCurPos             = 32
      , File_CouldNotCloseFile             = 33
      , File_CouldNotSeekToEnd             = 34
      , File_CouldNotSeekToPos             = 35
      , File_CouldNotDupHandle             = 36
      , File_CouldNotReadFromFile          = 37
      , File_CouldNotWriteToFile           = 38
      , File_CouldNotResetFile             = 39
      , File_CouldNotGetSize               = 40
      , File_CouldNotGetBasePathName       = 41
      , File_BasePathUnderflow             = 42
      , Gen_ParseInProgress                = 43
      , Gen_NoDTDValidator                 = 44
      , Gen_CouldNotOpenDTD                = 45
      , Gen_CouldNotOpenExtEntity          = 46
      , Gen_UnexpectedEOF                  = 47
      , HshTbl_ZeroModulus                 = 48
      , HshTbl_BadHashFromKey              = 49
      , HshTbl_NoSuchKeyExists             = 50
      , Mutex_CouldNotCreate               = 51
      , Mutex_CouldNotClose                = 52
      , Mutex_CouldNotLock                 = 53
      , Mutex_CouldNotUnlock               = 54
      , Mutex_CouldNotDestroy              = 55
      , NetAcc_InternalError               = 56
      , NetAcc_LengthError                 = 57
      , NetAcc_InitFailed                  = 58
      , NetAcc_TargetResolution            = 59
      , NetAcc_CreateSocket                = 60
      , NetAcc_ConnSocket                  = 61
      , NetAcc_WriteSocket                 = 62
      , NetAcc_ReadSocket                  = 63
      , Pool_ElemAlreadyExists             = 64
      , Pool_BadHashFromKey                = 65
      , Pool_InvalidId                     = 66
      , Pool_ZeroModulus                   = 67
      , RdrMgr_ReaderIdNotFound            = 68
      , Reader_BadAutoEncoding             = 69
      , Reader_CouldNotDecodeFirstLine     = 70
      , Reader_EOIInMultiSeq               = 71
      , Reader_SrcOfsNotSupported          = 72
      , Reader_EncodingStrRequired         = 73
      , Scan_CouldNotOpenSource            = 74
      , Scan_UnbalancedStartEnd            = 75
      , Scan_BadPScanToken                 = 76
      , Stack_BadIndex                     = 77
      , Stack_EmptyStack                   = 78
      , Str_ZeroSizedTargetBuf             = 79
      , Str_UnknownRadix                   = 80
      , Str_TargetBufTooSmall              = 81
      , Str_StartIndexPastEnd              = 82
      , Str_ConvertOverflow                = 83
      , Strm_StdErrWriteFailure            = 84
      , Strm_StdOutWriteFailure            = 85
      , Strm_ConWriteFailure               = 86
      , StrPool_IllegalId                  = 87
      , Trans_CouldNotCreateDefCvtr        = 88
      , Trans_InvalidSizeReq               = 89
      , Trans_Unrepresentable              = 90
      , Trans_NotValidForEncoding          = 91
      , Trans_BadBlockSize                 = 92
      , Trans_BadSrcSeq                    = 93
      , Trans_BadSrcCP                     = 94
      , Trans_BadTrailingSurrogate         = 95
      , Trans_CantCreateCvtrFor            = 96
      , URL_MalformedURL                   = 97
      , URL_UnsupportedProto               = 98
      , URL_UnsupportedProto1              = 99
      , URL_OnlyLocalHost                  = 100
      , URL_NoProtocolPresent              = 101
      , URL_ExpectingTwoSlashes            = 102
      , URL_IncorrectEscapedCharRef        = 103
      , URL_UnterminatedHostComponent      = 104
      , URL_RelativeBaseURL                = 105
      , URL_BaseUnderflow                  = 106
      , URL_BadPortField                   = 107
      , Vector_BadIndex                    = 108
      , Val_InvalidElemId                  = 109
      , Val_CantHaveIntSS                  = 110
      , XMLRec_UnknownEncoding             = 111
      , Parser_Parse1                      = 112
      , Parser_Parse2                      = 113
      , Parser_Next1                       = 114
      , Parser_Next2                       = 115
      , Parser_Next3                       = 116
      , Parser_Next4                       = 117
      , Parser_Factor1                     = 118
      , Parser_Factor2                     = 119
      , Parser_Factor3                     = 120
      , Parser_Factor4                     = 121
      , Parser_Factor5                     = 122
      , Parser_Factor6                     = 123
      , Parser_Atom1                       = 124
      , Parser_Atom2                       = 125
      , Parser_Atom3                       = 126
      , Parser_Atom4                       = 127
      , Parser_Atom5                       = 128
      , Parser_CC1                         = 129
      , Parser_CC2                         = 130
      , Parser_CC3                         = 131
      , Parser_CC4                         = 132
      , Parser_CC5                         = 133
      , Parser_CC6                         = 134
      , Parser_CC7                         = 135
      , Parser_Ope1                        = 136
      , Parser_Ope2                        = 137
      , Parser_Ope3                        = 138
      , Parser_Descape1                    = 139
      , Parser_Descape2                    = 140
      , Parser_Descape3                    = 141
      , Parser_Descape4                    = 142
      , Parser_Descape5                    = 143
      , Parser_Process1                    = 144
      , Parser_Process2                    = 145
      , Gen_NoSchemaValidator              = 146
      , XUTIL_UnCopyableNodeType           = 147
      , SubGrpComparator_NGR               = 148
      , FACET_Invalid_Len                  = 149
      , FACET_Invalid_maxLen               = 150
      , FACET_Invalid_minLen               = 151
      , FACET_NonNeg_Len                   = 152
      , FACET_NonNeg_maxLen                = 153
      , FACET_NonNeg_minLen                = 154
      , FACET_Len_maxLen                   = 155
      , FACET_Len_minLen                   = 156
      , FACET_maxLen_minLen                = 157
      , FACET_bool_Pattern                 = 158
      , FACET_Invalid_Tag                  = 159
      , FACET_Len_baseLen                  = 160
      , FACET_minLen_baseminLen            = 161
      , FACET_minLen_basemaxLen            = 162
      , FACET_maxLen_basemaxLen            = 163
      , FACET_maxLen_baseminLen            = 164
      , FACET_Len_baseMinLen               = 165
      , FACET_Len_baseMaxLen               = 166
      , FACET_minLen_baseLen               = 167
      , FACET_maxLen_baseLen               = 168
      , FACET_enum_base                    = 169
      , FACET_Invalid_WS                   = 170
      , FACET_WS_collapse                  = 171
      , FACET_WS_replace                   = 172
      , FACET_Invalid_MaxIncl              = 173
      , FACET_Invalid_MaxExcl              = 174
      , FACET_Invalid_MinIncl              = 175
      , FACET_Invalid_MinExcl              = 176
      , FACET_Invalid_TotalDigit           = 177
      , FACET_Invalid_FractDigit           = 178
      , FACET_NonNeg_TotalDigit            = 179
      , FACET_NonNeg_FractDigit            = 180
      , FACET_max_Incl_Excl                = 181
      , FACET_min_Incl_Excl                = 182
      , FACET_maxExcl_minExcl              = 183
      , FACET_maxExcl_minIncl              = 184
      , FACET_maxIncl_minExcl              = 185
      , FACET_maxIncl_minIncl              = 186
      , FACET_TotDigit_FractDigit          = 187
      , FACET_maxIncl_base_maxExcl         = 188
      , FACET_maxIncl_base_maxIncl         = 189
      , FACET_maxIncl_base_minIncl         = 190
      , FACET_maxIncl_base_minExcl         = 191
      , FACET_maxExcl_base_maxExcl         = 192
      , FACET_maxExcl_base_maxIncl         = 193
      , FACET_maxExcl_base_minIncl         = 194
      , FACET_maxExcl_base_minExcl         = 195
      , FACET_minExcl_base_maxExcl         = 196
      , FACET_minExcl_base_maxIncl         = 197
      , FACET_minExcl_base_minIncl         = 198
      , FACET_minExcl_base_minExcl         = 199
      , FACET_minIncl_base_maxExcl         = 200
      , FACET_minIncl_base_maxIncl         = 201
      , FACET_minIncl_base_minIncl         = 202
      , FACET_minIncl_base_minExcl         = 203
      , FACET_maxIncl_notFromBase          = 204
      , FACET_maxExcl_notFromBase          = 205
      , FACET_minIncl_notFromBase          = 206
      , FACET_minExcl_notFromBase          = 207
      , FACET_totalDigit_base_totalDigit   = 208
      , FACET_fractDigit_base_totalDigit   = 209
      , FACET_fractDigit_base_fractDigit   = 210
      , FACET_maxIncl_base_fixed           = 211
      , FACET_maxExcl_base_fixed           = 212
      , FACET_minIncl_base_fixed           = 213
      , FACET_minExcl_base_fixed           = 214
      , FACET_totalDigit_base_fixed        = 215
      , FACET_fractDigit_base_fixed        = 216
      , FACET_maxLen_base_fixed            = 217
      , FACET_minLen_base_fixed            = 218
      , FACET_len_base_fixed               = 219
      , FACET_whitespace_base_fixed        = 220
      , FACET_internalError_fixed          = 221
      , FACET_List_Null_baseValidator      = 222
      , FACET_Union_Null_memberTypeValidators   = 223
      , FACET_Union_Null_baseValidator     = 224
      , FACET_Union_invalid_baseValidatorType   = 225
      , VALUE_NotMatch_Pattern             = 226
      , VALUE_Not_Base64                   = 227
      , VALUE_Not_HexBin                   = 228
      , VALUE_GT_maxLen                    = 229
      , VALUE_LT_minLen                    = 230
      , VALUE_NE_Len                       = 231
      , VALUE_NotIn_Enumeration            = 232
      , VALUE_exceed_totalDigit            = 233
      , VALUE_exceed_fractDigit            = 234
      , VALUE_exceed_maxIncl               = 235
      , VALUE_exceed_maxExcl               = 236
      , VALUE_exceed_minIncl               = 237
      , VALUE_exceed_minExcl               = 238
      , VALUE_WS_replaced                  = 239
      , VALUE_WS_collapsed                 = 240
      , VALUE_Invalid_NCName               = 241
      , VALUE_Invalid_Name                 = 242
      , VALUE_ID_Not_Unique                = 243
      , VALUE_ENTITY_Invalid               = 244
      , VALUE_QName_Invalid                = 245
      , VALUE_NOTATION_Invalid             = 246
      , VALUE_no_match_memberType          = 247
      , VALUE_URI_Malformed                = 248
      , XMLNUM_emptyString                 = 249
      , XMLNUM_WSString                    = 250
      , XMLNUM_2ManyDecPoint               = 251
      , XMLNUM_Inv_chars                   = 252
      , XMLNUM_null_ptr                    = 253
      , XMLNUM_URI_Component_Empty         = 254
      , XMLNUM_URI_Component_for_GenURI_Only   = 255
      , XMLNUM_URI_Component_Invalid_EscapeSequence   = 256
      , XMLNUM_URI_Component_Invalid_Char   = 257
      , XMLNUM_URI_Component_Set_Null      = 258
      , XMLNUM_URI_Component_Not_Conformant   = 259
      , XMLNUM_URI_No_Scheme               = 260
      , XMLNUM_URI_NullHost                = 261
      , XMLNUM_URI_NullPath                = 262
      , XMLNUM_URI_Component_inPath        = 263
      , XMLNUM_URI_PortNo_Invalid          = 264
      , XMLNUM_DBL_FLT_maxNeg              = 265
      , XMLNUM_DBL_FLT_maxPos              = 266
      , XMLNUM_DBL_FLT_minNegPos           = 267
      , XMLNUM_DBL_FLT_InvalidType         = 268
      , XMLNUM_DBL_FLT_No_Exponent         = 269
      , Regex_Result_Not_Set               = 270
      , Regex_CompactRangesError           = 271
      , Regex_MergeRangesTypeMismatch      = 272
      , Regex_SubtractRangesError          = 273
      , Regex_IntersectRangesError         = 274
      , Regex_ComplementRangesInvalidArg   = 275
      , Regex_InvalidCategoryName          = 276
      , Regex_KeywordNotFound              = 277
      , Regex_BadRefNo                     = 278
      , Regex_UnknownOption                = 279
      , Regex_UnknownTokenType             = 280
      , Regex_RangeTokenGetError           = 281
      , Regex_NotSupported                 = 282
      , Regex_InvalidChildIndex            = 283
      , Regex_InvalidQuantifier            = 284
      , Regex_RepPatMatchesZeroString      = 285
      , Regex_InvalidRepPattern            = 286
      , NEL_RepeatedCalls                  = 287
      , RethrowError                       = 288
      , Out_Of_Memory                      = 289
      , DV_InvalidOperation                = 290
      , XPath_NoAttrSelector               = 291
      , XPath_NoUnionAtStart               = 292
      , XPath_NoMultipleUnion              = 293
      , XPath_MissingAttr                  = 294
      , XPath_ExpectedToken1               = 295
      , XPath_PrefixNoURI                  = 296
      , XPath_NoDoubleColon                = 297
      , XPath_ExpectedStep1                = 298
      , XPath_ExpectedStep2                = 299
      , XPath_ExpectedStep3                = 300
      , XPath_NoForwardSlash               = 301
      , XPath_NoDoubleForwardSlash         = 302
      , XPath_NoForwardSlashAtStart        = 303
      , XPath_NoSelectionOfRoot            = 304
      , XPath_EmptyExpr                    = 305
      , XPath_NoUnionAtEnd                 = 306
      , XPath_InvalidChar                  = 307
      , XPath_TokenNotSupported            = 308
      , XPath_FindSolution                 = 309
      , DateTime_Assert_Buffer_Fail        = 310
      , DateTime_dt_missingT               = 311
      , DateTime_gDay_invalid              = 312
      , DateTime_gMth_invalid              = 313
      , DateTime_gMthDay_invalid           = 314
      , DateTime_dur_Start_dashP           = 315
      , DateTime_dur_noP                   = 316
      , DateTime_dur_DashNotFirst          = 317
      , DateTime_dur_inv_b4T               = 318
      , DateTime_dur_NoTimeAfterT          = 319
      , DateTime_dur_NoElementAtAll        = 320
      , DateTime_dur_inv_seconds           = 321
      , DateTime_date_incomplete           = 322
      , DateTime_date_invalid              = 323
      , DateTime_time_incomplete           = 324
      , DateTime_time_invalid              = 325
      , DateTime_ms_noDigit                = 326
      , DateTime_ym_incomplete             = 327
      , DateTime_ym_invalid                = 328
      , DateTime_year_tooShort             = 329
      , DateTime_year_leadingZero          = 330
      , DateTime_ym_noMonth                = 331
      , DateTime_tz_noUTCsign              = 332
      , DateTime_tz_stuffAfterZ            = 333
      , DateTime_tz_invalid                = 334
      , DateTime_year_zero                 = 335
      , DateTime_mth_invalid               = 336
      , DateTime_day_invalid               = 337
      , DateTime_hour_invalid              = 338
      , DateTime_min_invalid               = 339
      , DateTime_second_invalid            = 340
      , DateTime_tz_hh_invalid             = 341
      , PD_EmptyBase                       = 342
      , PD_NSCompat1                       = 343
      , PD_OccurRangeE                     = 344
      , PD_NameTypeOK1                     = 345
      , PD_NameTypeOK2                     = 346
      , PD_NameTypeOK3                     = 347
      , PD_NameTypeOK4                     = 348
      , PD_NameTypeOK5                     = 349
      , PD_NameTypeOK6                     = 350
      , PD_NameTypeOK7                     = 351
      , PD_RecurseAsIfGroup                = 352
      , PD_Recurse1                        = 353
      , PD_Recurse2                        = 354
      , PD_ForbiddenRes1                   = 355
      , PD_ForbiddenRes2                   = 356
      , PD_ForbiddenRes3                   = 357
      , PD_ForbiddenRes4                   = 358
      , PD_NSSubset1                       = 359
      , PD_NSSubset2                       = 360
      , PD_NSRecurseCheckCardinality1      = 361
      , PD_RecurseUnordered                = 362
      , PD_MapAndSum                       = 363
      , PD_InvalidContentType              = 364
      , NodeIDMap_GrowErr                  = 365
      , F_HighBounds                       = 366
      , E_LowBounds                        = 367
      , E_HighBounds                       = 368
    };

};

XERCES_CPP_NAMESPACE_END

#endif


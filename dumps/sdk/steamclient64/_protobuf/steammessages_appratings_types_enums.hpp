// Auto-generated protobuf enums — DO NOT EDIT
// Proto file: steammessages_appratings_types.proto
// Module: steamclient64.dll
#pragma once
#ifndef SDK_PROTO_STEAMMESSAGES_APPRATINGS_TYPES_ENUMS_HPP
#define SDK_PROTO_STEAMMESSAGES_APPRATINGS_TYPES_ENUMS_HPP

namespace sdk::proto {

enum class ERatingAgency : int {
    k_ERatingAgency_Invalid = 0,
    k_ERatingAgency_ESRB = 1,
    k_ERatingAgency_PEGI = 2,
    k_ERatingAgency_BBFC = 3,
    k_ERatingAgency_USK = 4,
    k_ERatingAgency_OFLC_AU = 5,
    k_ERatingAgency_OFLC_NZ = 6,
    k_ERatingAgency_CERO = 7,
    k_ERatingAgency_GRAC = 8,
    k_ERatingAgency_GMEDIA = 9,
    k_ERatingAgency_DEJUS = 10,
    k_ERatingAgency_IMDA = 11,
    k_ERatingAgency_FPB = 12,
    k_ERatingAgency_TESRI = 13,
    k_ERatingAgency_RARS = 14,
    k_ERatingAgency_AGCOM = 15,
    k_ERatingAgency_IGRS = 16,
    k_ERatingAgency_Steam_Germany = 17,
    k_ERatingAgency_Steam_Australia = 18,
    k_ERatingAgency_CADPA = 19,
};

enum class EAppRatingSource : int {
    k_EAppRatingSource_Invalid = 0,
    k_EAppRatingSource_Official = 1,
    k_EAppRatingSource_Generated = 2,
};

enum class ERatingDescriptorImage : int {
    k_ERatingDescriptorImage_Invalid = 0,
    k_ERatingDescriptorImage_CERO_Love = 1,
    k_ERatingDescriptorImage_CERO_SexualContent = 2,
    k_ERatingDescriptorImage_CERO_Violence = 3,
    k_ERatingDescriptorImage_CERO_Horror = 4,
    k_ERatingDescriptorImage_CERO_DrinkingSmoking = 5,
    k_ERatingDescriptorImage_CERO_Gambling = 6,
    k_ERatingDescriptorImage_CERO_Crime = 7,
    k_ERatingDescriptorImage_CERO_Drugs = 8,
    k_ERatingDescriptorImage_CERO_Language = 9,
};

} // namespace sdk::proto

#endif // SDK_PROTO_STEAMMESSAGES_APPRATINGS_TYPES_ENUMS_HPP


// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CUserMessage_DllStatus
// Module: server.dll
// Proto file: usermessages.proto
#pragma once
#ifndef SDK_PROTO_CUSERMESSAGE_DLLSTATUS_HPP
#define SDK_PROTO_CUSERMESSAGE_DLLSTATUS_HPP

namespace sdk::proto {

struct CUserMessage_DllStatus_CModule;
struct CUserMessage_DllStatus_CVDiagnostic;

namespace CUserMessage_DllStatus_fields {

    namespace CVDiagnostic {
        constexpr int id = 1;
        constexpr int extended = 2;
        constexpr int value = 3;
        constexpr int string_value = 4;
    } // namespace CVDiagnostic

    namespace CModule {
        constexpr int base_addr = 1;
        constexpr int name = 2;
        constexpr int size = 3;
        constexpr int timestamp = 4;
    } // namespace CModule

    constexpr int file_report = 1;
    constexpr int command_line = 2;
    constexpr int total_files = 3;
    constexpr int process_id = 4;
    constexpr int osversion = 5;
    constexpr int client_time = 6;
    constexpr int diagnostics = 7;
    constexpr int modules = 8;

} // namespace CUserMessage_DllStatus_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CUSERMESSAGE_DLLSTATUS_HPP


// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_USEREVENTS_USEREVENTS_H_
#define FLATBUFFERS_GENERATED_USEREVENTS_USEREVENTS_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 25 &&
              FLATBUFFERS_VERSION_MINOR == 2 &&
              FLATBUFFERS_VERSION_REVISION == 10,
             "Non-compatible flatbuffers version included");

namespace UserEvents {

struct Color;

struct C2S_Login;
struct C2S_LoginBuilder;

struct S2C_Login;
struct S2C_LoginBuilder;

struct S2C_SpawnPlayer;
struct S2C_SpawnPlayerBuilder;

struct S2C_DestroyPlayer;
struct S2C_DestroyPlayerBuilder;

struct C2S_PlayerMoveData;
struct C2S_PlayerMoveDataBuilder;

struct S2C_PlayerMoveData;
struct S2C_PlayerMoveDataBuilder;

struct C2S_Logout;
struct C2S_LogoutBuilder;

struct S2C_Logout;
struct S2C_LogoutBuilder;

struct C2S_PlayerChat;
struct C2S_PlayerChatBuilder;

struct S2C_PlayerChat;
struct S2C_PlayerChatBuilder;

struct EventData;
struct EventDataBuilder;

enum ChatType : int8_t {
  ChatType_All = 0,
  ChatType_Team = 1,
  ChatType_Private = 2,
  ChatType_System = 3,
  ChatType_MIN = ChatType_All,
  ChatType_MAX = ChatType_System
};

inline const ChatType (&EnumValuesChatType())[4] {
  static const ChatType values[] = {
    ChatType_All,
    ChatType_Team,
    ChatType_Private,
    ChatType_System
  };
  return values;
}

inline const char * const *EnumNamesChatType() {
  static const char * const names[5] = {
    "All",
    "Team",
    "Private",
    "System",
    nullptr
  };
  return names;
}

inline const char *EnumNameChatType(ChatType e) {
  if (::flatbuffers::IsOutRange(e, ChatType_All, ChatType_System)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesChatType()[index];
}

enum EventType : uint8_t {
  EventType_NONE = 0,
  EventType_C2S_Login = 1,
  EventType_S2C_Login = 2,
  EventType_S2C_SpawnPlayer = 3,
  EventType_S2C_DestroyPlayer = 4,
  EventType_C2S_PlayerMoveData = 5,
  EventType_S2C_PlayerMoveData = 6,
  EventType_C2S_Logout = 7,
  EventType_S2C_Logout = 8,
  EventType_C2S_PlayerChat = 9,
  EventType_S2C_PlayerChat = 10,
  EventType_MIN = EventType_NONE,
  EventType_MAX = EventType_S2C_PlayerChat
};

inline const EventType (&EnumValuesEventType())[11] {
  static const EventType values[] = {
    EventType_NONE,
    EventType_C2S_Login,
    EventType_S2C_Login,
    EventType_S2C_SpawnPlayer,
    EventType_S2C_DestroyPlayer,
    EventType_C2S_PlayerMoveData,
    EventType_S2C_PlayerMoveData,
    EventType_C2S_Logout,
    EventType_S2C_Logout,
    EventType_C2S_PlayerChat,
    EventType_S2C_PlayerChat
  };
  return values;
}

inline const char * const *EnumNamesEventType() {
  static const char * const names[12] = {
    "NONE",
    "C2S_Login",
    "S2C_Login",
    "S2C_SpawnPlayer",
    "S2C_DestroyPlayer",
    "C2S_PlayerMoveData",
    "S2C_PlayerMoveData",
    "C2S_Logout",
    "S2C_Logout",
    "C2S_PlayerChat",
    "S2C_PlayerChat",
    nullptr
  };
  return names;
}

inline const char *EnumNameEventType(EventType e) {
  if (::flatbuffers::IsOutRange(e, EventType_NONE, EventType_S2C_PlayerChat)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesEventType()[index];
}

template<typename T> struct EventTypeTraits {
  static const EventType enum_value = EventType_NONE;
};

template<> struct EventTypeTraits<UserEvents::C2S_Login> {
  static const EventType enum_value = EventType_C2S_Login;
};

template<> struct EventTypeTraits<UserEvents::S2C_Login> {
  static const EventType enum_value = EventType_S2C_Login;
};

template<> struct EventTypeTraits<UserEvents::S2C_SpawnPlayer> {
  static const EventType enum_value = EventType_S2C_SpawnPlayer;
};

template<> struct EventTypeTraits<UserEvents::S2C_DestroyPlayer> {
  static const EventType enum_value = EventType_S2C_DestroyPlayer;
};

template<> struct EventTypeTraits<UserEvents::C2S_PlayerMoveData> {
  static const EventType enum_value = EventType_C2S_PlayerMoveData;
};

template<> struct EventTypeTraits<UserEvents::S2C_PlayerMoveData> {
  static const EventType enum_value = EventType_S2C_PlayerMoveData;
};

template<> struct EventTypeTraits<UserEvents::C2S_Logout> {
  static const EventType enum_value = EventType_C2S_Logout;
};

template<> struct EventTypeTraits<UserEvents::S2C_Logout> {
  static const EventType enum_value = EventType_S2C_Logout;
};

template<> struct EventTypeTraits<UserEvents::C2S_PlayerChat> {
  static const EventType enum_value = EventType_C2S_PlayerChat;
};

template<> struct EventTypeTraits<UserEvents::S2C_PlayerChat> {
  static const EventType enum_value = EventType_S2C_PlayerChat;
};

bool VerifyEventType(::flatbuffers::Verifier &verifier, const void *obj, EventType type);
bool VerifyEventTypeVector(::flatbuffers::Verifier &verifier, const ::flatbuffers::Vector<::flatbuffers::Offset<void>> *values, const ::flatbuffers::Vector<uint8_t> *types);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(1) Color FLATBUFFERS_FINAL_CLASS {
 private:
  uint8_t r_;
  uint8_t g_;
  uint8_t b_;

 public:
  Color()
      : r_(0),
        g_(0),
        b_(0) {
  }
  Color(uint8_t _r, uint8_t _g, uint8_t _b)
      : r_(::flatbuffers::EndianScalar(_r)),
        g_(::flatbuffers::EndianScalar(_g)),
        b_(::flatbuffers::EndianScalar(_b)) {
  }
  uint8_t r() const {
    return ::flatbuffers::EndianScalar(r_);
  }
  uint8_t g() const {
    return ::flatbuffers::EndianScalar(g_);
  }
  uint8_t b() const {
    return ::flatbuffers::EndianScalar(b_);
  }
};
FLATBUFFERS_STRUCT_END(Color, 3);

struct C2S_Login FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef C2S_LoginBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_USERID = 4,
    VT_PASSWORD = 6
  };
  const ::flatbuffers::String *userid() const {
    return GetPointer<const ::flatbuffers::String *>(VT_USERID);
  }
  const ::flatbuffers::String *password() const {
    return GetPointer<const ::flatbuffers::String *>(VT_PASSWORD);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_USERID) &&
           verifier.VerifyString(userid()) &&
           VerifyOffset(verifier, VT_PASSWORD) &&
           verifier.VerifyString(password()) &&
           verifier.EndTable();
  }
};

struct C2S_LoginBuilder {
  typedef C2S_Login Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_userid(::flatbuffers::Offset<::flatbuffers::String> userid) {
    fbb_.AddOffset(C2S_Login::VT_USERID, userid);
  }
  void add_password(::flatbuffers::Offset<::flatbuffers::String> password) {
    fbb_.AddOffset(C2S_Login::VT_PASSWORD, password);
  }
  explicit C2S_LoginBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<C2S_Login> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<C2S_Login>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<C2S_Login> CreateC2S_Login(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::String> userid = 0,
    ::flatbuffers::Offset<::flatbuffers::String> password = 0) {
  C2S_LoginBuilder builder_(_fbb);
  builder_.add_password(password);
  builder_.add_userid(userid);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<C2S_Login> CreateC2S_LoginDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const char *userid = nullptr,
    const char *password = nullptr) {
  auto userid__ = userid ? _fbb.CreateString(userid) : 0;
  auto password__ = password ? _fbb.CreateString(password) : 0;
  return UserEvents::CreateC2S_Login(
      _fbb,
      userid__,
      password__);
}

struct S2C_Login FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef S2C_LoginBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_PLAYER_ID = 4,
    VT_SUCCESS = 6,
    VT_MESSAGE = 8,
    VT_X = 10,
    VT_Y = 12,
    VT_COLOR = 14
  };
  uint32_t player_id() const {
    return GetField<uint32_t>(VT_PLAYER_ID, 0);
  }
  bool success() const {
    return GetField<uint8_t>(VT_SUCCESS, 0) != 0;
  }
  const ::flatbuffers::String *message() const {
    return GetPointer<const ::flatbuffers::String *>(VT_MESSAGE);
  }
  uint16_t x() const {
    return GetField<uint16_t>(VT_X, 0);
  }
  uint16_t y() const {
    return GetField<uint16_t>(VT_Y, 0);
  }
  const UserEvents::Color *color() const {
    return GetStruct<const UserEvents::Color *>(VT_COLOR);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_PLAYER_ID, 4) &&
           VerifyField<uint8_t>(verifier, VT_SUCCESS, 1) &&
           VerifyOffset(verifier, VT_MESSAGE) &&
           verifier.VerifyString(message()) &&
           VerifyField<uint16_t>(verifier, VT_X, 2) &&
           VerifyField<uint16_t>(verifier, VT_Y, 2) &&
           VerifyField<UserEvents::Color>(verifier, VT_COLOR, 1) &&
           verifier.EndTable();
  }
};

struct S2C_LoginBuilder {
  typedef S2C_Login Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_player_id(uint32_t player_id) {
    fbb_.AddElement<uint32_t>(S2C_Login::VT_PLAYER_ID, player_id, 0);
  }
  void add_success(bool success) {
    fbb_.AddElement<uint8_t>(S2C_Login::VT_SUCCESS, static_cast<uint8_t>(success), 0);
  }
  void add_message(::flatbuffers::Offset<::flatbuffers::String> message) {
    fbb_.AddOffset(S2C_Login::VT_MESSAGE, message);
  }
  void add_x(uint16_t x) {
    fbb_.AddElement<uint16_t>(S2C_Login::VT_X, x, 0);
  }
  void add_y(uint16_t y) {
    fbb_.AddElement<uint16_t>(S2C_Login::VT_Y, y, 0);
  }
  void add_color(const UserEvents::Color *color) {
    fbb_.AddStruct(S2C_Login::VT_COLOR, color);
  }
  explicit S2C_LoginBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<S2C_Login> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<S2C_Login>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<S2C_Login> CreateS2C_Login(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t player_id = 0,
    bool success = false,
    ::flatbuffers::Offset<::flatbuffers::String> message = 0,
    uint16_t x = 0,
    uint16_t y = 0,
    const UserEvents::Color *color = nullptr) {
  S2C_LoginBuilder builder_(_fbb);
  builder_.add_color(color);
  builder_.add_message(message);
  builder_.add_player_id(player_id);
  builder_.add_y(y);
  builder_.add_x(x);
  builder_.add_success(success);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<S2C_Login> CreateS2C_LoginDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t player_id = 0,
    bool success = false,
    const char *message = nullptr,
    uint16_t x = 0,
    uint16_t y = 0,
    const UserEvents::Color *color = nullptr) {
  auto message__ = message ? _fbb.CreateString(message) : 0;
  return UserEvents::CreateS2C_Login(
      _fbb,
      player_id,
      success,
      message__,
      x,
      y,
      color);
}

struct S2C_SpawnPlayer FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef S2C_SpawnPlayerBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_PLAYER_ID = 4,
    VT_SUCCESS = 6,
    VT_MESSAGE = 8,
    VT_X = 10,
    VT_Y = 12,
    VT_COLOR = 14
  };
  uint32_t player_id() const {
    return GetField<uint32_t>(VT_PLAYER_ID, 0);
  }
  bool success() const {
    return GetField<uint8_t>(VT_SUCCESS, 0) != 0;
  }
  const ::flatbuffers::String *message() const {
    return GetPointer<const ::flatbuffers::String *>(VT_MESSAGE);
  }
  uint16_t x() const {
    return GetField<uint16_t>(VT_X, 0);
  }
  uint16_t y() const {
    return GetField<uint16_t>(VT_Y, 0);
  }
  const UserEvents::Color *color() const {
    return GetStruct<const UserEvents::Color *>(VT_COLOR);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_PLAYER_ID, 4) &&
           VerifyField<uint8_t>(verifier, VT_SUCCESS, 1) &&
           VerifyOffset(verifier, VT_MESSAGE) &&
           verifier.VerifyString(message()) &&
           VerifyField<uint16_t>(verifier, VT_X, 2) &&
           VerifyField<uint16_t>(verifier, VT_Y, 2) &&
           VerifyField<UserEvents::Color>(verifier, VT_COLOR, 1) &&
           verifier.EndTable();
  }
};

struct S2C_SpawnPlayerBuilder {
  typedef S2C_SpawnPlayer Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_player_id(uint32_t player_id) {
    fbb_.AddElement<uint32_t>(S2C_SpawnPlayer::VT_PLAYER_ID, player_id, 0);
  }
  void add_success(bool success) {
    fbb_.AddElement<uint8_t>(S2C_SpawnPlayer::VT_SUCCESS, static_cast<uint8_t>(success), 0);
  }
  void add_message(::flatbuffers::Offset<::flatbuffers::String> message) {
    fbb_.AddOffset(S2C_SpawnPlayer::VT_MESSAGE, message);
  }
  void add_x(uint16_t x) {
    fbb_.AddElement<uint16_t>(S2C_SpawnPlayer::VT_X, x, 0);
  }
  void add_y(uint16_t y) {
    fbb_.AddElement<uint16_t>(S2C_SpawnPlayer::VT_Y, y, 0);
  }
  void add_color(const UserEvents::Color *color) {
    fbb_.AddStruct(S2C_SpawnPlayer::VT_COLOR, color);
  }
  explicit S2C_SpawnPlayerBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<S2C_SpawnPlayer> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<S2C_SpawnPlayer>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<S2C_SpawnPlayer> CreateS2C_SpawnPlayer(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t player_id = 0,
    bool success = false,
    ::flatbuffers::Offset<::flatbuffers::String> message = 0,
    uint16_t x = 0,
    uint16_t y = 0,
    const UserEvents::Color *color = nullptr) {
  S2C_SpawnPlayerBuilder builder_(_fbb);
  builder_.add_color(color);
  builder_.add_message(message);
  builder_.add_player_id(player_id);
  builder_.add_y(y);
  builder_.add_x(x);
  builder_.add_success(success);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<S2C_SpawnPlayer> CreateS2C_SpawnPlayerDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t player_id = 0,
    bool success = false,
    const char *message = nullptr,
    uint16_t x = 0,
    uint16_t y = 0,
    const UserEvents::Color *color = nullptr) {
  auto message__ = message ? _fbb.CreateString(message) : 0;
  return UserEvents::CreateS2C_SpawnPlayer(
      _fbb,
      player_id,
      success,
      message__,
      x,
      y,
      color);
}

struct S2C_DestroyPlayer FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef S2C_DestroyPlayerBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_PLAYER_ID = 4
  };
  uint32_t player_id() const {
    return GetField<uint32_t>(VT_PLAYER_ID, 0);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_PLAYER_ID, 4) &&
           verifier.EndTable();
  }
};

struct S2C_DestroyPlayerBuilder {
  typedef S2C_DestroyPlayer Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_player_id(uint32_t player_id) {
    fbb_.AddElement<uint32_t>(S2C_DestroyPlayer::VT_PLAYER_ID, player_id, 0);
  }
  explicit S2C_DestroyPlayerBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<S2C_DestroyPlayer> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<S2C_DestroyPlayer>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<S2C_DestroyPlayer> CreateS2C_DestroyPlayer(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t player_id = 0) {
  S2C_DestroyPlayerBuilder builder_(_fbb);
  builder_.add_player_id(player_id);
  return builder_.Finish();
}

struct C2S_PlayerMoveData FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef C2S_PlayerMoveDataBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_PLAYER_ID = 4,
    VT_X = 6,
    VT_Y = 8,
    VT_KEY_CODE = 10
  };
  uint32_t player_id() const {
    return GetField<uint32_t>(VT_PLAYER_ID, 0);
  }
  uint16_t x() const {
    return GetField<uint16_t>(VT_X, 0);
  }
  uint16_t y() const {
    return GetField<uint16_t>(VT_Y, 0);
  }
  uint8_t key_code() const {
    return GetField<uint8_t>(VT_KEY_CODE, 0);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_PLAYER_ID, 4) &&
           VerifyField<uint16_t>(verifier, VT_X, 2) &&
           VerifyField<uint16_t>(verifier, VT_Y, 2) &&
           VerifyField<uint8_t>(verifier, VT_KEY_CODE, 1) &&
           verifier.EndTable();
  }
};

struct C2S_PlayerMoveDataBuilder {
  typedef C2S_PlayerMoveData Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_player_id(uint32_t player_id) {
    fbb_.AddElement<uint32_t>(C2S_PlayerMoveData::VT_PLAYER_ID, player_id, 0);
  }
  void add_x(uint16_t x) {
    fbb_.AddElement<uint16_t>(C2S_PlayerMoveData::VT_X, x, 0);
  }
  void add_y(uint16_t y) {
    fbb_.AddElement<uint16_t>(C2S_PlayerMoveData::VT_Y, y, 0);
  }
  void add_key_code(uint8_t key_code) {
    fbb_.AddElement<uint8_t>(C2S_PlayerMoveData::VT_KEY_CODE, key_code, 0);
  }
  explicit C2S_PlayerMoveDataBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<C2S_PlayerMoveData> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<C2S_PlayerMoveData>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<C2S_PlayerMoveData> CreateC2S_PlayerMoveData(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t player_id = 0,
    uint16_t x = 0,
    uint16_t y = 0,
    uint8_t key_code = 0) {
  C2S_PlayerMoveDataBuilder builder_(_fbb);
  builder_.add_player_id(player_id);
  builder_.add_y(y);
  builder_.add_x(x);
  builder_.add_key_code(key_code);
  return builder_.Finish();
}

struct S2C_PlayerMoveData FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef S2C_PlayerMoveDataBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_PLAYER_ID = 4,
    VT_X = 6,
    VT_Y = 8
  };
  uint32_t player_id() const {
    return GetField<uint32_t>(VT_PLAYER_ID, 0);
  }
  uint16_t x() const {
    return GetField<uint16_t>(VT_X, 0);
  }
  uint16_t y() const {
    return GetField<uint16_t>(VT_Y, 0);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_PLAYER_ID, 4) &&
           VerifyField<uint16_t>(verifier, VT_X, 2) &&
           VerifyField<uint16_t>(verifier, VT_Y, 2) &&
           verifier.EndTable();
  }
};

struct S2C_PlayerMoveDataBuilder {
  typedef S2C_PlayerMoveData Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_player_id(uint32_t player_id) {
    fbb_.AddElement<uint32_t>(S2C_PlayerMoveData::VT_PLAYER_ID, player_id, 0);
  }
  void add_x(uint16_t x) {
    fbb_.AddElement<uint16_t>(S2C_PlayerMoveData::VT_X, x, 0);
  }
  void add_y(uint16_t y) {
    fbb_.AddElement<uint16_t>(S2C_PlayerMoveData::VT_Y, y, 0);
  }
  explicit S2C_PlayerMoveDataBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<S2C_PlayerMoveData> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<S2C_PlayerMoveData>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<S2C_PlayerMoveData> CreateS2C_PlayerMoveData(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t player_id = 0,
    uint16_t x = 0,
    uint16_t y = 0) {
  S2C_PlayerMoveDataBuilder builder_(_fbb);
  builder_.add_player_id(player_id);
  builder_.add_y(y);
  builder_.add_x(x);
  return builder_.Finish();
}

struct C2S_Logout FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef C2S_LogoutBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_PLAYER_ID = 4
  };
  uint32_t player_id() const {
    return GetField<uint32_t>(VT_PLAYER_ID, 0);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_PLAYER_ID, 4) &&
           verifier.EndTable();
  }
};

struct C2S_LogoutBuilder {
  typedef C2S_Logout Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_player_id(uint32_t player_id) {
    fbb_.AddElement<uint32_t>(C2S_Logout::VT_PLAYER_ID, player_id, 0);
  }
  explicit C2S_LogoutBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<C2S_Logout> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<C2S_Logout>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<C2S_Logout> CreateC2S_Logout(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t player_id = 0) {
  C2S_LogoutBuilder builder_(_fbb);
  builder_.add_player_id(player_id);
  return builder_.Finish();
}

struct S2C_Logout FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef S2C_LogoutBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_PLAYER_ID = 4,
    VT_SUCCESS = 6,
    VT_MESSAGE = 8
  };
  uint32_t player_id() const {
    return GetField<uint32_t>(VT_PLAYER_ID, 0);
  }
  bool success() const {
    return GetField<uint8_t>(VT_SUCCESS, 0) != 0;
  }
  const ::flatbuffers::String *message() const {
    return GetPointer<const ::flatbuffers::String *>(VT_MESSAGE);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_PLAYER_ID, 4) &&
           VerifyField<uint8_t>(verifier, VT_SUCCESS, 1) &&
           VerifyOffset(verifier, VT_MESSAGE) &&
           verifier.VerifyString(message()) &&
           verifier.EndTable();
  }
};

struct S2C_LogoutBuilder {
  typedef S2C_Logout Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_player_id(uint32_t player_id) {
    fbb_.AddElement<uint32_t>(S2C_Logout::VT_PLAYER_ID, player_id, 0);
  }
  void add_success(bool success) {
    fbb_.AddElement<uint8_t>(S2C_Logout::VT_SUCCESS, static_cast<uint8_t>(success), 0);
  }
  void add_message(::flatbuffers::Offset<::flatbuffers::String> message) {
    fbb_.AddOffset(S2C_Logout::VT_MESSAGE, message);
  }
  explicit S2C_LogoutBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<S2C_Logout> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<S2C_Logout>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<S2C_Logout> CreateS2C_Logout(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t player_id = 0,
    bool success = false,
    ::flatbuffers::Offset<::flatbuffers::String> message = 0) {
  S2C_LogoutBuilder builder_(_fbb);
  builder_.add_message(message);
  builder_.add_player_id(player_id);
  builder_.add_success(success);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<S2C_Logout> CreateS2C_LogoutDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t player_id = 0,
    bool success = false,
    const char *message = nullptr) {
  auto message__ = message ? _fbb.CreateString(message) : 0;
  return UserEvents::CreateS2C_Logout(
      _fbb,
      player_id,
      success,
      message__);
}

struct C2S_PlayerChat FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef C2S_PlayerChatBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_PLAYER_ID = 4,
    VT_USERID = 6,
    VT_MESSAGE = 8,
    VT_CHAT_TYPE = 10
  };
  uint32_t player_id() const {
    return GetField<uint32_t>(VT_PLAYER_ID, 0);
  }
  const ::flatbuffers::String *userid() const {
    return GetPointer<const ::flatbuffers::String *>(VT_USERID);
  }
  const ::flatbuffers::String *message() const {
    return GetPointer<const ::flatbuffers::String *>(VT_MESSAGE);
  }
  UserEvents::ChatType chat_type() const {
    return static_cast<UserEvents::ChatType>(GetField<int8_t>(VT_CHAT_TYPE, 0));
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_PLAYER_ID, 4) &&
           VerifyOffset(verifier, VT_USERID) &&
           verifier.VerifyString(userid()) &&
           VerifyOffset(verifier, VT_MESSAGE) &&
           verifier.VerifyString(message()) &&
           VerifyField<int8_t>(verifier, VT_CHAT_TYPE, 1) &&
           verifier.EndTable();
  }
};

struct C2S_PlayerChatBuilder {
  typedef C2S_PlayerChat Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_player_id(uint32_t player_id) {
    fbb_.AddElement<uint32_t>(C2S_PlayerChat::VT_PLAYER_ID, player_id, 0);
  }
  void add_userid(::flatbuffers::Offset<::flatbuffers::String> userid) {
    fbb_.AddOffset(C2S_PlayerChat::VT_USERID, userid);
  }
  void add_message(::flatbuffers::Offset<::flatbuffers::String> message) {
    fbb_.AddOffset(C2S_PlayerChat::VT_MESSAGE, message);
  }
  void add_chat_type(UserEvents::ChatType chat_type) {
    fbb_.AddElement<int8_t>(C2S_PlayerChat::VT_CHAT_TYPE, static_cast<int8_t>(chat_type), 0);
  }
  explicit C2S_PlayerChatBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<C2S_PlayerChat> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<C2S_PlayerChat>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<C2S_PlayerChat> CreateC2S_PlayerChat(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t player_id = 0,
    ::flatbuffers::Offset<::flatbuffers::String> userid = 0,
    ::flatbuffers::Offset<::flatbuffers::String> message = 0,
    UserEvents::ChatType chat_type = UserEvents::ChatType_All) {
  C2S_PlayerChatBuilder builder_(_fbb);
  builder_.add_message(message);
  builder_.add_userid(userid);
  builder_.add_player_id(player_id);
  builder_.add_chat_type(chat_type);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<C2S_PlayerChat> CreateC2S_PlayerChatDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t player_id = 0,
    const char *userid = nullptr,
    const char *message = nullptr,
    UserEvents::ChatType chat_type = UserEvents::ChatType_All) {
  auto userid__ = userid ? _fbb.CreateString(userid) : 0;
  auto message__ = message ? _fbb.CreateString(message) : 0;
  return UserEvents::CreateC2S_PlayerChat(
      _fbb,
      player_id,
      userid__,
      message__,
      chat_type);
}

struct S2C_PlayerChat FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef S2C_PlayerChatBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_PLAYER_ID = 4,
    VT_USERID = 6,
    VT_MESSAGE = 8,
    VT_CHAT_TYPE = 10
  };
  uint32_t player_id() const {
    return GetField<uint32_t>(VT_PLAYER_ID, 0);
  }
  const ::flatbuffers::String *userid() const {
    return GetPointer<const ::flatbuffers::String *>(VT_USERID);
  }
  const ::flatbuffers::String *message() const {
    return GetPointer<const ::flatbuffers::String *>(VT_MESSAGE);
  }
  UserEvents::ChatType chat_type() const {
    return static_cast<UserEvents::ChatType>(GetField<int8_t>(VT_CHAT_TYPE, 0));
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_PLAYER_ID, 4) &&
           VerifyOffset(verifier, VT_USERID) &&
           verifier.VerifyString(userid()) &&
           VerifyOffset(verifier, VT_MESSAGE) &&
           verifier.VerifyString(message()) &&
           VerifyField<int8_t>(verifier, VT_CHAT_TYPE, 1) &&
           verifier.EndTable();
  }
};

struct S2C_PlayerChatBuilder {
  typedef S2C_PlayerChat Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_player_id(uint32_t player_id) {
    fbb_.AddElement<uint32_t>(S2C_PlayerChat::VT_PLAYER_ID, player_id, 0);
  }
  void add_userid(::flatbuffers::Offset<::flatbuffers::String> userid) {
    fbb_.AddOffset(S2C_PlayerChat::VT_USERID, userid);
  }
  void add_message(::flatbuffers::Offset<::flatbuffers::String> message) {
    fbb_.AddOffset(S2C_PlayerChat::VT_MESSAGE, message);
  }
  void add_chat_type(UserEvents::ChatType chat_type) {
    fbb_.AddElement<int8_t>(S2C_PlayerChat::VT_CHAT_TYPE, static_cast<int8_t>(chat_type), 0);
  }
  explicit S2C_PlayerChatBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<S2C_PlayerChat> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<S2C_PlayerChat>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<S2C_PlayerChat> CreateS2C_PlayerChat(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t player_id = 0,
    ::flatbuffers::Offset<::flatbuffers::String> userid = 0,
    ::flatbuffers::Offset<::flatbuffers::String> message = 0,
    UserEvents::ChatType chat_type = UserEvents::ChatType_All) {
  S2C_PlayerChatBuilder builder_(_fbb);
  builder_.add_message(message);
  builder_.add_userid(userid);
  builder_.add_player_id(player_id);
  builder_.add_chat_type(chat_type);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<S2C_PlayerChat> CreateS2C_PlayerChatDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t player_id = 0,
    const char *userid = nullptr,
    const char *message = nullptr,
    UserEvents::ChatType chat_type = UserEvents::ChatType_All) {
  auto userid__ = userid ? _fbb.CreateString(userid) : 0;
  auto message__ = message ? _fbb.CreateString(message) : 0;
  return UserEvents::CreateS2C_PlayerChat(
      _fbb,
      player_id,
      userid__,
      message__,
      chat_type);
}

struct EventData FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef EventDataBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TIMESTAMP = 4,
    VT_DATA_TYPE = 6,
    VT_DATA = 8
  };
  uint64_t timestamp() const {
    return GetField<uint64_t>(VT_TIMESTAMP, 0);
  }
  UserEvents::EventType data_type() const {
    return static_cast<UserEvents::EventType>(GetField<uint8_t>(VT_DATA_TYPE, 0));
  }
  const void *data() const {
    return GetPointer<const void *>(VT_DATA);
  }
  template<typename T> const T *data_as() const;
  const UserEvents::C2S_Login *data_as_C2S_Login() const {
    return data_type() == UserEvents::EventType_C2S_Login ? static_cast<const UserEvents::C2S_Login *>(data()) : nullptr;
  }
  const UserEvents::S2C_Login *data_as_S2C_Login() const {
    return data_type() == UserEvents::EventType_S2C_Login ? static_cast<const UserEvents::S2C_Login *>(data()) : nullptr;
  }
  const UserEvents::S2C_SpawnPlayer *data_as_S2C_SpawnPlayer() const {
    return data_type() == UserEvents::EventType_S2C_SpawnPlayer ? static_cast<const UserEvents::S2C_SpawnPlayer *>(data()) : nullptr;
  }
  const UserEvents::S2C_DestroyPlayer *data_as_S2C_DestroyPlayer() const {
    return data_type() == UserEvents::EventType_S2C_DestroyPlayer ? static_cast<const UserEvents::S2C_DestroyPlayer *>(data()) : nullptr;
  }
  const UserEvents::C2S_PlayerMoveData *data_as_C2S_PlayerMoveData() const {
    return data_type() == UserEvents::EventType_C2S_PlayerMoveData ? static_cast<const UserEvents::C2S_PlayerMoveData *>(data()) : nullptr;
  }
  const UserEvents::S2C_PlayerMoveData *data_as_S2C_PlayerMoveData() const {
    return data_type() == UserEvents::EventType_S2C_PlayerMoveData ? static_cast<const UserEvents::S2C_PlayerMoveData *>(data()) : nullptr;
  }
  const UserEvents::C2S_Logout *data_as_C2S_Logout() const {
    return data_type() == UserEvents::EventType_C2S_Logout ? static_cast<const UserEvents::C2S_Logout *>(data()) : nullptr;
  }
  const UserEvents::S2C_Logout *data_as_S2C_Logout() const {
    return data_type() == UserEvents::EventType_S2C_Logout ? static_cast<const UserEvents::S2C_Logout *>(data()) : nullptr;
  }
  const UserEvents::C2S_PlayerChat *data_as_C2S_PlayerChat() const {
    return data_type() == UserEvents::EventType_C2S_PlayerChat ? static_cast<const UserEvents::C2S_PlayerChat *>(data()) : nullptr;
  }
  const UserEvents::S2C_PlayerChat *data_as_S2C_PlayerChat() const {
    return data_type() == UserEvents::EventType_S2C_PlayerChat ? static_cast<const UserEvents::S2C_PlayerChat *>(data()) : nullptr;
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_TIMESTAMP, 8) &&
           VerifyField<uint8_t>(verifier, VT_DATA_TYPE, 1) &&
           VerifyOffset(verifier, VT_DATA) &&
           VerifyEventType(verifier, data(), data_type()) &&
           verifier.EndTable();
  }
};

template<> inline const UserEvents::C2S_Login *EventData::data_as<UserEvents::C2S_Login>() const {
  return data_as_C2S_Login();
}

template<> inline const UserEvents::S2C_Login *EventData::data_as<UserEvents::S2C_Login>() const {
  return data_as_S2C_Login();
}

template<> inline const UserEvents::S2C_SpawnPlayer *EventData::data_as<UserEvents::S2C_SpawnPlayer>() const {
  return data_as_S2C_SpawnPlayer();
}

template<> inline const UserEvents::S2C_DestroyPlayer *EventData::data_as<UserEvents::S2C_DestroyPlayer>() const {
  return data_as_S2C_DestroyPlayer();
}

template<> inline const UserEvents::C2S_PlayerMoveData *EventData::data_as<UserEvents::C2S_PlayerMoveData>() const {
  return data_as_C2S_PlayerMoveData();
}

template<> inline const UserEvents::S2C_PlayerMoveData *EventData::data_as<UserEvents::S2C_PlayerMoveData>() const {
  return data_as_S2C_PlayerMoveData();
}

template<> inline const UserEvents::C2S_Logout *EventData::data_as<UserEvents::C2S_Logout>() const {
  return data_as_C2S_Logout();
}

template<> inline const UserEvents::S2C_Logout *EventData::data_as<UserEvents::S2C_Logout>() const {
  return data_as_S2C_Logout();
}

template<> inline const UserEvents::C2S_PlayerChat *EventData::data_as<UserEvents::C2S_PlayerChat>() const {
  return data_as_C2S_PlayerChat();
}

template<> inline const UserEvents::S2C_PlayerChat *EventData::data_as<UserEvents::S2C_PlayerChat>() const {
  return data_as_S2C_PlayerChat();
}

struct EventDataBuilder {
  typedef EventData Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_timestamp(uint64_t timestamp) {
    fbb_.AddElement<uint64_t>(EventData::VT_TIMESTAMP, timestamp, 0);
  }
  void add_data_type(UserEvents::EventType data_type) {
    fbb_.AddElement<uint8_t>(EventData::VT_DATA_TYPE, static_cast<uint8_t>(data_type), 0);
  }
  void add_data(::flatbuffers::Offset<void> data) {
    fbb_.AddOffset(EventData::VT_DATA, data);
  }
  explicit EventDataBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<EventData> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<EventData>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<EventData> CreateEventData(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t timestamp = 0,
    UserEvents::EventType data_type = UserEvents::EventType_NONE,
    ::flatbuffers::Offset<void> data = 0) {
  EventDataBuilder builder_(_fbb);
  builder_.add_timestamp(timestamp);
  builder_.add_data(data);
  builder_.add_data_type(data_type);
  return builder_.Finish();
}

inline bool VerifyEventType(::flatbuffers::Verifier &verifier, const void *obj, EventType type) {
  switch (type) {
    case EventType_NONE: {
      return true;
    }
    case EventType_C2S_Login: {
      auto ptr = reinterpret_cast<const UserEvents::C2S_Login *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case EventType_S2C_Login: {
      auto ptr = reinterpret_cast<const UserEvents::S2C_Login *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case EventType_S2C_SpawnPlayer: {
      auto ptr = reinterpret_cast<const UserEvents::S2C_SpawnPlayer *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case EventType_S2C_DestroyPlayer: {
      auto ptr = reinterpret_cast<const UserEvents::S2C_DestroyPlayer *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case EventType_C2S_PlayerMoveData: {
      auto ptr = reinterpret_cast<const UserEvents::C2S_PlayerMoveData *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case EventType_S2C_PlayerMoveData: {
      auto ptr = reinterpret_cast<const UserEvents::S2C_PlayerMoveData *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case EventType_C2S_Logout: {
      auto ptr = reinterpret_cast<const UserEvents::C2S_Logout *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case EventType_S2C_Logout: {
      auto ptr = reinterpret_cast<const UserEvents::S2C_Logout *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case EventType_C2S_PlayerChat: {
      auto ptr = reinterpret_cast<const UserEvents::C2S_PlayerChat *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case EventType_S2C_PlayerChat: {
      auto ptr = reinterpret_cast<const UserEvents::S2C_PlayerChat *>(obj);
      return verifier.VerifyTable(ptr);
    }
    default: return true;
  }
}

inline bool VerifyEventTypeVector(::flatbuffers::Verifier &verifier, const ::flatbuffers::Vector<::flatbuffers::Offset<void>> *values, const ::flatbuffers::Vector<uint8_t> *types) {
  if (!values || !types) return !values && !types;
  if (values->size() != types->size()) return false;
  for (::flatbuffers::uoffset_t i = 0; i < values->size(); ++i) {
    if (!VerifyEventType(
        verifier,  values->Get(i), types->GetEnum<EventType>(i))) {
      return false;
    }
  }
  return true;
}

inline const UserEvents::EventData *GetEventData(const void *buf) {
  return ::flatbuffers::GetRoot<UserEvents::EventData>(buf);
}

inline const UserEvents::EventData *GetSizePrefixedEventData(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<UserEvents::EventData>(buf);
}

inline bool VerifyEventDataBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<UserEvents::EventData>(nullptr);
}

inline bool VerifySizePrefixedEventDataBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<UserEvents::EventData>(nullptr);
}

inline void FinishEventDataBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<UserEvents::EventData> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedEventDataBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<UserEvents::EventData> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace UserEvents

#endif  // FLATBUFFERS_GENERATED_USEREVENTS_USEREVENTS_H_

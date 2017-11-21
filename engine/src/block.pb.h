// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: engine/src/block.proto

#ifndef PROTOBUF_engine_2fsrc_2fblock_2eproto__INCLUDED
#define PROTOBUF_engine_2fsrc_2fblock_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_engine_2fsrc_2fblock_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsblockImpl();
void InitDefaultsblock();
inline void InitDefaults() {
  InitDefaultsblock();
}
}  // namespace protobuf_engine_2fsrc_2fblock_2eproto
namespace engine {
class block;
class blockDefaultTypeInternal;
extern blockDefaultTypeInternal _block_default_instance_;
}  // namespace engine
namespace engine {

// ===================================================================

class block : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:engine.block) */ {
 public:
  block();
  virtual ~block();

  block(const block& from);

  inline block& operator=(const block& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  block(block&& from) noexcept
    : block() {
    *this = ::std::move(from);
  }

  inline block& operator=(block&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline ::google::protobuf::Arena* GetArena() const PROTOBUF_FINAL {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const PROTOBUF_FINAL {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const block& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const block* internal_default_instance() {
    return reinterpret_cast<const block*>(
               &_block_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(block* other);
  void Swap(block* other);
  friend void swap(block& a, block& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline block* New() const PROTOBUF_FINAL { return New(NULL); }

  block* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const block& from);
  void MergeFrom(const block& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(block* other);
  protected:
  explicit block(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated float values = 1;
  int values_size() const;
  void clear_values();
  static const int kValuesFieldNumber = 1;
  float values(int index) const;
  void set_values(int index, float value);
  void add_values(float value);
  const ::google::protobuf::RepeatedField< float >&
      values() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_values();

  // repeated int32 rows = 2;
  int rows_size() const;
  void clear_rows();
  static const int kRowsFieldNumber = 2;
  ::google::protobuf::int32 rows(int index) const;
  void set_rows(int index, ::google::protobuf::int32 value);
  void add_rows(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      rows() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_rows();

  // repeated int32 columns = 3;
  int columns_size() const;
  void clear_columns();
  static const int kColumnsFieldNumber = 3;
  ::google::protobuf::int32 columns(int index) const;
  void set_columns(int index, ::google::protobuf::int32 value);
  void add_columns(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      columns() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_columns();

  // @@protoc_insertion_point(class_scope:engine.block)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::RepeatedField< float > values_;
  mutable int _values_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > rows_;
  mutable int _rows_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > columns_;
  mutable int _columns_cached_byte_size_;
  mutable int _cached_size_;
  friend struct ::protobuf_engine_2fsrc_2fblock_2eproto::TableStruct;
  friend void ::protobuf_engine_2fsrc_2fblock_2eproto::InitDefaultsblockImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// block

// repeated float values = 1;
inline int block::values_size() const {
  return values_.size();
}
inline void block::clear_values() {
  values_.Clear();
}
inline float block::values(int index) const {
  // @@protoc_insertion_point(field_get:engine.block.values)
  return values_.Get(index);
}
inline void block::set_values(int index, float value) {
  values_.Set(index, value);
  // @@protoc_insertion_point(field_set:engine.block.values)
}
inline void block::add_values(float value) {
  values_.Add(value);
  // @@protoc_insertion_point(field_add:engine.block.values)
}
inline const ::google::protobuf::RepeatedField< float >&
block::values() const {
  // @@protoc_insertion_point(field_list:engine.block.values)
  return values_;
}
inline ::google::protobuf::RepeatedField< float >*
block::mutable_values() {
  // @@protoc_insertion_point(field_mutable_list:engine.block.values)
  return &values_;
}

// repeated int32 rows = 2;
inline int block::rows_size() const {
  return rows_.size();
}
inline void block::clear_rows() {
  rows_.Clear();
}
inline ::google::protobuf::int32 block::rows(int index) const {
  // @@protoc_insertion_point(field_get:engine.block.rows)
  return rows_.Get(index);
}
inline void block::set_rows(int index, ::google::protobuf::int32 value) {
  rows_.Set(index, value);
  // @@protoc_insertion_point(field_set:engine.block.rows)
}
inline void block::add_rows(::google::protobuf::int32 value) {
  rows_.Add(value);
  // @@protoc_insertion_point(field_add:engine.block.rows)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
block::rows() const {
  // @@protoc_insertion_point(field_list:engine.block.rows)
  return rows_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
block::mutable_rows() {
  // @@protoc_insertion_point(field_mutable_list:engine.block.rows)
  return &rows_;
}

// repeated int32 columns = 3;
inline int block::columns_size() const {
  return columns_.size();
}
inline void block::clear_columns() {
  columns_.Clear();
}
inline ::google::protobuf::int32 block::columns(int index) const {
  // @@protoc_insertion_point(field_get:engine.block.columns)
  return columns_.Get(index);
}
inline void block::set_columns(int index, ::google::protobuf::int32 value) {
  columns_.Set(index, value);
  // @@protoc_insertion_point(field_set:engine.block.columns)
}
inline void block::add_columns(::google::protobuf::int32 value) {
  columns_.Add(value);
  // @@protoc_insertion_point(field_add:engine.block.columns)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
block::columns() const {
  // @@protoc_insertion_point(field_list:engine.block.columns)
  return columns_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
block::mutable_columns() {
  // @@protoc_insertion_point(field_mutable_list:engine.block.columns)
  return &columns_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace engine

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_engine_2fsrc_2fblock_2eproto__INCLUDED

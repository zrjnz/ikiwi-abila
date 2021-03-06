// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/grid_2d_options.proto

#ifndef PROTOBUF_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace mapping {
namespace proto {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto();
void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto();
void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto();

class GridOptions2D;

enum GridOptions2D_GridType {
  GridOptions2D_GridType_INVALID_GRID = 0,
  GridOptions2D_GridType_PROBABILITY_GRID = 1,
  GridOptions2D_GridType_TSDF = 2,
  GridOptions2D_GridType_GridOptions2D_GridType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  GridOptions2D_GridType_GridOptions2D_GridType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool GridOptions2D_GridType_IsValid(int value);
const GridOptions2D_GridType GridOptions2D_GridType_GridType_MIN = GridOptions2D_GridType_INVALID_GRID;
const GridOptions2D_GridType GridOptions2D_GridType_GridType_MAX = GridOptions2D_GridType_TSDF;
const int GridOptions2D_GridType_GridType_ARRAYSIZE = GridOptions2D_GridType_GridType_MAX + 1;

const ::google::protobuf::EnumDescriptor* GridOptions2D_GridType_descriptor();
inline const ::std::string& GridOptions2D_GridType_Name(GridOptions2D_GridType value) {
  return ::google::protobuf::internal::NameOfEnum(
    GridOptions2D_GridType_descriptor(), value);
}
inline bool GridOptions2D_GridType_Parse(
    const ::std::string& name, GridOptions2D_GridType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GridOptions2D_GridType>(
    GridOptions2D_GridType_descriptor(), name, value);
}
// ===================================================================

class GridOptions2D : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.GridOptions2D) */ {
 public:
  GridOptions2D();
  virtual ~GridOptions2D();

  GridOptions2D(const GridOptions2D& from);

  inline GridOptions2D& operator=(const GridOptions2D& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const GridOptions2D& default_instance();

  void Swap(GridOptions2D* other);

  // implements Message ----------------------------------------------

  inline GridOptions2D* New() const { return New(NULL); }

  GridOptions2D* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GridOptions2D& from);
  void MergeFrom(const GridOptions2D& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(GridOptions2D* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef GridOptions2D_GridType GridType;
  static const GridType INVALID_GRID =
    GridOptions2D_GridType_INVALID_GRID;
  static const GridType PROBABILITY_GRID =
    GridOptions2D_GridType_PROBABILITY_GRID;
  static const GridType TSDF =
    GridOptions2D_GridType_TSDF;
  static inline bool GridType_IsValid(int value) {
    return GridOptions2D_GridType_IsValid(value);
  }
  static const GridType GridType_MIN =
    GridOptions2D_GridType_GridType_MIN;
  static const GridType GridType_MAX =
    GridOptions2D_GridType_GridType_MAX;
  static const int GridType_ARRAYSIZE =
    GridOptions2D_GridType_GridType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  GridType_descriptor() {
    return GridOptions2D_GridType_descriptor();
  }
  static inline const ::std::string& GridType_Name(GridType value) {
    return GridOptions2D_GridType_Name(value);
  }
  static inline bool GridType_Parse(const ::std::string& name,
      GridType* value) {
    return GridOptions2D_GridType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .cartographer.mapping.proto.GridOptions2D.GridType grid_type = 1;
  void clear_grid_type();
  static const int kGridTypeFieldNumber = 1;
  ::cartographer::mapping::proto::GridOptions2D_GridType grid_type() const;
  void set_grid_type(::cartographer::mapping::proto::GridOptions2D_GridType value);

  // optional float resolution = 2;
  void clear_resolution();
  static const int kResolutionFieldNumber = 2;
  float resolution() const;
  void set_resolution(float value);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.GridOptions2D)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  int grid_type_;
  float resolution_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto();

  void InitAsDefaultInstance();
  static GridOptions2D* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// GridOptions2D

// optional .cartographer.mapping.proto.GridOptions2D.GridType grid_type = 1;
inline void GridOptions2D::clear_grid_type() {
  grid_type_ = 0;
}
inline ::cartographer::mapping::proto::GridOptions2D_GridType GridOptions2D::grid_type() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.GridOptions2D.grid_type)
  return static_cast< ::cartographer::mapping::proto::GridOptions2D_GridType >(grid_type_);
}
inline void GridOptions2D::set_grid_type(::cartographer::mapping::proto::GridOptions2D_GridType value) {
  
  grid_type_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.GridOptions2D.grid_type)
}

// optional float resolution = 2;
inline void GridOptions2D::clear_resolution() {
  resolution_ = 0;
}
inline float GridOptions2D::resolution() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.GridOptions2D.resolution)
  return resolution_;
}
inline void GridOptions2D::set_resolution(float value) {
  
  resolution_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.GridOptions2D.resolution)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::cartographer::mapping::proto::GridOptions2D_GridType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::cartographer::mapping::proto::GridOptions2D_GridType>() {
  return ::cartographer::mapping::proto::GridOptions2D_GridType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto__INCLUDED

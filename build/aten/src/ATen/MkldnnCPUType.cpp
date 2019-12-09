// required for old g++ to compile PRId64 macros, see
// https://github.com/pytorch/pytorch/issues/3571
// for context
#define __STDC_FORMAT_MACROS

#include <ATen/MkldnnCPUType.h>

// @generated by aten/src/ATen/gen.py

#include <c10/core/TensorImpl.h>
#include <ATen/CPUGenerator.h>
#include <c10/core/Allocator.h>
#include <ATen/DeviceGuard.h>
#include <ATen/NativeFunctions.h>
#include <ATen/NamedTensorUtils.h>
#include <ATen/Utils.h>
#include <ATen/WrapDimUtils.h>
#include <ATen/Dispatch.h>
#include <c10/util/Half.h>
#include <c10/core/TensorImpl.h>
#include <c10/core/UndefinedTensorImpl.h>
#include <c10/util/Optional.h>
#include <ATen/core/EnableNamedTensor.h>

#include <cstddef>
#include <functional>
#include <memory>
#include <utility>

#include <ATen/Config.h>
#include <ATen/core/op_registration/op_registration.h>



namespace at {

/* example
Tensor * MkldnnCPUType::add(Tensor & a, Tensor & b) {
  std::cout << "add Tensor with backend MkldnnCPU\n";
  return &a;
}
*/

namespace MkldnnCPUType {
#ifndef USE_STATIC_DISPATCH
namespace {
#endif

Tensor add(const Tensor & self, const Tensor & other, Scalar alpha) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::mkldnn_add(self, other, alpha);
}
Tensor & add_(Tensor & self, const Tensor & other, Scalar alpha) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::mkldnn_add_(self, other, alpha);
}
Tensor & add_out(Tensor & out, const Tensor & self, const Tensor & other, Scalar alpha) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::mkldnn_add_out(out, self, other, alpha);
}
Tensor empty(IntArrayRef size, const TensorOptions & options, c10::optional<MemoryFormat> memory_format) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const DeviceGuard device_guard(options.device());
    return at::native::empty_mkldnn(size, options, memory_format);
}
Tensor mkldnn_linear(const Tensor & input, const Tensor & weight, const Tensor & bias) {
#ifdef BUILD_NAMEDTENSOR
    if (input.has_names() || weight.has_names() || bias.has_names()) {
        AT_ERROR(
            "mkldnn_linear is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    const OptionalDeviceGuard device_guard(device_of(input));
    return at::native::mkldnn_linear(input, weight, bias);
}
Tensor mkldnn_max_pool2d(const Tensor & self, IntArrayRef kernel_size, IntArrayRef stride, IntArrayRef padding, IntArrayRef dilation, bool ceil_mode) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names()) {
        AT_ERROR(
            "mkldnn_max_pool2d is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::mkldnn_max_pool2d(self, kernel_size, stride, padding, dilation, ceil_mode);
}
Tensor mul(const Tensor & self, const Tensor & other) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::mkldnn_mul(self, other);
}
Tensor & mul_(Tensor & self, const Tensor & other) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::mkldnn_mul_(self, other);
}
Tensor & mul_out(Tensor & out, const Tensor & self, const Tensor & other) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::mkldnn_mul_out(out, self, other);
}
std::tuple<Tensor,Tensor,Tensor> native_batch_norm(const Tensor & input, const Tensor & weight, const Tensor & bias, const Tensor & running_mean, const Tensor & running_var, bool training, double momentum, double eps) {
#ifdef BUILD_NAMEDTENSOR
    if (input.has_names() || weight.has_names() || bias.has_names() || running_mean.has_names() || running_var.has_names()) {
        AT_ERROR(
            "native_batch_norm is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    const OptionalDeviceGuard device_guard(device_of(input));
    return at::native::mkldnn_batch_norm(input, weight, bias, running_mean, running_var, training, momentum, eps);
}
Tensor _mkldnn_reshape(const Tensor & self, IntArrayRef shape) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names()) {
        AT_ERROR(
            "_mkldnn_reshape is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    // DeviceGuard omitted
    return at::native::mkldnn_reshape(self, shape);
}
Tensor relu(const Tensor & self) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::mkldnn_relu(self);
}
Tensor & relu_(Tensor & self) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::mkldnn_relu_(self);
}
Tensor sigmoid(const Tensor & self) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::mkldnn_sigmoid(self);
}
Tensor & sigmoid_(Tensor & self) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::mkldnn_sigmoid_(self);
}
Tensor _softmax(const Tensor & self, int64_t dim, bool half_to_float) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names()) {
        AT_ERROR(
            "_softmax is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::mkldnn_softmax(self, dim, half_to_float);
}
Tensor _mkldnn_transpose(const Tensor & self, int64_t dim0, int64_t dim1) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names()) {
        AT_ERROR(
            "_mkldnn_transpose is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    // DeviceGuard omitted
    return at::native::mkldnn_transpose(self, dim0, dim1);
}
Tensor & _mkldnn_transpose_(Tensor & self, int64_t dim0, int64_t dim1) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names()) {
        AT_ERROR(
            "_mkldnn_transpose_ is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    // DeviceGuard omitted
    return at::native::mkldnn_transpose_(self, dim0, dim1);
}
Tensor clone(const Tensor & self, c10::optional<MemoryFormat> memory_format) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::mkldnn_clone(self, memory_format);
}
Tensor & zero_(Tensor & self) {
#ifdef BUILD_NAMEDTENSOR

#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::mkldnn_zero_(self);
}
Tensor to_dense(const Tensor & self) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names()) {
        AT_ERROR(
            "to_dense is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::mkldnn_to_dense(self);
}
Tensor mkldnn_reorder_conv2d_weight(const Tensor & self, IntArrayRef padding, IntArrayRef stride, IntArrayRef dilation, int64_t groups) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names()) {
        AT_ERROR(
            "mkldnn_reorder_conv2d_weight is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::mkldnn_reorder_conv2d_weight(self, padding, stride, dilation, groups);
}
Tensor view(const Tensor & self, IntArrayRef size) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names()) {
        AT_ERROR(
            "view is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    // DeviceGuard omitted
    return at::native::mkldnn_view(self, size);
}
Tensor & adaptive_avg_pool2d_out(Tensor & out, const Tensor & self, IntArrayRef output_size) {
#ifdef BUILD_NAMEDTENSOR
    if (out.has_names() || self.has_names()) {
        AT_ERROR(
            "adaptive_avg_pool2d_out is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::mkldnn_adaptive_avg_pool2d_out(out, self, output_size);
}
Tensor mkldnn_adaptive_avg_pool2d(const Tensor & self, IntArrayRef output_size) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names()) {
        AT_ERROR(
            "mkldnn_adaptive_avg_pool2d is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::mkldnn_adaptive_avg_pool2d(self, output_size);
}
Tensor & avg_pool2d_out(Tensor & out, const Tensor & self, IntArrayRef kernel_size, IntArrayRef stride, IntArrayRef padding, bool ceil_mode, bool count_include_pad, c10::optional<int64_t> divisor_override) {
#ifdef BUILD_NAMEDTENSOR
    if (out.has_names() || self.has_names()) {
        AT_ERROR(
            "avg_pool2d_out is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::mkldnn_avg_pool2d_out(out, self, kernel_size, stride, padding, ceil_mode, count_include_pad, divisor_override);
}
Tensor avg_pool2d(const Tensor & self, IntArrayRef kernel_size, IntArrayRef stride, IntArrayRef padding, bool ceil_mode, bool count_include_pad, c10::optional<int64_t> divisor_override) {
#ifdef BUILD_NAMEDTENSOR
    if (self.has_names()) {
        AT_ERROR(
            "avg_pool2d is not yet supported with named tensors. Please drop names via "
            "`tensor = tensor.rename(None)`, call the op with an unnamed tensor, "
            "and set names on the result of the operation.");
    }
#endif
    const OptionalDeviceGuard device_guard(device_of(self));
    return at::native::mkldnn_avg_pool2d(self, kernel_size, stride, padding, ceil_mode, count_include_pad, divisor_override);
}

#ifndef USE_STATIC_DISPATCH
}
#endif
}  // namespace MkldnnCPUType

#ifndef USE_STATIC_DISPATCH
namespace {
auto registerer = torch::RegisterOperators()
  .op(torch::RegisterOperators::options()
    .schema("aten::add.Tensor(Tensor self, Tensor other, *, Scalar alpha=1) -> Tensor")
    .kernel<Tensor (const Tensor &, const Tensor &, Scalar)>(TensorTypeId::MkldnnCPUTensorId, &MkldnnCPUType::add)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::add_.Tensor(Tensor(a!) self, Tensor other, *, Scalar alpha=1) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &, const Tensor &, Scalar), &MkldnnCPUType::add_>(TensorTypeId::MkldnnCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::add.out(Tensor self, Tensor other, *, Scalar alpha=1, Tensor(a!) out) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &, const Tensor &, const Tensor &, Scalar), &MkldnnCPUType::add_out>(TensorTypeId::MkldnnCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::empty.memory_format(int[] size, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None, MemoryFormat? memory_format=None) -> Tensor")
    .impl_unboxedOnlyKernel<Tensor (IntArrayRef, const TensorOptions &, c10::optional<MemoryFormat>), &MkldnnCPUType::empty>(TensorTypeId::MkldnnCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::mkldnn_linear(Tensor input, Tensor weight, Tensor? bias=None) -> Tensor")
    .impl_unboxedOnlyKernel<Tensor (const Tensor &, const Tensor &, const Tensor &), &MkldnnCPUType::mkldnn_linear>(TensorTypeId::MkldnnCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::mkldnn_max_pool2d(Tensor self, int[2] kernel_size, int[2] stride=[], int[2] padding=0, int[2] dilation=1, bool ceil_mode=False) -> Tensor")
    .impl_unboxedOnlyKernel<Tensor (const Tensor &, IntArrayRef, IntArrayRef, IntArrayRef, IntArrayRef, bool), &MkldnnCPUType::mkldnn_max_pool2d>(TensorTypeId::MkldnnCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::mul.Tensor(Tensor self, Tensor other) -> Tensor")
    .kernel<Tensor (const Tensor &, const Tensor &)>(TensorTypeId::MkldnnCPUTensorId, &MkldnnCPUType::mul)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::mul_.Tensor(Tensor(a!) self, Tensor other) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &, const Tensor &), &MkldnnCPUType::mul_>(TensorTypeId::MkldnnCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::mul.out(Tensor self, Tensor other, *, Tensor(a!) out) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &, const Tensor &, const Tensor &), &MkldnnCPUType::mul_out>(TensorTypeId::MkldnnCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::native_batch_norm(Tensor input, Tensor? weight, Tensor? bias, Tensor? running_mean, Tensor? running_var, bool training, float momentum, float eps) -> (Tensor, Tensor, Tensor)")
    .impl_unboxedOnlyKernel<std::tuple<Tensor,Tensor,Tensor> (const Tensor &, const Tensor &, const Tensor &, const Tensor &, const Tensor &, bool, double, double), &MkldnnCPUType::native_batch_norm>(TensorTypeId::MkldnnCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::_mkldnn_reshape(Tensor self, int[] shape) -> Tensor")
    .impl_unboxedOnlyKernel<Tensor (const Tensor &, IntArrayRef), &MkldnnCPUType::_mkldnn_reshape>(TensorTypeId::MkldnnCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::relu(Tensor self) -> Tensor")
    .kernel<Tensor (const Tensor &)>(TensorTypeId::MkldnnCPUTensorId, &MkldnnCPUType::relu)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::relu_(Tensor(a!) self) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &), &MkldnnCPUType::relu_>(TensorTypeId::MkldnnCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::sigmoid(Tensor self) -> Tensor")
    .kernel<Tensor (const Tensor &)>(TensorTypeId::MkldnnCPUTensorId, &MkldnnCPUType::sigmoid)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::sigmoid_(Tensor(a!) self) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &), &MkldnnCPUType::sigmoid_>(TensorTypeId::MkldnnCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::_softmax(Tensor self, int dim, bool half_to_float) -> Tensor")
    .kernel<Tensor (const Tensor &, int64_t, bool)>(TensorTypeId::MkldnnCPUTensorId, &MkldnnCPUType::_softmax)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::_mkldnn_transpose(Tensor self, int dim0, int dim1) -> Tensor")
    .kernel<Tensor (const Tensor &, int64_t, int64_t)>(TensorTypeId::MkldnnCPUTensorId, &MkldnnCPUType::_mkldnn_transpose)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::_mkldnn_transpose_(Tensor(a!) self, int dim0, int dim1) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &, int64_t, int64_t), &MkldnnCPUType::_mkldnn_transpose_>(TensorTypeId::MkldnnCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::clone(Tensor self, *, MemoryFormat? memory_format=None) -> Tensor")
    .impl_unboxedOnlyKernel<Tensor (const Tensor &, c10::optional<MemoryFormat>), &MkldnnCPUType::clone>(TensorTypeId::MkldnnCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::zero_(Tensor(a!) self) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &), &MkldnnCPUType::zero_>(TensorTypeId::MkldnnCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::to_dense(Tensor self) -> Tensor")
    .kernel<Tensor (const Tensor &)>(TensorTypeId::MkldnnCPUTensorId, &MkldnnCPUType::to_dense)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::mkldnn_reorder_conv2d_weight(Tensor self, int[2] padding=0, int[2] stride=1, int[2] dilation=1, int groups=1) -> Tensor")
    .impl_unboxedOnlyKernel<Tensor (const Tensor &, IntArrayRef, IntArrayRef, IntArrayRef, int64_t), &MkldnnCPUType::mkldnn_reorder_conv2d_weight>(TensorTypeId::MkldnnCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::view(Tensor(a) self, int[] size) -> Tensor(a)")
    .impl_unboxedOnlyKernel<Tensor (const Tensor &, IntArrayRef), &MkldnnCPUType::view>(TensorTypeId::MkldnnCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::adaptive_avg_pool2d.out(Tensor self, int[2] output_size, *, Tensor(a!) out) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &, const Tensor &, IntArrayRef), &MkldnnCPUType::adaptive_avg_pool2d_out>(TensorTypeId::MkldnnCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::mkldnn_adaptive_avg_pool2d(Tensor self, int[2] output_size) -> Tensor")
    .impl_unboxedOnlyKernel<Tensor (const Tensor &, IntArrayRef), &MkldnnCPUType::mkldnn_adaptive_avg_pool2d>(TensorTypeId::MkldnnCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::avg_pool2d.out(Tensor self, int[2] kernel_size, int[2] stride=[], int[2] padding=0, bool ceil_mode=False, bool count_include_pad=True, int? divisor_override=None, *, Tensor(a!) out) -> Tensor(a!)")
    .impl_unboxedOnlyKernel<Tensor & (Tensor &, const Tensor &, IntArrayRef, IntArrayRef, IntArrayRef, bool, bool, c10::optional<int64_t>), &MkldnnCPUType::avg_pool2d_out>(TensorTypeId::MkldnnCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA))
  .op(torch::RegisterOperators::options()
    .schema("aten::avg_pool2d(Tensor self, int[2] kernel_size, int[2] stride=[], int[2] padding=0, bool ceil_mode=False, bool count_include_pad=True, int? divisor_override=None) -> Tensor")
    .impl_unboxedOnlyKernel<Tensor (const Tensor &, IntArrayRef, IntArrayRef, IntArrayRef, bool, bool, c10::optional<int64_t>), &MkldnnCPUType::avg_pool2d>(TensorTypeId::MkldnnCPUTensorId)
    .aliasAnalysis(c10::AliasAnalysisKind::FROM_SCHEMA));
}
#endif

}
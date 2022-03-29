#include <node.h>
#include <string>
#include <add.h> // import add from 'add'

using v8::FunctionCallbackInfo;
using v8::Isolate;
using v8::Local;
using v8::Object;
using v8::String;
using v8::Value;

void Method(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  auto ret_str = std::string("1 + 1 = ") + std::to_string(add(1, 1));
  args.GetReturnValue().Set(String::NewFromUtf8(
      isolate, ret_str.c_str()).ToLocalChecked());
}

void Initialize(Local<Object> exports) {
  NODE_SET_METHOD(exports, "tiny_add", Method);
}

NODE_MODULE(NODE_GYP_MODULE_NAME, Initialize)

Pod::Spec.new do |spec|

  spec.name         = "Open-TDFCommon"
  spec.version      = "0.0.11-test"
  spec.summary      = "Supports Module ecosystem reuse for Kuikly and Hippy."
  spec.description  = <<-DESC
                    - tdf 公共代码库
                    - Modules extended by TDFModule are available for Kuikly and Hippy to share
                    - and existing Hippy Modules can also be quickly migrated to Kuikly
                   DESC

  spec.homepage     = "https://kuikly.tds.qq.com/"
  spec.license      = { :type => "Apache", :file => "Open-TDFCommon-0.0.11-test/LICENSE" }

  spec.author             = { "jonasluo" => "jonasluo@tencent.com" }
  spec.platform     = :ios, "9.0"
  spec.source       = { :http => "https://github.com/elixxli/Open-TDFCommon/archive/refs/tags/0.0.11-test.zip" }
  spec.vendored_frameworks = 'Open-TDFCommon-0.0.11-test/TDFCommon.xcframework'
  # spec.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  # spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  spec.pod_target_xcconfig = {
    'VALID_ARCHS[sdk=iphonesimulator*]' => 'arm64 x86_64'
  }
  spec.libraries    = "c++"
  spec.xcconfig = { "HEADER_SEARCH_PATHS" => "Open-TDFCommon-0.0.11-test/TDFCommon.xcframework/ios-arm64/TDFCommon.framework/Headers" }
  spec.user_target_xcconfig = { 'CLANG_ALLOW_NON_MODULAR_INCLUDES_IN_FRAMEWORK_MODULES' => 'YES' }
  spec.requires_arc     = true
#   spec.public_header_files = 'Open-TDFCommon-0.0.11-test/TDFCommon.xcframework/**/*.h'
  spec.source_files = 'Open-TDFCommon-0.0.11-test/TDFCommon.xcframework/**/*.h'
end

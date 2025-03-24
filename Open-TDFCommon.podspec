Pod::Spec.new do |spec|

  spec.name         = "Open-TDFCommon"
  spec.version      = "0.0.1-test"
  spec.summary      = "Supports Module ecosystem reuse for Kuikly and Hippy."
  spec.description  = <<-DESC
                    - tdf 公共代码库
                    - Modules extended by TDFModule are available for Kuikly and Hippy to share
                    - and existing Hippy Modules can also be quickly migrated to Kuikly
                   DESC

  spec.homepage     = "https://kuikly.tds.qq.com/"
  spec.license      = { :type => "Apache", :file => "Open-TDFCommon-0.0.1-test/LICENSE" }

  spec.author             = { "jonasluo" => "jonasluo@tencent.com" }
  spec.platform     = :ios, "9.0"
  spec.source       = { :http => "https://github.com/elixxli/Open-TDFCommon/archive/refs/tags/0.0.1-test.zip" }
  spec.vendored_frameworks = 'Open-TDFCommon-0.0.1-test/TDFCommon.framework'
  spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 arm64' }
  spec.libraries    = "c++"
  spec.public_header_files = 'Open-TDFCommon-0.0.1-test/TDFCommon.frameworkHeaders/**/*.h'
  spec.source_files = 'Open-TDFCommon-0.0.1-test/TDFCommon.frameworkHeaders/**/*.h'
end

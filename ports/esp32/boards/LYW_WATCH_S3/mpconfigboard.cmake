set(IDF_TARGET esp32s3)
# 移除那个不存在的 usb_disabled 文件引用，只引用基础配置
set(SDKCONFIG_DEFAULTS boards/sdkconfig.base)

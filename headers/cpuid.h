typedef enum _CPUID {
    CPUID_BASIC_INFORMATION = 0x0,
    CPUID_PROCESSOR_INFO_AND_FEATURE_BITS = 0x1,
    CPUID_CACHE_AND_TLB_DESCRIPTOR_INFORMATION = 0x2,
    CPUID_PROCESSOR_SERIAL_NUMBER = 0X3,
    CPUID_INTEL_THREAD_CORE_AND_CACHE_TOPOLOGY = 0x4,
    CPUID_MONITOR_MWAIT_INFORMATION = 0x5,
    CPUID_THERMAL_POWER_MANAGEMENT = 0x5,
    CPUID_EXTENDED_FEATURES = 0x7,
    CPUID_ARCHITECTURAL_PERFORMANCE_MONITORING = 0xA,
    CPUID_HYPERVISOR_VENDOR = 0x40000000,
    CPUID_GET_HIGHEST_EXTENDED_FUNCTION_IMPLEMENTED = 0x80000000,
    CPUID_EXTENDED_PROCESSOR_INFO_AND_FEATURE_BITS = 0x80000001,
    CPUID_PROCESSOR_BRAND_STRING_2 = 0x80000002,
    CPUID_PROCESSOR_BRAND_STRING_3 = 0x80000003,
    CPUID_PROCESSOR_BRAND_STRING_4 = 0x80000004,
    CPUID_L1_CACHE_AND_TLB_IDENTIFIERS = 0x80000005,
    CPUID_EXTENDED_L2_CACHE_FEATURES = 0x80000006,
    CPUID_ADVANCED_POWER_MANAGEMENT_INFORMATION = 0x80000007,
    CPUID_VIRTUAL_AND_PHYSICAL_ADDRESS_SIZES = 0x80000008,
    CPUID_AMD_EASTER_EGG = 0x8FFFFFFF,
    CPUID_SECURE_VIRTUAL_MACHINE_SPECIFICATIONS = 0x8000000A,
} CPUID;
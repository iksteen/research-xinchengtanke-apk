namespace Unity.IO.LowLevel.Unsafe;

[NativeAsStruct]
[NativeConditional(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public class AsyncReadManagerMetricsFilters
{
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal UInt64[] TypeIDs; //Field offset: 0x10
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal ProcessingState[] States; //Field offset: 0x18
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal FileReadType[] ReadTypes; //Field offset: 0x20
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal Priority[] PriorityLevels; //Field offset: 0x28
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal AssetLoadingSubsystem[] Subsystems; //Field offset: 0x30

}


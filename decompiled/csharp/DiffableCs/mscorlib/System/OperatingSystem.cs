namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class OperatingSystem : ICloneable, ISerializable
{
	private PlatformID _platform; //Field offset: 0x10
	private Version _version; //Field offset: 0x18
	private string _servicePack; //Field offset: 0x20

	public PlatformID Platform
	{
		 get { } //Length: 8
	}

	public string ServicePack
	{
		 get { } //Length: 8
	}

	public OperatingSystem(PlatformID platform, Version version) { }

	private OperatingSystem(SerializationInfo information, StreamingContext context) { }

	public override object Clone() { }

	public PlatformID get_Platform() { }

	public string get_ServicePack() { }

	public override void GetObjectData(SerializationInfo info, StreamingContext context) { }

	public virtual string ToString() { }

}


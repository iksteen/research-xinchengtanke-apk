namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class Random
{
	private int inext; //Field offset: 0x10
	private int inextp; //Field offset: 0x14
	private Int32[] SeedArray; //Field offset: 0x18

	public Random() { }

	public Random(int Seed) { }

	private double GetSampleForLargeRange() { }

	private int InternalSample() { }

	public override int Next(int minValue, int maxValue) { }

	public override int Next(int maxValue) { }

	protected override double Sample() { }

}

